//! Block-cached random access over an image or block device.

use std::fs::File;
use std::io::{self, Read, Seek, SeekFrom};
use std::path::Path;
use std::sync::Mutex;

const BLOCK: usize = 1 << 20; // 1 MiB cache block

/// Read-only random access source with a single-block cache.
///
/// Recovery tools read in tiny, scattered windows (headers, runlists, chunk
/// tables). A 1 MiB block cache turns those into one pread per block instead
/// of thousands of syscalls.
pub struct Image {
    file: File,
    /// Byte offset of the volume inside the file (partition start).
    base: u64,
    len: u64,
    cache: Mutex<Cache>,
}

struct Cache {
    block: u64,
    valid: usize,
    data: Box<[u8]>,
}

impl Image {
    pub fn open<P: AsRef<Path>>(path: P) -> io::Result<Self> {
        Self::open_at(path, 0)
    }

    /// Open a volume that starts `base` bytes into the file (partition offset).
    pub fn open_at<P: AsRef<Path>>(path: P, base: u64) -> io::Result<Self> {
        let file = File::open(path)?;
        let total = file.metadata()?.len();
        if base > total {
            return Err(io::Error::new(io::ErrorKind::InvalidInput, "offset beyond end of file"));
        }
        let len = total - base;
        Ok(Self {
            file,
            base,
            len,
            cache: Mutex::new(Cache {
                block: u64::MAX,
                valid: 0,
                data: vec![0u8; BLOCK].into_boxed_slice(),
            }),
        })
    }

    pub fn size(&self) -> u64 {
        self.len
    }

    /// Read up to `buf.len()` bytes at `off`. Short reads at EOF are normal.
    pub fn read_at(&self, off: u64, buf: &mut [u8]) -> io::Result<usize> {
        if off >= self.len || buf.is_empty() {
            return Ok(0);
        }
        let want = std::cmp::min(buf.len() as u64, self.len - off) as usize;
        let mut done = 0usize;

        while done < want {
            let pos = off + done as u64;
            let blk = pos / BLOCK as u64;
            let within = (pos % BLOCK as u64) as usize;

            let mut c = self.cache.lock().unwrap();
            if c.block != blk {
                drop(c);
                self.load_block(blk)?;
                c = self.cache.lock().unwrap();
            }
            let avail = c.valid.saturating_sub(within);
            if avail == 0 {
                // Block beyond EOF (sparse tail); nothing more to give.
                break;
            }
            let n = std::cmp::min(avail, want - done);
            buf[done..done + n].copy_from_slice(&c.data[within..within + n]);
            done += n;
        }
        Ok(done)
    }

    fn load_block(&self, blk: u64) -> io::Result<()> {
        let mut f = &self.file;
        f.seek(SeekFrom::Start(self.base + blk * BLOCK as u64))?;
        let mut c = self.cache.lock().unwrap();
        let mut valid = 0usize;
        while valid < BLOCK {
            match f.read(&mut c.data[valid..]) {
                Ok(0) => break,
                Ok(n) => valid += n,
                Err(e) if e.kind() == io::ErrorKind::Interrupted => continue,
                Err(e) => return Err(e),
            }
        }
        c.block = blk;
        c.valid = valid;
        Ok(())
    }

    /// Read exactly `buf.len()` bytes or fail with UnexpectedEof.
    pub fn read_exact_at(&self, off: u64, buf: &mut [u8]) -> io::Result<()> {
        let n = self.read_at(off, buf)?;
        if n == buf.len() {
            Ok(())
        } else {
            Err(io::Error::new(io::ErrorKind::UnexpectedEof, "short read"))
        }
    }

    pub fn u8_at(&self, off: u64) -> io::Result<u8> {
        let mut b = [0u8; 1];
        self.read_exact_at(off, &mut b)?;
        Ok(b[0])
    }

    pub fn bytes_at(&self, off: u64, n: usize) -> io::Result<Vec<u8>> {
        let mut b = vec![0u8; n];
        self.read_exact_at(off, &mut b)?;
        Ok(b)
    }
}

pub fn le16(b: &[u8]) -> u16 {
    u16::from_le_bytes([b[0], b[1]])
}

pub fn le32(b: &[u8]) -> u32 {
    u32::from_le_bytes([b[0], b[1], b[2], b[3]])
}

pub fn le64(b: &[u8]) -> u64 {
    u64::from_le_bytes([b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]])
}

pub fn be16(b: &[u8]) -> u16 {
    u16::from_be_bytes([b[0], b[1]])
}

pub fn be32(b: &[u8]) -> u32 {
    u32::from_be_bytes([b[0], b[1], b[2], b[3]])
}

pub fn be64(b: &[u8]) -> u64 {
    u64::from_be_bytes([b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]])
}
