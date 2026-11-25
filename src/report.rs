//! Carve manifest (CSV) writer.

use crate::sig::Signature;
use std::fs::File;
use std::io::{self, BufWriter, Write};
use std::path::Path;

pub struct Entry {
    pub offset: u64,
    pub length: u64,
    pub ext: &'static str,
    pub signature: &'static str,
    pub confidence: f32,
    pub detail: String,
    pub file: String,
}

pub struct Manifest {
    out: BufWriter<File>,
    enabled: bool,
}

impl Manifest {
    pub fn new(path: impl AsRef<Path>) -> io::Result<Self> {
        let mut out = BufWriter::new(File::create(path)?);
        writeln!(out, "offset,length,ext,signature,confidence,status,file,detail")?;
        Ok(Self { out, enabled: true })
    }

    pub fn disabled() -> io::Result<Self> {
        // /dev/null equivalent: create nothing, keep the API uniform
        let out = BufWriter::new(File::create(std::env::temp_dir().join("rescueforge-empty.csv"))?);
        Ok(Self { out, enabled: false })
    }

    pub fn write(&mut self, e: &Entry) -> io::Result<()> {
        if !self.enabled {
            return Ok(());
        }
        writeln!(
            self.out,
            "{},{},{},{},{:.2},ok,{},{}",
            e.offset,
            e.length,
            e.ext,
            e.signature,
            e.confidence,
            e.file,
            csv_field(&e.detail)
        )
    }

    pub fn reject(&mut self, offset: u64, sig: &Signature, len: u64, reason: &str) -> io::Result<()> {
        if !self.enabled {
            return Ok(());
        }
        writeln!(
            self.out,
            "{},{},{},{},0.00,skip,,{}",
            offset,
            len,
            sig.ext,
            sig.name,
            csv_field(reason)
        )
    }

    pub fn flush(&mut self) -> io::Result<()> {
        self.out.flush()
    }
}

fn csv_field(s: &str) -> String {
    if s.contains(',') || s.contains('"') {
        format!("\"{}\"", s.replace('"', "\"\""))
    } else {
        s.to_string()
    }
}
