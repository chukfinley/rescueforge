//! Streaming multi-pattern scanner.
//!
//! One pass over the image with an Aho-Corasick automaton finds every header
//! pattern at once. Chunks overlap by the longest pattern so a signature that
//! straddles a chunk boundary is not lost.

use crate::io::Image;
use crate::sig::{self, Signature, SIGNATURES};
use std::io;

pub const CHUNK: usize = 4 << 20;

#[derive(Debug, Clone, Copy)]
pub struct Candidate {
    /// Start of the file (match offset minus the pattern's in-file offset).
    pub start: u64,
    /// Index into [`SIGNATURES`].
    pub sig: usize,
}

impl Candidate {
    pub fn signature(&self) -> &'static Signature {
        &SIGNATURES[self.sig]
    }
}

pub struct Scanner {
    ac: aho_corasick::AhoCorasick,
    overlap: usize,
    enabled: Option<Vec<bool>>,
    max_hits: usize,
}

impl Scanner {
    /// `only` restricts scanning to the named signatures (e.g. `["jpeg","png"]`).
    pub fn new(only: Option<&[String]>) -> Self {
        let patterns = sig::patterns();
        let ac = aho_corasick::AhoCorasick::builder()
            .match_kind(aho_corasick::MatchKind::Standard)
            .build(&patterns)
            .expect("signature automaton");
        let overlap = patterns.iter().map(|p| p.len()).max().unwrap_or(8);
        let enabled = only.map(|names| {
            SIGNATURES
                .iter()
                .map(|s| names.iter().any(|n| n == s.name || n == s.ext))
                .collect()
        });
        Self { ac, overlap, enabled, max_hits: 50_000_000 }
    }

    /// Scan the whole image, invoking `visit` for each header hit in offset order.
    pub fn scan<F: FnMut(Candidate)>(&self, img: &Image, mut visit: F) -> io::Result<()> {
        let size = img.size();
        let mut buf = vec![0u8; CHUNK + self.overlap];
        let mut pos: u64 = 0;
        let mut hits = 0usize;
        let mut carry = 0usize;

        while pos < size {
            let want = std::cmp::min(CHUNK as u64, size - pos) as usize;
            let n = img.read_at(pos, &mut buf[carry..carry + want])?;
            if n == 0 {
                break;
            }
            let total = carry + n;
            let base = pos - carry as u64;

            for m in self.ac.find_iter(&buf[..total]) {
                let idx = m.pattern().as_usize();
                let sig = &SIGNATURES[idx];
                if let Some(en) = &self.enabled {
                    if !en[idx] {
                        continue;
                    }
                }
                let at = base + m.start() as u64;
                if at < sig.pattern_at {
                    continue;
                }
                let start = at - sig.pattern_at;
                // Skip hits that fell entirely into the previous chunk's overlap
                if start + sig.pattern_at < pos && pos > 0 {
                    continue;
                }
                hits += 1;
                if hits > self.max_hits {
                    return Ok(());
                }
                visit(Candidate { start, sig: idx });
            }

            pos += n as u64;
            carry = std::cmp::min(self.overlap, total);
            if total > carry {
                buf.copy_within(total - carry..total, 0);
            }
        }
        Ok(())
    }
}
