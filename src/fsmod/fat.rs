//! FAT12/16/32: deleted directory entries keep their first cluster and size.
//!
//! The 0xE5 first byte means the entry was unlinked. The FAT chain is usually
//! cleared, but the cluster number of the file's start survives, so most small
//! and unfragmented files come back intact.

use super::{read_extents, Item};
use crate::io::{le16, le32, Image};
use std::io;

pub struct Volume {
    pub fat_type: u8,
    pub bytes_per_sector: u64,
    pub cluster_size: u64,
    pub fat_offset: u64,
    pub fat_size: u64,
    pub data_offset: u64,
    pub root_offset: u64,
    pub root_cluster: u64,
    pub total_clusters: u64,
    pub fat: Vec<u8>,
}

pub fn probe(img: &Image) -> io::Result<Volume> {
    let bs = img.bytes_at(0, 512)?;
    if &bs[510..512] != [0x55, 0xAA] {
        return Err(io::Error::new(io::ErrorKind::InvalidData, "no FAT boot signature"));
    }
    let bps = le16(&bs[0x0B..]) as u64;
    let spc = bs[0x0D] as u64;
    let reserved = le16(&bs[0x0E..]) as u64;
    let num_fats = bs[0x10] as u64;
    let root_entries = le16(&bs[0x11..]) as u64;
    let total16 = le16(&bs[0x13..]) as u64;
    let fatsz16 = le16(&bs[0x16..]) as u64;
    let total32 = le32(&bs[0x20..]) as u64;
    let fatsz32 = le32(&bs[0x24..]) as u64;
    let root_cluster = le32(&bs[0x2C..]) as u64;

    if !matches!(bps, 512 | 1024 | 2048 | 4096) || spc == 0 || spc > 128 {
        return Err(io::Error::new(io::ErrorKind::InvalidData, "bad FAT geometry"));
    }
    let total_sectors = if total16 != 0 { total16 } else { total32 };
    let fat_size = if fatsz16 != 0 { fatsz16 } else { fatsz32 };
    if fat_size == 0 || num_fats == 0 {
        return Err(io::Error::new(io::ErrorKind::InvalidData, "bad FAT table size"));
    }

    let root_dir_sectors = ((root_entries * 32) + (bps - 1)) / bps;
    let fat_offset = reserved * bps;
    let data_offset = (reserved + num_fats * fat_size + root_dir_sectors) * bps;
    let root_offset = (reserved + num_fats * fat_size) * bps;

    let clusters = if total_sectors > 0 && data_offset / bps < total_sectors {
        ((total_sectors - data_offset / bps) / spc).max(1)
    } else {
        1
    };
    let fat_type = if clusters < 4085 {
        12
    } else if clusters < 65525 {
        16
    } else {
        32
    };

    // the FAT itself is needed for chain walking; cap at 64 MiB
    let fat_len = std::cmp::min(fat_size * bps, 64 * 1024 * 1024);
    let fat = img.bytes_at(fat_offset, fat_len as usize)?;

    Ok(Volume {
        fat_type,
        bytes_per_sector: bps,
        cluster_size: bps * spc,
        fat_offset,
        fat_size,
        data_offset,
        root_offset,
        root_cluster,
        total_clusters: clusters,
        fat,
    })
}

impl Volume {
    pub fn cluster_offset(&self, cluster: u64) -> u64 {
        self.data_offset + (cluster.saturating_sub(2)) * self.cluster_size
    }

    pub fn next_cluster(&self, cluster: u64) -> Option<u64> {
        match self.fat_type {
            12 => {
                let i = (cluster * 3 / 2) as usize;
                if i + 1 >= self.fat.len() {
                    return None;
                }
                let v = le16(&self.fat[i..]) as u64;
                let v = if cluster & 1 == 0 { v & 0x0FFF } else { v >> 4 };
                if v >= 0x0FF8 { None } else { Some(v) }
            }
            16 => {
                let i = (cluster * 2) as usize;
                if i + 1 >= self.fat.len() {
                    return None;
                }
                let v = le16(&self.fat[i..]) as u64;
                if v >= 0xFFF8 { None } else { Some(v) }
            }
            _ => {
                let i = (cluster * 4) as usize;
                if i + 3 >= self.fat.len() {
                    return None;
                }
                let v = le32(&self.fat[i..]) as u64 & 0x0FFF_FFFF;
                if v >= 0x0FFF_FFF8 { None } else { Some(v) }
            }
        }
    }

    pub fn chain(&self, first: u64, limit_clusters: u64) -> Vec<(u64, u64)> {
        let mut out = Vec::new();
        let mut c = first;
        let mut seen = 0u64;
        while c >= 2 && c < self.total_clusters + 2 && seen < limit_clusters.max(1) {
            out.push((self.cluster_offset(c), self.cluster_size));
            seen += 1;
            match self.next_cluster(c) {
                Some(n) if n >= 2 && n != c => c = n,
                _ => break,
            }
            if seen > 4_000_000 {
                break;
            }
        }
        out
    }
}

struct Entry {
    name: String,
    attr: u8,
    cluster: u64,
    size: u64,
    deleted: bool,
}

fn parse_dir(buf: &[u8]) -> Vec<Entry> {
    let mut out = Vec::new();
    let mut lfn: Vec<(u8, String)> = Vec::new();
    let mut i = 0usize;
    while i + 32 <= buf.len() {
        let e = &buf[i..i + 32];
        let first = e[0];
        if first == 0x00 {
            break;
        }
        let attr = e[11];
        if attr == 0x0F {
            // long file name fragment
            let seq = e[0] & 0x1F;
            let mut part = String::new();
            for off in [1usize, 3, 5, 7, 9, 14, 16, 18, 20, 22, 24, 28, 30] {
                let c = le16(&e[off..off + 2]);
                if c == 0 || c == 0xFFFF {
                    break;
                }
                part.push(char::from_u32(c as u32).unwrap_or('\u{FFFD}'));
            }
            lfn.push((seq, part));
            i += 32;
            continue;
        }
        if attr & 0x08 != 0 {
            // volume label
            lfn.clear();
            i += 32;
            continue;
        }
        let deleted = first == 0xE5;
        let cluster = ((le16(&e[20..22]) as u64) << 16) | le16(&e[26..28]) as u64;
        let size = le32(&e[28..32]) as u64;

        let mut name = if lfn.is_empty() {
            short_name(e)
        } else {
            let mut frags = std::mem::take(&mut lfn);
            frags.sort_by_key(|(s, _)| *s);
            frags.iter().map(|(_, s)| s.clone()).collect::<String>()
        };
        if deleted {
            // first character is lost; tools mark it, we show it as _
            if name.starts_with('_') && lfn.is_empty() {
                // already fine
            } else if !lfn.is_empty() {
                // LFN survived; nothing lost
            }
        }
        if name.is_empty() {
            name = format!("cluster_{cluster}");
        }
        if deleted && !name.starts_with('_') && lfn.is_empty() {
            name.insert(0, '_');
        }
        out.push(Entry { name, attr, cluster, size, deleted });
        i += 32;
    }
    out
}

fn short_name(e: &[u8]) -> String {
    let base: Vec<u8> = e[0..8].iter().cloned().filter(|&b| b != b' ').collect();
    let ext: Vec<u8> = e[8..11].iter().cloned().filter(|&b| b != b' ').collect();
    let b = String::from_utf8_lossy(&base).to_string();
    let x = String::from_utf8_lossy(&ext).to_string();
    if x.is_empty() {
        b
    } else {
        format!("{b}.{x}")
    }
}

pub fn items(img: &Image, vol: &Volume, include_live: bool) -> io::Result<Vec<Item>> {
    let mut out = Vec::new();
    let root_len = if vol.fat_type == 32 { vol.cluster_size } else { 512 * 32 };
    let root_off = if vol.fat_type == 32 { vol.cluster_offset(vol.root_cluster) } else { vol.root_offset };
    list_dir(img, vol, root_off, root_len, 0, include_live, &mut out, 0)?;
    Ok(out)
}

fn list_dir(
    img: &Image,
    vol: &Volume,
    offset: u64,
    len: u64,
    parent: u64,
    include_live: bool,
    out: &mut Vec<Item>,
    depth: u32,
) -> io::Result<()> {
    if depth > 8 || len == 0 {
        return Ok(());
    }
    let buf = img.bytes_at(offset, len as usize)?;
    let entries = parse_dir(&buf);
    let mut id = parent + 1;
    for e in entries {
        if e.attr & 0x10 != 0 && e.name != "." && e.name != ".." {
            if include_live && depth < 6 && e.cluster >= 2 {
                let ext = vol.chain(e.cluster, 64);
                if let Some((off, _)) = ext.first() {
                    let _ = list_dir(img, vol, *off, vol.cluster_size, id, include_live, out, depth + 1);
                }
            }
        }
        if e.attr & 0x10 != 0 {
            continue;
        }
        if !include_live && !e.deleted {
            continue;
        }
        let extents = if e.cluster >= 2 {
            let mut ch = vol.chain(e.cluster, (e.size / vol.cluster_size) + 2);
            // deleted entries often keep only the first cluster in the FAT
            if ch.is_empty() {
                ch = vec![(vol.cluster_offset(e.cluster), vol.cluster_size)];
            }
            ch
        } else {
            Vec::new()
        };
        let avail: u64 = extents.iter().map(|(_, l)| *l).sum();
        out.push(Item {
            id: e.cluster,
            parent: id,
            name: e.name,
            size: if e.size == 0 { avail } else { e.size },
            is_dir: false,
            deleted: e.deleted,
            mtime: None,
            extents,
            possibly_reused: e.deleted,
        });
        id += 1;
    }
    Ok(())
}

pub fn export(img: &Image, item: &Item) -> io::Result<Vec<u8>> {
    read_extents(img, &item.extents, item.size)
}
