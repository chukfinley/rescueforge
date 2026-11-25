//! Carver: turn header candidates into whole recovered files.
//!
//! Rules that matter in practice:
//!  * candidates inside an already-recovered extent are dropped (they are
//!    fragments of a file carved a moment ago, not separate files);
//!  * anything under `min_size` or under `min_confidence` is noise;
//!  * the manifest records every decision, including rejects, so a carve can be
//!    audited afterwards.

use crate::io::Image;
use crate::report::{Entry, Manifest};
use crate::scan::{Candidate, Scanner};
use crate::validators;
use std::fs::{self, File};
use std::io::{self, Seek, SeekFrom, Write};
use std::path::{Path, PathBuf};

pub struct CarveOptions {
    pub out: PathBuf,
    pub min_size: u64,
    pub min_confidence: f32,
    pub only: Option<Vec<String>>,
    pub dry_run: bool,
    pub limit: Option<usize>,
    pub skip_zero: bool,
}

pub struct Stats {
    pub candidates: u64,
    pub valid: u64,
    pub written: u64,
    pub bytes: u64,
    pub rejected_overlap: u64,
    pub rejected_small: u64,
    pub rejected_weak: u64,
}

pub fn carve(img: &Image, opts: &CarveOptions) -> io::Result<Stats> {
    let scanner = Scanner::new(opts.only.as_deref());
    if !opts.dry_run {
        fs::create_dir_all(&opts.out)?;
    }
    let mut manifest = Manifest::new(opts.out.join("manifest.csv"))?;
    let mut stats = Stats {
        candidates: 0,
        valid: 0,
        written: 0,
        bytes: 0,
        rejected_overlap: 0,
        rejected_small: 0,
        rejected_weak: 0,
    };

    let mut covered_until: u64 = 0;
    let mut done = 0usize;
    let limit = opts.limit.unwrap_or(usize::MAX);
    let mut fatal: Option<io::Error> = None;

    scanner.scan(img, |cand: Candidate| {
        if fatal.is_some() || done >= limit {
            return;
        }
        stats.candidates += 1;

        if cand.start < covered_until {
            stats.rejected_overlap += 1;
            let _ = manifest.reject(cand.start, cand.signature(), 0, "inside previous extent");
            return;
        }

        let sig = cand.signature();
        let Some(found) = validators::validate(sig.kind, img, cand.start, sig.max_len) else {
            return;
        };
        if found.len < opts.min_size {
            stats.rejected_small += 1;
            let _ = manifest.reject(cand.start, sig, found.len, "below min-size");
            return;
        }
        if found.confidence < opts.min_confidence {
            stats.rejected_weak += 1;
            let _ = manifest.reject(cand.start, sig, found.len, "below min-confidence");
            return;
        }

        stats.valid += 1;
        done += 1;
        let ext = found.ext.unwrap_or(sig.ext);
        let name = format!("{:012}_{}.{}", cand.start, sanitize(sig.name), ext);

        if opts.dry_run {
            println!(
                "{:>14}  {:>12}  {:<10} {:.2}  {}",
                cand.start, found.len, sig.name, found.confidence, found.detail
            );
        } else {
            let path = opts.out.join(&name);
            match write_extent(img, cand.start, found.len, &path, opts.skip_zero) {
                Ok(written) => {
                    stats.written += 1;
                    stats.bytes += written;
                    let _ = manifest.write(&Entry {
                        offset: cand.start,
                        length: found.len,
                        ext,
                        signature: sig.name,
                        confidence: found.confidence,
                        detail: found.detail.clone(),
                        file: name,
                    });
                }
                Err(e) => {
                    fatal = Some(e);
                    return;
                }
            }
        }
        covered_until = cand.start + found.len;
    })?;

    if let Some(e) = fatal {
        return Err(e);
    }
    manifest.flush()?;
    Ok(stats)
}

fn sanitize(s: &str) -> String {
    s.chars().map(|c| if c.is_ascii_alphanumeric() { c } else { '_' }).collect()
}

/// Copy `len` bytes. With `skip_zero`, runs of zero pages are turned into holes
/// so the output reflects recovered data instead of unwritten space.
fn write_extent(img: &Image, start: u64, len: u64, path: &Path, skip_zero: bool) -> io::Result<u64> {
    let mut out = File::create(path)?;
    let mut buf = vec![0u8; 1 << 20];
    let mut pos = start;
    let end = start + len;
    let mut written = 0u64;
    while pos < end {
        let want = std::cmp::min(buf.len() as u64, end - pos) as usize;
        let n = img.read_at(pos, &mut buf[..want])?;
        if n == 0 {
            break;
        }
        let chunk = &buf[..n];
        if skip_zero && chunk.iter().all(|&b| b == 0) {
            out.seek(SeekFrom::Current(n as i64))?;
        } else {
            out.write_all(chunk)?;
            written += n as u64;
        }
        pos += n as u64;
    }
    if skip_zero {
        out.set_len(len)?;
    }
    Ok(written)
}
