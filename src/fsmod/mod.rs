//! Filesystem-level undelete: read the metadata the OS left behind.
//!
//! Carving recovers bytes without names. These parsers do the opposite: they
//! walk $MFT, FAT directory entries or ext4 inodes and rebuild files with their
//! original name, timestamps and cluster/block extents.

pub mod ext4;
pub mod fat;
pub mod ntfs;

use std::fmt;

/// One recoverable (or live) file found by a filesystem parser.
#[derive(Clone, Debug)]
pub struct Item {
    pub id: u64,
    pub parent: u64,
    pub name: String,
    pub size: u64,
    pub is_dir: bool,
    pub deleted: bool,
    pub mtime: Option<i64>,
    /// Physical extents (offset, length) in the image.
    pub extents: Vec<(u64, u64)>,
    /// True when the metadata claims allocation but clusters are reused.
    pub possibly_reused: bool,
}

impl Item {
    pub fn total_len(&self) -> u64 {
        self.extents.iter().map(|(_, l)| l).sum()
    }
}

impl fmt::Display for Item {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let kind = if self.is_dir { "d" } else { "f" };
        let state = if self.deleted { "deleted" } else { "live" };
        write!(f, "{kind} {:>10} {state:<8} {:>6} {}", self.size, self.id, self.name)
    }
}

/// Read `len` bytes from a list of image extents, in order.
pub fn read_extents(img: &crate::io::Image, extents: &[(u64, u64)], len: u64) -> std::io::Result<Vec<u8>> {
    let mut out = Vec::with_capacity(len as usize);
    for &(off, ext_len) in extents {
        let mut pos = off;
        let end = off + ext_len;
        let mut buf = vec![0u8; 1 << 20];
        while pos < end {
            let want = std::cmp::min(buf.len() as u64, end - pos) as usize;
            let n = img.read_at(pos, &mut buf[..want])?;
            if n == 0 {
                break;
            }
            out.extend_from_slice(&buf[..n]);
            pos += n as u64;
            if out.len() as u64 >= len {
                break;
            }
        }
        if out.len() as u64 >= len {
            break;
        }
    }
    out.truncate(len as usize);
    Ok(out)
}
