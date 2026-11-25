//! Structural validators: one per signature kind.
//!
//! A header match alone is meaningless (every cluster boundary can look like
//! `MZ`). Each validator walks the real container structure and returns the
//! exact byte length of the file. That length is what makes carving output
//! usable instead of a pile of fragments.

use crate::io::*;
use crate::sig::Kind;

#[derive(Debug, Clone)]
pub struct Found {
    pub len: u64,
    pub confidence: f32,
    pub detail: String,
    pub ext: Option<&'static str>,
}

impl Found {
    fn new(len: u64, confidence: f32, detail: impl Into<String>) -> Self {
        Self { len, confidence, detail: detail.into(), ext: None }
    }
}

const MAX_READ: usize = 8 << 20;

fn read(img: &Image, off: u64, len: usize) -> Option<Vec<u8>> {
    if len > MAX_READ {
        return None;
    }
    img.bytes_at(off, len).ok()
}

pub fn validate(kind: Kind, img: &Image, start: u64, max_len: u64) -> Option<Found> {
    let avail = img.size().saturating_sub(start);
    let budget = max_len.min(avail);
    if budget < 8 {
        return None;
    }
    match kind {
        Kind::Jpeg => jpeg(img, start, budget),
        Kind::Png => png(img, start, budget),
        Kind::Gif => gif(img, start, budget),
        Kind::Bmp => bmp(img, start, budget),
        Kind::Tiff => tiff(img, start, budget),
        Kind::Riff => riff(img, start, budget),
        Kind::Pdf => pdf(img, start, budget),
        Kind::Zip => zip(img, start, budget),
        Kind::Rar => rar(img, start, budget),
        Kind::SevenZip => sevenzip(img, start, budget),
        Kind::Gzip => gzip(img, start, budget),
        Kind::Mp4 => mp4(img, start, budget),
        Kind::Matroska => matroska(img, start, budget),
        Kind::Mp3 => mp3(img, start, budget),
        Kind::Flac => flac(img, start, budget),
        Kind::Ogg => ogg(img, start, budget),
        Kind::Sqlite => sqlite(img, start, budget),
        Kind::Ole2 => ole2(img, start, budget),
        Kind::Mz => pe(img, start, budget),
        Kind::Elf => elf(img, start, budget),
        Kind::Iso => iso(img, start, budget),
        Kind::Pst => pst(img, start, budget),
        Kind::Pcap => pcap(img, start, budget),
    }
}

// ---------------------------------------------------------------- helpers

#[allow(dead_code)]
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

fn find_bytes(img: &Image, from: u64, to: u64, needle: &[u8]) -> Option<u64> {
    let mut pos = from;
    let mut buf = vec![0u8; 256 * 1024];
    let mut carry: Vec<u8> = Vec::new();
    while pos < to {
        let want = std::cmp::min(buf.len() as u64, to - pos) as usize;
        let n = img.read_at(pos, &mut buf[..want]).ok()?;
        if n == 0 {
            return None;
        }
        let mut hay = std::mem::take(&mut carry);
        hay.extend_from_slice(&buf[..n]);
        if let Some(i) = hay.windows(needle.len()).position(|w| w == needle) {
            return Some(pos - (hay.len() - n) as u64 + i as u64);
        }
        let keep = needle.len().saturating_sub(1);
        carry = hay[hay.len().saturating_sub(keep)..].to_vec();
        pos += n as u64;
    }
    None
}

// ---------------------------------------------------------------- jpeg

fn jpeg(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let limit = start + budget;
    let mut pos = start + 2;
    let mut segments = 0u32;
    while pos + 4 <= limit {
        let hdr = read(img, pos, 2)?;
        if hdr[0] != 0xFF {
            return None;
        }
        let marker = hdr[1];
        match marker {
            0xD9 => {
                let len = pos + 2 - start;
                if segments < 3 {
                    return None;
                }
                return Some(Found::new(len, 0.95, format!("{segments} segments + EOI")));
            }
            0x00 | 0xFF => return None,
            0xD0..=0xD7 | 0x01 => {
                pos += 2;
                continue;
            }
            0xDA => {
                // start of scan: entropy-coded data runs to the next FFD9
                let seg = read(img, pos + 2, 2)?;
                let scan_start = pos + 2 + le16(&seg) as u64;
                let eoi = find_bytes(img, scan_start, limit, &[0xFF, 0xD9])?;
                let len = eoi + 2 - start;
                return Some(Found::new(len, 0.95, format!("{segments} segments + scan")));
            }
            _ => {}
        }
        let seg = read(img, pos + 2, 2)?;
        let seg_len = le16(&seg) as u64;
        if seg_len < 2 {
            return None;
        }
        pos += 2 + seg_len;
        segments += 1;
        if segments > 10_000 {
            return None;
        }
    }
    None
}

// ---------------------------------------------------------------- png

fn png(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let limit = start + budget;
    let mut pos = start + 8;
    let mut chunks = 0u32;
    let mut crc_ok = 0u32;
    let mut crc_bad = 0u32;
    while pos + 12 <= limit {
        let hdr = read(img, pos, 8)?;
        let len = be32(&hdr) as u64;
        let typ = &hdr[4..8];
        if len > budget || pos + 12 + len > limit {
            return None;
        }
        // CRC over type + data
        let mut crc = 0xFFFF_FFFFu32;
        let feed = |bytes: &[u8], crc: &mut u32| {
            for &b in bytes {
                *crc ^= b as u32;
                for _ in 0..8 {
                    let mask = (*crc & 1).wrapping_neg();
                    *crc = (*crc >> 1) ^ (0xEDB8_8320 & mask);
                }
            }
        };
        feed(typ, &mut crc);
        let mut off = pos + 8;
        let mut remaining = len;
        let mut buf = vec![0u8; 256 * 1024];
        while remaining > 0 {
            let want = std::cmp::min(remaining, buf.len() as u64) as usize;
            let n = img.read_at(off, &mut buf[..want]).ok()?;
            if n == 0 {
                return None;
            }
            feed(&buf[..n], &mut crc);
            off += n as u64;
            remaining -= n as u64;
        }
        let stored = be32(&read(img, pos + 8 + len, 4)?);
        if (!crc) == stored {
            crc_ok += 1;
        } else {
            crc_bad += 1;
        }
        chunks += 1;
        if typ == b"IEND" {
            if crc_bad > 0 && crc_ok == 0 {
                return None;
            }
            let total = pos + 12 + len - start;
            let conf = if crc_bad == 0 { 0.98 } else { 0.7 };
            return Some(Found::new(total, conf, format!("{chunks} chunks, {crc_bad} bad crc")));
        }
        pos += 12 + len;
        if chunks > 100_000 {
            return None;
        }
    }
    None
}

// ---------------------------------------------------------------- gif

fn gif(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let limit = start + budget;
    let head = read(img, start, 13)?;
    if &head[0..6] != b"GIF87a" && &head[0..6] != b"GIF89a" {
        return None;
    }
    let flags = head[10];
    let mut pos = start + 13;
    if flags & 0x80 != 0 {
        let gct = 3u64 * (1u64 << ((flags & 0x07) + 1));
        pos += gct;
    }
    let mut blocks = 0u32;
    loop {
        if pos >= limit {
            return None;
        }
        let id = img.u8_at(pos).ok()?;
        match id {
            0x3B => {
                let total = pos + 1 - start;
                return Some(Found::new(total, 0.95, format!("{blocks} blocks + trailer")));
            }
            0x21 => {
                pos += 2; // introducer + label
                pos = skip_sub_blocks(img, pos, limit)?;
            }
            0x2C => {
                let d = read(img, pos + 1, 9)?;
                let lflags = d[8];
                pos += 10;
                if lflags & 0x80 != 0 {
                    pos += 3u64 * (1u64 << ((lflags & 0x07) + 1));
                }
                pos += 1; // LZW min code size
                pos = skip_sub_blocks(img, pos, limit)?;
            }
            _ => return None,
        }
        blocks += 1;
        if blocks > 200_000 {
            return None;
        }
    }
}

fn skip_sub_blocks(img: &Image, mut pos: u64, limit: u64) -> Option<u64> {
    loop {
        if pos >= limit {
            return None;
        }
        let n = img.u8_at(pos).ok()? as u64;
        pos += 1 + n;
        if n == 0 {
            return Some(pos);
        }
    }
}

// ---------------------------------------------------------------- bmp

fn bmp(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 54)?;
    if &h[0..2] != b"BM" {
        return None;
    }
    let file_size = le32(&h[2..6]) as u64;
    let reserved = le32(&h[6..10]);
    let off_bits = le32(&h[10..14]) as u64;
    let dib = le32(&h[14..18]) as u64;
    if reserved != 0 || !(12..=124).contains(&dib) {
        return None;
    }
    if file_size >= dib + 14 && file_size <= budget && off_bits < file_size {
        return Some(Found::new(file_size, 0.97, format!("bfSize={file_size}, dib={dib}")));
    }
    // some writers leave bfSize 0: derive from geometry
    if h.len() >= 34 {
        let width = le32(&h[18..22]) as i64;
        let height = (le32(&h[22..26]) as i32).unsigned_abs() as i64;
        let bpp = le16(&h[28..30]) as i64;
        if width > 0 && height > 0 && matches!(bpp, 1 | 4 | 8 | 16 | 24 | 32) {
            let row = ((width * bpp + 31) / 32) * 4;
            let total = off_bits + (row * height) as u64;
            if total <= budget {
                return Some(Found::new(total, 0.8, format!("derived {width}x{height}@{bpp}")));
            }
        }
    }
    None
}

// ---------------------------------------------------------------- tiff

fn tiff(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 8)?;
    let be = &h[0..2] == b"MM";
    let rd16 = |b: &[u8]| if be { be16(b) } else { le16(b) };
    let rd32 = |b: &[u8]| if be { be32(b) } else { le32(b) };
    if rd16(&h[2..4]) != 42 {
        return None;
    }
    let ifd = rd32(&h[4..8]) as u64;
    let limit = start + budget;
    let mut pos = start + ifd;
    let mut max_off: u64 = 0;
    let mut total_bytes: u64 = 0;
    let mut ifds = 0;
    while pos + 2 <= limit && ifds < 64 {
        let cnt_b = read(img, pos, 2)?;
        let n = rd16(&cnt_b) as u64;
        if n == 0 || n > 4096 {
            break;
        }
        let table = read(img, pos + 2, (n * 12) as usize)?;
        for i in 0..n as usize {
            let e = &table[i * 12..i * 12 + 12];
            let tag = rd16(&e[0..2]);
            let typ = rd16(&e[2..4]);
            let count = rd32(&e[4..8]) as u64;
            if !matches!(tag, 0x0111 | 0x0117 | 0x0144 | 0x0145 | 0x0201 | 0x0202) {
                continue;
            }
            if count == 0 || count > 4096 {
                continue;
            }
            let (elem, inline_bytes) = match typ {
                3 => (2u64, 2 * count),
                4 => (4u64, 4 * count),
                _ => continue,
            };
            let raw = if inline_bytes <= 4 {
                e[8..12].to_vec()
            } else {
                let off = start + rd32(&e[8..12]) as u64;
                read(img, off, std::cmp::min(inline_bytes, 256 * 1024) as usize)?
            };
            let mut sum = 0u64;
            for k in 0..count as usize {
                let s = match (typ, elem) {
                    (3, _) => {
                        let s = k * 2;
                        (if be { be16(&raw[s..s + 2]) } else { le16(&raw[s..s + 2]) }) as u64
                    }
                    _ => {
                        let s = k * 4;
                        (if be { be32(&raw[s..s + 4]) } else { le32(&raw[s..s + 4]) }) as u64
                    }
                };
                sum += s;
            }
            if matches!(tag, 0x0111 | 0x0144 | 0x0201) {
                max_off = max_off.max(sum);
            } else {
                total_bytes = total_bytes.max(sum);
            }
        }
        let next_b = read(img, pos + 2 + n * 12, 4)?;
        let next = rd32(&next_b) as u64;
        if next == 0 {
            break;
        }
        pos = start + next;
        ifds += 1;
    }
    let total = max_off.saturating_add(total_bytes);
    if total > 8 && total <= budget {
        Some(Found::new(total, 0.7, format!("{ifds} IFDs, strip extent")))
    } else {
        None
    }
}

// ---------------------------------------------------------------- riff

fn riff(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 12)?;
    let size = le32(&h[4..8]) as u64;
    let form = &h[8..12];
    let ext = match form {
        b"WAVE" => "wav",
        b"AVI " => "avi",
        b"WEBP" => "webp",
        _ => return None,
    };
    let total = size + 8;
    if total > 12 && total <= budget {
        let mut f = Found::new(total, 0.9, format!("RIFF {ext} {size}"));
        f.ext = Some(match ext {
            "wav" => "wav",
            "avi" => "avi",
            _ => "webp",
        });
        Some(f)
    } else {
        None
    }
}

// ---------------------------------------------------------------- pdf

fn pdf(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let head = read(img, start, 8)?;
    if &head[0..5] != b"%PDF-" {
        return None;
    }
    let limit = start + budget;
    let window = std::cmp::min(limit, start + 64 * 1024 * 1024);
    let eof = find_bytes(img, start + 5, window, b"%%EOF")?;
    let mut total = eof + 5 - start;
    // absorb trailing EOL
    if let Ok(b) = img.u8_at(start + total) {
        if b == b'\n' || b == b'\r' {
            total += 1;
        }
    }
    let has_obj = find_bytes(img, start, std::cmp::min((start + 1) << 20, limit), b" obj").is_some();
    Some(Found::new(total, if has_obj { 0.9 } else { 0.55 }, "%%EOF terminator"))
}

// ---------------------------------------------------------------- zip

fn zip(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let limit = start + budget;
    let mut pos = start;
    // locate EOCD; archive comment is at most 65535 bytes but nested/embedded
    // archives can be large, so keep scanning until a structurally sane one.
    let mut guard = 0;
    while pos + 22 <= limit && guard < 4096 {
        let eocd = find_bytes(img, pos, limit, b"PK\x05\x06")?;
        let h = read(img, eocd, 22)?;
        let cd_size = le32(&h[12..16]) as u64;
        let cd_off = le32(&h[16..20]) as u64;
        let comment = le16(&h[20..22]) as u64;
        let rel = eocd - start;
        if cd_off + cd_size <= rel && eocd + 22 + comment <= limit {
            let total = eocd + 22 + comment - start;
            let mut ext = "zip";
            let mut detail = String::from("EOCD");
            if let Some(cd) = read(img, start + cd_off, std::cmp::min(cd_size, 64 * 1024) as usize) {
                let txt = String::from_utf8_lossy(&cd);
                if txt.contains("word/") || txt.contains("word\\") {
                    ext = "docx";
                } else if txt.contains("xl/") || txt.contains("xl\\") {
                    ext = "xlsx";
                } else if txt.contains("ppt/") || txt.contains("ppt\\") {
                    ext = "pptx";
                }
                detail.push_str(&format!(", {cd_size} byte central dir"));
            }
            let mut f = Found::new(total, 0.85, detail);
            f.ext = Some(ext);
            return Some(f);
        }
        pos = eocd + 4;
        guard += 1;
    }
    None
}

// ---------------------------------------------------------------- rar

fn rar(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 8)?;
    let limit = start + budget;
    if h.starts_with(b"Rar!\x1a\x07\x01\x00") {
        // RAR5 headers are vint-framed and encrypted archives hide block types.
        // Bounding by the next archive marker is the honest option here.
        let end = find_bytes(img, start + 8, limit, b"Rar!\x1a\x07\x01\x00").unwrap_or(limit);
        let total = end - start;
        return if total > 64 { Some(Found::new(total, 0.45, "rar5, bounded by next marker")) } else { None };
    }
    if !h.starts_with(b"Rar!\x1a\x07\x00") {
        return None;
    }
    let mut pos = start + 7;
    let mut blocks = 0u32;
    while pos + 7 < limit && blocks < 1_000_000 {
        let b = read(img, pos, 7)?;
        let btype = b[2];
        let flags = le16(&b[3..5]);
        let mut hsize = le16(&b[5..7]) as u64;
        let mut add = 0u64;
        if flags & 0x8000 != 0 {
            let a = read(img, pos + 7, 4)?;
            add = le32(&a) as u64;
            hsize += 4;
        }
        if hsize < 7 {
            return None;
        }
        pos += hsize + add;
        if pos > limit {
            return None;
        }
        if btype == 0x7B {
            let total = pos - start;
            return Some(Found::new(total, 0.9, format!("rar4, {blocks} blocks")));
        }
        blocks += 1;
    }
    None
}

/// Minimal RAR5 variable-length integer, returns (value, bytes_consumed).
#[allow(dead_code)]
fn vint(b: &[u8]) -> Option<(u64, usize)> {
    let mut val = 0u64;
    let mut shift = 0u32;
    for (i, &byte) in b.iter().enumerate() {
        if i >= 10 {
            return None;
        }
        val |= ((byte & 0x7F) as u64) << shift;
        if byte & 0x80 == 0 {
            return Some((val, i + 1));
        }
        shift += 7;
    }
    None
}

#[allow(dead_code)]
fn vint_len(b: &[u8], from: usize) -> Option<usize> {
    vint(b.get(from..)?).map(|(_, n)| n)
}

// ---------------------------------------------------------------- 7z

fn sevenzip(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 32)?;
    let next_off = le64(&h[12..20]);
    let next_size = le64(&h[20..28]);
    let total = 32u64.saturating_add(next_off).saturating_add(next_size);
    if total <= budget && next_size < 64 * 1024 * 1024 {
        Some(Found::new(total, 0.95, "7z next header"))
    } else {
        None
    }
}

// ---------------------------------------------------------------- gzip

fn gzip(img: &Image, start: u64, budget: u64) -> Option<Found> {
    // Deflate cannot be bounded without inflating; use the next gzip member or
    // the next carving signature as the boundary and mark it as a guess.
    let limit = start + budget;
    let next = find_bytes(img, start + 10, limit, &[0x1F, 0x8B, 0x08]);
    let end = next.unwrap_or(limit);
    let total = end - start;
    if total > 20 {
        Some(Found::new(total, 0.35, "boundary heuristic (flate not decoded)"))
    } else {
        None
    }
}

// ---------------------------------------------------------------- mp4

fn mp4(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let limit = start + budget;
    let mut pos = start;
    let mut boxes = 0;
    let mut ftyp = false;
    while pos + 8 <= limit && boxes < 100_000 {
        let h = read(img, pos, 16)?;
        let mut size = be32(&h[0..4]) as u64;
        let typ = &h[4..8];
        if !typ.iter().all(|c| c.is_ascii_alphanumeric() || *c == b' ' || *c == 0xA9) {
            return None;
        }
        if boxes == 0 {
            if typ != b"ftyp" {
                return None;
            }
            ftyp = true;
        }
        if size == 1 {
            size = be64(&h[8..16]);
            if size < 16 {
                return None;
            }
        } else if size == 0 {
            // box extends to end of file
            return Some(Found::new(limit - start, 0.5, "box runs to EOF"));
        } else if size < 8 {
            return None;
        }
        pos += size;
        boxes += 1;
        if pos > limit {
            // truncated last box: report what is intact
            break;
        }
    }
    if ftyp && boxes > 1 {
        Some(Found::new(pos.min(limit) - start, 0.8, format!("{boxes} boxes")))
    } else {
        None
    }
}

// ---------------------------------------------------------------- matroska

fn matroska(img: &Image, start: u64, _budget: u64) -> Option<Found> {
    let h = read(img, start, 32)?;
    if !h.starts_with(&[0x1A, 0x45, 0xDF, 0xA3]) {
        return None;
    }
    // EBML header size is a vint at byte 4
    let (hsize, n) = ebml_vint(&h[4..])?;
    let seg = start + 4 + n as u64 + hsize;
    let sb = read(img, seg, 16)?;
    if sb[0..4] != [0x18, 0x53, 0x80, 0x67] {
        return None;
    }
    let (ssize, sn) = ebml_vint(&sb[4..])?;
    let unknown = ssize == if sn >= 8 { u64::MAX } else { (1u64 << (7 * sn)) - 1 };
    if unknown {
        Some(Found::new(seg + 12 - start, 0.4, "unknown segment size"))
    } else {
        Some(Found::new(seg + sn as u64 + ssize - start, 0.9, "segment size known"))
    }
}

fn ebml_vint(b: &[u8]) -> Option<(u64, usize)> {
    let first = *b.first()?;
    if first == 0 {
        return None;
    }
    let len = first.leading_zeros() as usize + 1;
    if len > 8 || b.len() < len {
        return None;
    }
    let mut val = (first as u64) & ((1u64 << (8 - len)) - 1);
    for &byte in &b[1..len] {
        val = (val << 8) | byte as u64;
    }
    Some((val, len))
}

// ---------------------------------------------------------------- mp3

fn mp3(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let limit = start + budget;
    let mut pos = start;
    let head = read(img, start, 10)?;
    let mut id3 = false;
    if &head[0..3] == b"ID3" {
        let size = ((head[6] as u64 & 0x7F) << 21)
            | ((head[7] as u64 & 0x7F) << 14)
            | ((head[8] as u64 & 0x7F) << 7)
            | (head[9] as u64 & 0x7F);
        let footer = if head[5] & 0x10 != 0 { 10 } else { 0 };
        pos = start + 10 + size + footer;
        id3 = true;
    }
    let mut frames = 0u32;
    let mut last_good = pos;
    while pos + 4 <= limit {
        let b = read(img, pos, 4)?;
        if b[0] != 0xFF || (b[1] & 0xE0) != 0xE0 {
            break;
        }
        let ver = (b[1] >> 3) & 0x03;
        let layer = (b[1] >> 1) & 0x03;
        let bitrate = (b[2] >> 4) & 0x0F;
        let srate = (b[2] >> 2) & 0x03;
        let pad = ((b[2] >> 1) & 0x01) as u64;
        if ver == 1 || layer == 0 || bitrate == 0x0F || srate == 3 {
            break;
        }
        let br_kbps: u64 = match (ver == 3, layer) {
            (true, 1) => [0, 32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448][bitrate as usize],
            (true, 2) => [0, 32, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320, 384][bitrate as usize],
            (true, _) => [0, 32, 40, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320][bitrate as usize],
            (false, 1) => [0, 32, 48, 56, 64, 80, 96, 112, 128, 144, 160, 176, 192, 224, 256][bitrate as usize],
            (false, 2) => [0, 8, 16, 24, 32, 40, 48, 56, 64, 80, 96, 112, 128, 144, 160][bitrate as usize],
            (false, _) => [0, 8, 16, 24, 32, 40, 48, 56, 64, 80, 96, 112, 128, 144, 160][bitrate as usize],
        };
        let sr: u64 = match (ver, srate) {
            (3, 0) => 44100,
            (3, 1) => 48000,
            (3, 2) => 32000,
            (2, 0) => 22050,
            (2, 1) => 24000,
            (2, 2) => 16000,
            (_, 0) => 11025,
            (_, 1) => 12000,
            _ => 8000,
        };
        let frame_len = if layer == 3 { (125 * br_kbps * 1000 / sr) + pad } else { (144 * br_kbps * 1000 / sr) + pad };
        if frame_len < 24 {
            break;
        }
        pos += frame_len;
        if pos > limit {
            break;
        }
        frames += 1;
        last_good = pos;
    }
    if frames >= 3 {
        Some(Found::new(last_good - start, 0.85, format!("{frames} frames")))
    } else if id3 && frames == 0 {
        Some(Found::new(pos - start, 0.3, "id3 tag only"))
    } else {
        None
    }
}

// ---------------------------------------------------------------- flac

fn flac(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let limit = start + budget;
    let mut pos = start + 4;
    let mut last = false;
    let mut blocks = 0;
    while !last {
        let h = read(img, pos, 4)?;
        last = h[0] & 0x80 != 0;
        let len = ((h[1] as u64) << 16) | ((h[2] as u64) << 8) | h[3] as u64;
        pos += 4 + len;
        blocks += 1;
        if pos > limit || blocks > 1024 {
            return None;
        }
    }
    // frame data: stop at the next known signature or EOF, flagged as a guess
    let end = find_bytes(img, pos, limit, b"fLaC").unwrap_or(limit);
    Some(Found::new(end - start, 0.6, format!("{blocks} metadata blocks, frame end by boundary")))
}

// ---------------------------------------------------------------- ogg

fn ogg(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let limit = start + budget;
    let mut pos = start;
    let mut pages = 0u32;
    while pos + 27 <= limit {
        let h = read(img, pos, 27)?;
        if &h[0..4] != b"OggS" || h[4] != 0 {
            break;
        }
        let nseg = h[26] as u64;
        let table = read(img, pos + 27, nseg as usize)?;
        let body: u64 = table.iter().map(|&b| b as u64).sum();
        pos += 27 + nseg + body;
        if pos > limit {
            return None;
        }
        pages += 1;
        if pages > 500_000 {
            return None;
        }
    }
    if pages > 1 {
        Some(Found::new(pos - start, 0.9, format!("{pages} pages")))
    } else {
        None
    }
}

// ---------------------------------------------------------------- sqlite

fn sqlite(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 100)?;
    if &h[0..16] != b"SQLite format 3\0" {
        return None;
    }
    let mut page = be16(&h[16..18]) as u64;
    if page == 1 {
        page = 65536;
    }
    let pages = be32(&h[28..32]) as u64;
    let total = page * pages;
    if page.is_power_of_two() && total > 512 && total <= budget {
        Some(Found::new(total, 0.95, format!("{pages} pages x {page}")))
    } else {
        None
    }
}

// ---------------------------------------------------------------- ole2

fn ole2(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 512)?;
    if &h[0..8] != b"\xd0\xcf\x11\xe0\xa1\xb1\x1a\xe1" {
        return None;
    }
    let sector_shift = le16(&h[30..32]);
    if sector_shift != 9 && sector_shift != 12 {
        return None;
    }
    let sector = 1u64 << sector_shift;
    let fat_sectors = le32(&h[44..48]) as u64;
    // walk the first FAT sector chain listed in the header DIFAT
    let mut max_sector = 0u64;
    let mut fat_sector = le32(&h[76..80]);
    let mut guard = 0;
    while fat_sector != 0xFFFF_FFFE && guard < fat_sectors + 8 {
        let off = start + (fat_sector as u64 + 1) * sector;
        let entries = sector / 4;
        let Some(fat) = read(img, off, std::cmp::min(entries as usize * 4, MAX_READ)) else { break };
        for chunk in fat.chunks_exact(4) {
            let v = le32(chunk);
            if v < 0xFFFF_FFF0 {
                max_sector = max_sector.max(v as u64);
            }
        }
        guard += 1;
        let next_off = start + 512 + (guard - 1) * 4;
        let Some(nb) = read(img, next_off, 4) else { break };
        fat_sector = le32(&nb) + 1;
    }
    let total = (max_sector + 1) * sector;
    if total > sector && total <= budget {
        Some(Found::new(total, 0.75, format!("OLE2, max sector {max_sector}")))
    } else {
        None
    }
}

// ---------------------------------------------------------------- pe

fn pe(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 64)?;
    if &h[0..2] != b"MZ" {
        return None;
    }
    let e_lfanew = le32(&h[0x3C..0x40]) as u64;
    if e_lfanew < 0x40 || e_lfanew > budget.saturating_sub(24) {
        return None;
    }
    let pe = read(img, start + e_lfanew, 24)?;
    if &pe[0..4] != b"PE\0\0" {
        return None;
    }
    let nsect = le16(&pe[6..8]) as u64;
    let opt_size = le16(&pe[20..22]) as u64;
    if !(2..=96).contains(&nsect) {
        return None;
    }
    let opt = read(img, start + e_lfanew + 24, opt_size as usize)?;
    let mut end = 24 + e_lfanew + opt_size + nsect * 40;
    let sect = read(img, start + e_lfanew + 24 + opt_size, (nsect * 40) as usize)?;
    for i in 0..nsect as usize {
        let s = &sect[i * 40..i * 40 + 40];
        let raw_size = le32(&s[16..20]) as u64;
        let raw_ptr = le32(&s[20..24]) as u64;
        end = end.max(raw_ptr + raw_size);
    }
    let _ = opt;
    if end > 0x200 && end <= budget {
        Some(Found::new(end, 0.85, format!("{nsect} sections")))
    } else {
        None
    }
}

// ---------------------------------------------------------------- elf

fn elf(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 64)?;
    if &h[0..4] != b"\x7fELF" {
        return None;
    }
    let is64 = h[4] == 2;
    let (phoff, phentsize, phnum) = if is64 {
        (le64(&h[32..40]), le16(&h[54..56]) as u64, le16(&h[56..58]) as u64)
    } else {
        (le32(&h[28..32]) as u64, le16(&h[42..44]) as u64, le16(&h[44..46]) as u64)
    };
    if phnum == 0 || phnum > 512 || phentsize < 32 {
        return None;
    }
    let mut end = phoff + phentsize * phnum;
    let table = read(img, start + phoff, (phentsize * phnum) as usize)?;
    for i in 0..phnum as usize {
        let e = &table[i * phentsize as usize..];
        let (off, filesz) = if is64 {
            (le64(&e[8..16]), le64(&e[32..40]))
        } else {
            (le32(&e[4..8]) as u64, le32(&e[16..20]) as u64)
        };
        end = end.max(off + filesz);
    }
    if end <= budget {
        Some(Found::new(end, 0.85, format!("{phnum} program headers")))
    } else {
        None
    }
}

// ---------------------------------------------------------------- iso

fn iso(img: &Image, start: u64, budget: u64) -> Option<Found> {
    // "CD001" sits at 32769 inside the volume descriptor at sector 16
    let vd = read(img, start + 32768, 96)?;
    if &vd[1..6] != b"CD001" || vd[0] != 1 {
        return None;
    }
    let blocks = le32(&vd[80..84]) as u64;
    if blocks == 0 {
        return None;
    }
    let total = blocks * 2048;
    if total > 32768 && total <= budget {
        Some(Found::new(total, 0.9, format!("{blocks} x 2048 blocks")))
    } else {
        None
    }
}

// ---------------------------------------------------------------- pst

fn pst(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 512)?;
    if &h[0..4] != b"!BDN" {
        return None;
    }
    let ver = le16(&h[8..10]);
    if ver != 23 && ver != 36 {
        return None;
    }
    // PST stores no total size; bound by the next signature
    let limit = start + budget;
    let end = find_bytes(img, start + 512, limit, b"!BDN").unwrap_or(limit);
    Some(Found::new(end - start, 0.4, "no size field, bounded by next signature"))
}

// ---------------------------------------------------------------- pcap

fn pcap(img: &Image, start: u64, budget: u64) -> Option<Found> {
    let h = read(img, start, 24)?;
    let le = h[0..4] == [0xD4, 0xC3, 0xB2, 0xA1];
    if !le && h[0..4] != [0xA1, 0xB2, 0xC3, 0xD4] {
        return None;
    }
    let limit = start + budget;
    let mut pos = start + 24;
    let mut packets = 0u32;
    while pos + 16 <= limit {
        let r = read(img, pos, 16)?;
        let incl = if le { le32(&r[8..12]) } else { be32(&r[8..12]) } as u64;
        if incl > 16 * 1024 * 1024 {
            break;
        }
        pos += 16 + incl;
        packets += 1;
    }
    if packets >= 2 && pos <= limit {
        Some(Found::new(pos - start, 0.9, format!("{packets} packets")))
    } else {
        None
    }
}
