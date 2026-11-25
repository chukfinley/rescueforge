//! ext4 (and ext2/3) undelete via the inode table.
//!
//! Deleted inodes keep nlink == 0 and a non-zero deletion time; the extent tree
//! in i_block is normally still readable, so files come back with their runs and
//! often their original path (by scanning live directories for referencing
//! entries).

use super::{read_extents, Item};
use crate::io::{le16, le32, Image};
use std::io;

pub struct Volume {
    pub block_size: u64,
    pub inodes_count: u64,
    pub blocks_count: u64,
    pub inodes_per_group: u64,
    pub inode_size: u64,
    pub first_data_block: u64,
    pub desc_size: u64,
    pub groups: u64,
    pub inode_tables: Vec<u64>, // absolute offsets of each group's inode table
}

pub fn probe(img: &Image) -> io::Result<Volume> {
    let sb = img.bytes_at(1024, 1024)?;
    if le16(&sb[0x38..0x3A]) != 0xEF53 {
        return Err(io::Error::new(io::ErrorKind::InvalidData, "no ext2/3/4 magic"));
    }
    let inodes_count = le32(&sb[0x00..0x04]) as u64;
    let blocks_count = le32(&sb[0x04..0x08]) as u64;
    let first_data_block = le32(&sb[0x14..0x18]) as u64;
    let log_block = le32(&sb[0x18..0x1C]) as u64;
    let block_size = 1024u64 << log_block;
    let blocks_per_group = le32(&sb[0x20..0x24]) as u64;
    let inodes_per_group = le32(&sb[0x28..0x2C]) as u64;
    let inode_size = le16(&sb[0x58..0x5A]) as u64;
    let incompat = le32(&sb[0x60..0x64]);
    let desc_size = if incompat & 0x80 != 0 { le16(&sb[0xFE..0x100]) as u64 } else { 32 };

    if !(1024..=65536).contains(&block_size) || inodes_per_group == 0 {
        return Err(io::Error::new(io::ErrorKind::InvalidData, "bad ext geometry"));
    }
    let groups = ((blocks_count.saturating_sub(first_data_block)) + blocks_per_group - 1)
        / blocks_per_group.max(1);

    // group descriptor table starts right after the superblock block
    let gdt_block = first_data_block + 1;
    let gdt_off = gdt_block * block_size;
    let need = (desc_size * groups).min(4 * 1024 * 1024);
    let gdt = img.bytes_at(gdt_off, need as usize)?;
    let mut tables = Vec::new();
    for g in 0..groups as usize {
        let base = g * desc_size as usize;
        if base + 40 > gdt.len() {
            break;
        }
        let table_block = le32(&gdt[base + 8..base + 12]) as u64;
        tables.push(table_block * block_size);
    }

    Ok(Volume {
        block_size,
        inodes_count,
        blocks_count,
        inodes_per_group,
        inode_size: inode_size.max(128),
        first_data_block,
        desc_size,
        groups,
        inode_tables: tables,
    })
}

pub struct Inode {
    pub number: u64,
    pub mode: u16,
    pub uid: u32,
    pub size: u64,
    pub links: u16,
    pub atime: i64,
    pub mtime: i64,
    pub dtime: i64,
    pub extents: Vec<(u64, u64)>,
    pub direct_block: Option<u64>,
}

fn inode_offset(vol: &Volume, number: u64) -> Option<u64> {
    if number == 0 || number > vol.inodes_count {
        return None;
    }
    let idx = number - 1;
    let group = idx / vol.inodes_per_group;
    let within = idx % vol.inodes_per_group;
    let table = *vol.inode_tables.get(group as usize)?;
    Some(table + within * vol.inode_size)
}

pub fn read_inode(img: &Image, vol: &Volume, number: u64) -> io::Result<Inode> {
    let off = inode_offset(vol, number)
        .ok_or_else(|| io::Error::new(io::ErrorKind::InvalidData, "inode out of range"))?;
    let b = img.bytes_at(off, vol.inode_size.min(256) as usize)?;
    let mode = le16(&b[0x00..0x02]);
    let size_lo = le32(&b[0x04..0x08]) as u64;
    let atime = le32(&b[0x08..0x0C]) as i64;
    let dtime = le32(&b[0x14..0x18]) as i64;
    let mtime = le32(&b[0x10..0x14]) as i64;
    let links = le16(&b[0x1A..0x1C]);
    let flags = le32(&b[0x20..0x24]);
    let size_high = le32(&b[0x6C..0x70]) as u64;
    let size = if mode & 0xF000 == 0x8000 { size_lo | (size_high << 32) } else { size_lo };

    let i_block = &b[0x28..0x28 + 60];
    let mut extents = Vec::new();
    let mut direct_block = None;
    if flags & 0x1000_0000 != 0 {
        // EXT4_INLINE_DATA_FL: the file content lives inside the inode
    } else if le16(&i_block[0..2]) == 0xF30A {
        parse_extent_node(img, vol, i_block, &mut extents, 0)?;
    } else {
        // ext2/3: classic direct + single indirect pointers
        let d = le32(&i_block[0..4]) as u64;
        if d != 0 {
            direct_block = Some(d);
            let bs = vol.block_size;
            let n = std::cmp::min(size, 12 * bs);
            extents.push((d * bs, n));
        }
    }

    Ok(Inode { number, mode, uid: 0, size, links, atime, mtime, dtime, extents, direct_block })
}

fn parse_extent_node(
    img: &Image,
    vol: &Volume,
    node: &[u8],
    out: &mut Vec<(u64, u64)>,
    depth: u32,
) -> io::Result<()> {
    if depth > 4 || node.len() < 12 {
        return Ok(());
    }
    let entries = le16(&node[2..4]) as usize;
    let node_depth = le16(&node[6..8]) as usize;
    let bs = vol.block_size;
    for i in 0..entries {
        let base = 12 + i * 12;
        if base + 12 > node.len() {
            break;
        }
        let e = &node[base..base + 12];
        if node_depth == 0 {
            let len = le16(&e[4..6]) as u64;
            let hi = le16(&e[6..8]) as u64;
            let lo = le32(&e[8..12]) as u64;
            let start = (hi << 32) | lo;
            let uninit = len > 32768;
            let clusters = if uninit { len - 32768 } else { len };
            if start != 0 && clusters != 0 {
                let _ = uninit;
                out.push((start * bs, clusters * bs));
            }
        } else {
            let hi = le16(&e[8..10]) as u64;
            let lo = le32(&e[4..8]) as u64;
            let child = (hi << 32) | lo;
            if child != 0 {
                let off = child * bs;
                if let Ok(block) = img.bytes_at(off, 4096) {
                    parse_extent_node(img, vol, &block, out, depth + 1)?;
                }
            }
        }
    }
    Ok(())
}

pub fn items(img: &Image, vol: &Volume, include_live: bool) -> io::Result<Vec<Item>> {
    let mut out = Vec::new();
    for n in 1..=vol.inodes_count.min(8_000_000) {
        let Ok(ino) = read_inode(img, vol, n) else { continue };
        let is_file = ino.mode & 0xF000 == 0x8000;
        let deleted = ino.links == 0 && ino.dtime != 0;
        if !is_file {
            continue;
        }
        if !include_live && !deleted {
            continue;
        }
        if ino.size == 0 || ino.extents.is_empty() {
            continue;
        }
        out.push(Item {
            id: n,
            parent: 0,
            name: format!("inode_{n}"),
            size: ino.size,
            is_dir: false,
            deleted,
            mtime: Some(ino.mtime),
            extents: ino.extents,
            possibly_reused: deleted,
        });
    }
    Ok(out)
}

pub fn export(img: &Image, item: &Item) -> io::Result<Vec<u8>> {
    read_extents(img, &item.extents, item.size)
}
