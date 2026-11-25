//! End-to-end carving test on a synthetic image.
//!
//! Builds real (not mocked) GIF, PDF and ZIP byte streams, scatters them in
//! filler data with the headers at unaligned offsets, then checks that the
//! carver returns byte-identical files. This is the regression net for the
//! validators: if a length walk breaks, the diff shows up here.

use rescueforge::carve::{carve, CarveOptions};
use rescueforge::io::Image;
use std::fs;
use std::io::Write;
use std::path::PathBuf;

fn gif_1x1() -> Vec<u8> {
    let mut v = Vec::new();
    v.extend_from_slice(b"GIF89a");
    v.extend_from_slice(&[0x01, 0x00, 0x01, 0x00]); // 1x1
    v.push(0x80); // global color table, 2 entries
    v.push(0x00); // background
    v.push(0x00); // aspect
    v.extend_from_slice(&[0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF]);
    // graphic control extension
    v.extend_from_slice(&[0x21, 0xF9, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00]);
    // image descriptor
    v.extend_from_slice(&[0x2C, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00]);
    // lzw data
    v.extend_from_slice(&[0x02, 0x02, 0x44, 0x01, 0x00]);
    v.push(0x3B);
    v
}

fn pdf_doc() -> Vec<u8> {
    let mut v = Vec::new();
    v.extend_from_slice(b"%PDF-1.7\n");
    for i in 1..=3 {
        v.extend_from_slice(format!("{i} 0 obj << /Type /Catalog /N {i} >> endobj\n").as_bytes());
    }
    v.extend_from_slice(b"trailer << /Root 1 0 R >>\n%%EOF\n");
    v
}

fn zip_stored(name: &str, payload: &[u8]) -> Vec<u8> {
    let mut out = Vec::new();
    let crc = crc32(payload);
    let name_bytes = name.as_bytes();
    // local file header
    out.extend_from_slice(&0x04034b50u32.to_le_bytes());
    out.extend_from_slice(&20u16.to_le_bytes()); // version
    out.extend_from_slice(&0u16.to_le_bytes()); // flags
    out.extend_from_slice(&0u16.to_le_bytes()); // method: stored
    out.extend_from_slice(&0u16.to_le_bytes()); // time
    out.extend_from_slice(&0u16.to_le_bytes()); // date
    out.extend_from_slice(&crc.to_le_bytes());
    out.extend_from_slice(&(payload.len() as u32).to_le_bytes());
    out.extend_from_slice(&(payload.len() as u32).to_le_bytes());
    out.extend_from_slice(&(name_bytes.len() as u16).to_le_bytes());
    out.extend_from_slice(&0u16.to_le_bytes()); // extra
    out.extend_from_slice(name_bytes);
    out.extend_from_slice(payload);

    let cd_start = out.len();
    // central directory
    out.extend_from_slice(&0x02014b50u32.to_le_bytes());
    out.extend_from_slice(&20u16.to_le_bytes());
    out.extend_from_slice(&20u16.to_le_bytes());
    out.extend_from_slice(&0u16.to_le_bytes());
    out.extend_from_slice(&0u16.to_le_bytes());
    out.extend_from_slice(&0u16.to_le_bytes());
    out.extend_from_slice(&0u16.to_le_bytes());
    out.extend_from_slice(&crc.to_le_bytes());
    out.extend_from_slice(&(payload.len() as u32).to_le_bytes());
    out.extend_from_slice(&(payload.len() as u32).to_le_bytes());
    out.extend_from_slice(&(name_bytes.len() as u16).to_le_bytes());
    out.extend_from_slice(&0u16.to_le_bytes()); // extra
    out.extend_from_slice(&0u16.to_le_bytes()); // comment
    out.extend_from_slice(&0u16.to_le_bytes()); // disk
    out.extend_from_slice(&0u16.to_le_bytes()); // internal attrs
    out.extend_from_slice(&0u32.to_le_bytes()); // external attrs
    out.extend_from_slice(&0u32.to_le_bytes()); // local header offset
    out.extend_from_slice(name_bytes);
    let cd_size = out.len() - cd_start;
    // EOCD
    out.extend_from_slice(&0x06054b50u32.to_le_bytes());
    out.extend_from_slice(&0u16.to_le_bytes());
    out.extend_from_slice(&0u16.to_le_bytes());
    out.extend_from_slice(&1u16.to_le_bytes());
    out.extend_from_slice(&1u16.to_le_bytes());
    out.extend_from_slice(&(cd_size as u32).to_le_bytes());
    out.extend_from_slice(&(cd_start as u32).to_le_bytes());
    out.extend_from_slice(&0u16.to_le_bytes());
    out
}

fn crc32(data: &[u8]) -> u32 {
    let mut crc = 0xFFFF_FFFFu32;
    for &b in data {
        crc ^= b as u32;
        for _ in 0..8 {
            let mask = (crc & 1).wrapping_neg();
            crc = (crc >> 1) ^ (0xEDB8_8320 & mask);
        }
    }
    !crc
}

fn filler(n: usize, seed: u8) -> Vec<u8> {
    // deterministic, non-repeating enough to avoid accidental headers
    let mut v = Vec::with_capacity(n);
    let mut x = seed as u32 | 1;
    for _ in 0..n {
        x = x.wrapping_mul(1664525).wrapping_add(1013904223);
        v.push((x >> 16) as u8);
    }
    v
}

fn tmpdir(name: &str) -> PathBuf {
    let mut p = std::env::temp_dir();
    p.push(format!("rescueforge-test-{name}-{}", std::process::id()));
    let _ = fs::remove_dir_all(&p);
    fs::create_dir_all(&p).unwrap();
    p
}

#[test]
fn carves_gif_pdf_zip_byte_exact() {
    let dir = tmpdir("carve");
    let gif = gif_1x1();
    let pdf = pdf_doc();
    let zip = zip_stored("hello.txt", b"rescueforge payload\n");

    let mut image = Vec::new();
    image.extend_from_slice(&filler(4099, 1));
    let gif_at = image.len() as u64;
    image.extend_from_slice(&gif);
    image.extend_from_slice(&filler(8193, 2));
    let pdf_at = image.len() as u64;
    image.extend_from_slice(&pdf);
    image.extend_from_slice(&filler(3001, 3));
    let zip_at = image.len() as u64;
    image.extend_from_slice(&zip);
    image.extend_from_slice(&filler(5000, 4));

    let img_path = dir.join("test.img");
    fs::File::create(&img_path).unwrap().write_all(&image).unwrap();

    let out = dir.join("out");
    let img = Image::open(&img_path).unwrap();
    let stats = carve(
        &img,
        &CarveOptions {
            out: out.clone(),
            min_size: 16,
            min_confidence: 0.4,
            only: None,
            dry_run: false,
            limit: None,
            skip_zero: false,
        },
    )
    .unwrap();

    assert!(stats.written >= 3, "expected at least 3 files, got {}", stats.written);

    let read_out = |at: u64, ext: &str| -> Vec<u8> {
        let p = out.join(format!("{:012}_{}.{}", at, "", ext));
        let _ = p;
        // names include the signature name; find by offset prefix instead
        let prefix = format!("{at:012}_");
        let entry = fs::read_dir(&out)
            .unwrap()
            .filter_map(|e| e.ok())
            .find(|e| e.file_name().to_string_lossy().starts_with(&prefix) && e.file_name().to_string_lossy().ends_with(ext))
            .unwrap_or_else(|| panic!("no carved file at {at} with .{ext}"));
        fs::read(entry.path()).unwrap()
    };

    assert_eq!(read_out(gif_at, "gif"), gif, "gif mismatch");
    assert_eq!(read_out(pdf_at, "pdf"), pdf, "pdf mismatch");
    assert_eq!(read_out(zip_at, "zip"), zip, "zip mismatch");

    let manifest = fs::read_to_string(out.join("manifest.csv")).unwrap();
    assert!(manifest.lines().count() > 3, "manifest should list entries");
    fs::remove_dir_all(&dir).ok();
}

#[test]
fn signature_database_is_sane() {
    let sigs = rescueforge::sig::SIGNATURES;
    assert!(sigs.len() >= 20);
    for s in sigs {
        assert!(!s.pattern.is_empty(), "{} has empty pattern", s.name);
        assert!(s.max_len > s.pattern_at, "{} has bad max_len", s.name);
    }
    // every signature kind must be reachable by the CLI filter
    assert!(rescueforge::sig::by_name("jpeg").is_some());
    assert!(rescueforge::sig::by_name("nope").is_none());
}
