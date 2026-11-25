//! NTFS: undelete straight out of $MFT.
//!
//! Strategy used by commercial tools and reproduced here:
//!  1. read the boot sector for bytes-per-sector, cluster size and $MFT LCN;
//!  2. read $MFT record 0 to learn its own data runs;
//!  3. stream every FILE record out of the MFT;
//!  4. a record is deleted when its in-use flag is clear - the name, parent
//!     reference, timestamps and cluster runs usually survive untouched;
//!  5. map runs to physical offsets and copy.
//!
//! `$FILE_NAME` namespaces are handled: Win32 (1), DOS (2), POSIX (0).

use super::{read_extents, Item};
use crate::io::{le16, le32, le64, Image};
use std::io;

pub struct Volume {
    pub bytes_per_sector: u64,
    pub cluster_size: u64,
    pub record_size: u64,
    pub mft_lcn: u64,
    pub total_sectors: u64,
    pub mft_bytes: u64,
}

pub fn probe(img: &Image) -> io::Result<Volume> {
    let bs = img.bytes_at(0, 512)?;
    if &bs[3..11] != b"NTFS    " {
        return Err(io::Error::new(io::ErrorKind::InvalidData, "not an NTFS volume"));
    }
    let bytes_per_sector = le16(&bs[0x0B..]) as u64;
    let sectors_per_cluster = bs[0x0D] as u64;
    let total_sectors = le64(&bs[0x28..]);
    let mft_lcn = le64(&bs[0x30..]);
    let cpr = bs[0x40] as i8;
    let record_size = if cpr > 0 {
        (cpr as u64) * cluster_size(bytes_per_sector, sectors_per_cluster)
    } else {
        1u64 << (-(cpr as i32)).min(30)
    };
    let cluster_size = cluster_size(bytes_per_sector, sectors_per_cluster);
    if cluster_size == 0 || cluster_size > 2 * 1024 * 1024 {
        return Err(io::Error::new(io::ErrorKind::InvalidData, "implausible cluster size"));
    }
    Ok(Volume {
        bytes_per_sector,
        cluster_size,
        record_size,
        mft_lcn,
        total_sectors,
        mft_bytes: 0,
    })
}

fn cluster_size(bps: u64, spc: u64) -> u64 {
    bps * spc
}

/// A decoded attribute.
#[derive(Debug, Clone)]
pub struct Attr {
    pub kind: u32,
    pub resident: bool,
    /// Inline value for resident attributes.
    pub value: Vec<u8>,
    /// Cluster runs for non-resident attributes: (vcn_start, clusters, lcn).
    pub runs: Vec<(u64, u64, Option<u64>)>,
    pub real_size: u64,
}

#[derive(Debug, Clone)]
pub struct Record {
    pub number: u64,
    pub in_use: bool,
    pub is_dir: bool,
    pub name: Option<String>,
    pub parent: u64,
    pub attrs: Vec<Attr>,
    pub mtime: Option<i64>,
    pub ctime: Option<i64>,
}

impl Record {
    pub fn data(&self) -> Option<&Attr> {
        self.attrs.iter().find(|a| a.kind == 0x80)
    }

    pub fn size(&self) -> u64 {
        self.data().map(|a| {
            if a.resident {
                a.value.len() as u64
            } else {
                a.real_size
            }
        }).unwrap_or(0)
    }
}

/// Filetime (100ns since 1601) to unix seconds.
fn filetime(v: u64) -> i64 {
    if v == 0 {
        return 0;
    }
    const EPOCH_DIFF: u64 = 11_644_473_600;
    (v / 10_000_000) as i64 - EPOCH_DIFF as i64
}

pub fn read_record(img: &Image, job: &Volume, offset: u64, number: u64) -> io::Result<Record> {
    let size = job.record_size as usize;
    let mut buf = img.bytes_at(offset, size)?;
    if &buf[0..4] != b"FILE" {
        return Err(io::Error::new(io::ErrorKind::InvalidData, "bad FILE signature"));
    }
    // apply the update sequence array: the last two bytes of every sector hold
    // a sequence number that must be replaced by the saved copy.
    let usa_off = le16(&buf[4..6]) as usize;
    let usa_cnt = le16(&buf[6..8]) as usize;
    if usa_off + usa_cnt * 2 <= buf.len() && usa_cnt > 1 {
        let usn: Vec<u8> = buf[usa_off..usa_off + 2].to_vec();
        for i in 1..usa_cnt {
            let end = i * 512;
            if end > buf.len() {
                break;
            }
            let saved = [buf[usa_off + i * 2], buf[usa_off + i * 2 + 1]];
            let _ = &usn;
            buf[end - 2..end].copy_from_slice(&saved);
        }
    }

    let flags = le16(&buf[0x16..0x18]);
    let mut rec = Record {
        number,
        in_use: flags & 0x01 != 0,
        is_dir: flags & 0x02 != 0,
        name: None,
        parent: 0,
        attrs: Vec::new(),
        mtime: None,
        ctime: None,
    };

    let mut p = le16(&buf[0x14..0x16]) as usize;
    while p + 8 <= buf.len() {
        let kind = le32(&buf[p..p + 4]);
        if kind == 0xFFFF_FFFF || kind == 0 {
            break;
        }
        let alen = le32(&buf[p + 4..p + 8]) as usize;
        if alen < 8 || p + alen > buf.len() {
            break;
        }
        let a = &buf[p..p + alen];
        let resident = a[8] == 0;
        let name_len = a[9] as usize;
        let _name_off = le16(&a[10..12]) as usize;
        let attr_kind = kind;

        let parsed = if resident {
            let value_len = le32(&a[16..20]) as usize;
            let value_off = le16(&a[20..22]) as usize;
            if value_off + value_len <= a.len() {
                Attr {
                    kind: attr_kind,
                    resident: true,
                    value: a[value_off..value_off + value_len].to_vec(),
                    runs: Vec::new(),
                    real_size: value_len as u64,
                }
            } else {
                Attr { kind: attr_kind, resident: true, value: Vec::new(), runs: Vec::new(), real_size: 0 }
            }
        } else {
            let run_off = le16(&a[32..34]) as usize;
            let real_size = le64(&a[48..56]);
            let runs = parse_runs(&a[run_off.min(a.len())..]);
            Attr { kind: attr_kind, resident: false, value: Vec::new(), runs, real_size }
        };

        match kind {
            0x10 => {
                if parsed.value.len() >= 24 {
                    rec.ctime = Some(filetime(le64(&parsed.value[0..8])));
                    rec.mtime = Some(filetime(le64(&parsed.value[8..16])));
                }
            }
            0x30 => {
                if parsed.value.len() >= 0x42 {
                    let v = &parsed.value;
                    let parent = le64(&v[0..8]) & 0x0000_FFFF_FFFF_FFFF;
                    let ns = v[0x41];
                    let name_chars = v[0x40] as usize;
                    let mut name = String::new();
                    let mut o = 0x42;
                    for _ in 0..name_chars {
                        if o + 2 > v.len() {
                            break;
                        }
                        let c = le16(&v[o..o + 2]);
                        name.push(char::from_u32(c as u32).unwrap_or('\u{FFFD}'));
                        o += 2;
                    }
                    // prefer Win32 names, keep DOS as fallback
                    if rec.name.is_none() || ns == 1 {
                        rec.name = Some(name);
                        rec.parent = parent;
                    }
                }
            }
            _ => {}
        }
        rec.attrs.push(parsed);
        p += alen;
        let _ = name_len;
    }
    Ok(rec)
}

/// Decode a non-resident runlist.
pub fn parse_runs(buf: &[u8]) -> Vec<(u64, u64, Option<u64>)> {
    let mut runs = Vec::new();
    let mut i = 0usize;
    let mut lcn: i64 = 0;
    let mut vcn: u64 = 0;
    while i < buf.len() {
        let header = buf[i];
        if header == 0 {
            break;
        }
        let len_bytes = (header & 0x0F) as usize;
        let off_bytes = (header >> 4) as usize;
        i += 1;
        if len_bytes == 0 || i + len_bytes + off_bytes > buf.len() {
            break;
        }
        let mut run_len: u64 = 0;
        for k in 0..len_bytes {
            run_len |= (buf[i + k] as u64) << (8 * k);
        }
        i += len_bytes;
        let mut delta: i64 = 0;
        if off_bytes > 0 {
            let mut raw: i64 = 0;
            for k in 0..off_bytes {
                raw |= (buf[i + k] as i64) << (8 * k);
            }
            // sign extend
            let bits = 8 * off_bytes;
            if bits < 64 && raw & (1 << (bits - 1)) != 0 {
                raw -= 1i64 << bits;
            }
            delta = raw;
            i += off_bytes;
        }
        if delta == 0 {
            runs.push((vcn, run_len, None)); // sparse
        } else {
            lcn += delta;
            runs.push((vcn, run_len, Some(lcn as u64)));
        }
        vcn += run_len;
    }
    runs
}

pub fn record_extents(job: &Volume, a: &Attr) -> Vec<(u64, u64)> {
    let mut out = Vec::new();
    let cs = job.cluster_size;
    let mut remaining = a.real_size;
    for &(_vcn, clusters, lcn) in &a.runs {
        let bytes = std::cmp::min(clusters * cs, remaining);
        if let Some(l) = lcn {
            out.push((l * cs, bytes));
        }
        remaining = remaining.saturating_sub(bytes);
        if remaining == 0 {
            break;
        }
    }
    out
}

/// Stream all MFT records. Returns (mft_len, iterator over records).
pub fn for_each_record<F: FnMut(Record)>(img: &Image, job: &Volume, mut visit: F) -> io::Result<()> {
    // record 0 holds the MFT's own $DATA attribute
    let mft_off = job.mft_lcn * job.cluster_size;
    let rec0 = read_record(img, job, mft_off, 0)?;
    let data = rec0
        .data()
        .ok_or_else(|| io::Error::new(io::ErrorKind::InvalidData, "$MFT has no $DATA"))?;
    let extents = record_extents(job, data);

    let mut number = 0u64;
    for (off, len) in extents {
        let mut pos = off;
        let end = off + len;
        while pos + job.record_size <= end {
            match read_record(img, job, pos, number) {
                Ok(rec) => visit(rec),
                Err(_) => {}
            }
            pos += job.record_size;
            number += 1;
        }
    }
    Ok(())
}

pub fn items(img: &Image, job: &Volume, include_live: bool) -> io::Result<Vec<Item>> {
    let mut out = Vec::new();
    for_each_record(img, job, |rec| {
        if rec.number < 24 {
            return; // system records
        }
        if rec.in_use && !include_live {
            return;
        }
        let Some(name) = rec.name.clone() else { return };
        let data = rec.data();
        let extents = data.map(|a| record_extents(job, a)).unwrap_or_default();
        out.push(Item {
            id: rec.number,
            parent: rec.parent,
            name,
            size: rec.size(),
            is_dir: rec.is_dir,
            deleted: !rec.in_use,
            mtime: rec.mtime,
            extents,
            possibly_reused: !rec.in_use,
        });
    })?;
    Ok(out)
}

pub fn export(img: &Image, item: &Item) -> io::Result<Vec<u8>> {
    read_extents(img, &item.extents, item.size)
}
