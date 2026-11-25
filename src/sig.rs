//! Built-in signature database.
//!
//! Every entry is a byte pattern that appears at a *fixed offset from the start
//! of the file*. Headers alone are not proof: each hit is passed to the
//! validator of the matching [`Kind`], which walks the real structure and
//! reports the exact length. A header without a structurally valid tail is
//! rejected, which is what keeps carving from producing megabytes of noise.

/// How a file is validated once its header matched.
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
pub enum Kind {
    Jpeg,
    Png,
    Gif,
    Bmp,
    Tiff,
    Riff,
    Pdf,
    Zip,
    Rar,
    SevenZip,
    Gzip,
    Mp4,
    Matroska,
    Mp3,
    Flac,
    Ogg,
    Sqlite,
    Ole2,
    Mz,
    Elf,
    Iso,
    Pst,
    Pcap,
}

pub struct Signature {
    pub name: &'static str,
    pub ext: &'static str,
    pub kind: Kind,
    /// Bytes matched by the Aho-Corasick automaton.
    pub pattern: &'static [u8],
    /// Offset of the pattern from the true file start (usually 0).
    pub pattern_at: u64,
    /// Hard cap for the validator. Prevents runaway walks on corrupt data.
    pub max_len: u64,
}

const MIB: u64 = 1024 * 1024;

pub const SIGNATURES: &[Signature] = &[
    // --- images -----------------------------------------------------------
    Signature { name: "jpeg", ext: "jpg", kind: Kind::Jpeg, pattern: &[0xFF, 0xD8, 0xFF], pattern_at: 0, max_len: 128 * MIB },
    Signature { name: "png", ext: "png", kind: Kind::Png, pattern: b"\x89PNG\r\n\x1a\n", pattern_at: 0, max_len: 128 * MIB },
    Signature { name: "gif", ext: "gif", kind: Kind::Gif, pattern: b"GIF8", pattern_at: 0, max_len: 64 * MIB },
    Signature { name: "bmp", ext: "bmp", kind: Kind::Bmp, pattern: b"BM", pattern_at: 0, max_len: 128 * MIB },
    Signature { name: "tiff-le", ext: "tif", kind: Kind::Tiff, pattern: b"II\x2a\x00", pattern_at: 0, max_len: 256 * MIB },
    Signature { name: "tiff-be", ext: "tif", kind: Kind::Tiff, pattern: b"MM\x00\x2a", pattern_at: 0, max_len: 256 * MIB },
    Signature { name: "riff", ext: "riff", kind: Kind::Riff, pattern: b"RIFF", pattern_at: 0, max_len: 512 * MIB },
    // --- documents --------------------------------------------------------
    Signature { name: "pdf", ext: "pdf", kind: Kind::Pdf, pattern: b"%PDF-", pattern_at: 0, max_len: 512 * MIB },
    Signature { name: "zip", ext: "zip", kind: Kind::Zip, pattern: b"PK\x03\x04", pattern_at: 0, max_len: 512 * MIB },
    Signature { name: "ole2", ext: "doc", kind: Kind::Ole2, pattern: b"\xd0\xcf\x11\xe0\xa1\xb1\x1a\xe1", pattern_at: 0, max_len: 512 * MIB },
    Signature { name: "pst", ext: "pst", kind: Kind::Pst, pattern: b"!BDN", pattern_at: 0, max_len: 4096 * MIB },
    // --- archives ---------------------------------------------------------
    Signature { name: "rar4", ext: "rar", kind: Kind::Rar, pattern: b"Rar!\x1a\x07\x00", pattern_at: 0, max_len: 512 * MIB },
    Signature { name: "rar5", ext: "rar", kind: Kind::Rar, pattern: b"Rar!\x1a\x07\x01\x00", pattern_at: 0, max_len: 512 * MIB },
    Signature { name: "7z", ext: "7z", kind: Kind::SevenZip, pattern: b"7z\xbc\xaf\x27\x1c", pattern_at: 0, max_len: 512 * MIB },
    Signature { name: "gzip", ext: "gz", kind: Kind::Gzip, pattern: &[0x1F, 0x8B, 0x08], pattern_at: 0, max_len: 256 * MIB },
    // --- media ------------------------------------------------------------
    Signature { name: "mp4", ext: "mp4", kind: Kind::Mp4, pattern: b"ftyp", pattern_at: 4, max_len: 4096 * MIB },
    Signature { name: "matroska", ext: "mkv", kind: Kind::Matroska, pattern: &[0x1A, 0x45, 0xDF, 0xA3], pattern_at: 0, max_len: 4096 * MIB },
    Signature { name: "flac", ext: "flac", kind: Kind::Flac, pattern: b"fLaC", pattern_at: 0, max_len: 512 * MIB },
    Signature { name: "ogg", ext: "ogg", kind: Kind::Ogg, pattern: b"OggS", pattern_at: 0, max_len: 512 * MIB },
    Signature { name: "mp3-id3", ext: "mp3", kind: Kind::Mp3, pattern: b"ID3", pattern_at: 0, max_len: 256 * MIB },
    Signature { name: "mp3-frame", ext: "mp3", kind: Kind::Mp3, pattern: &[0xFF, 0xFB], pattern_at: 0, max_len: 256 * MIB },
    Signature { name: "mp3-frame-2", ext: "mp3", kind: Kind::Mp3, pattern: &[0xFF, 0xF3], pattern_at: 0, max_len: 256 * MIB },
    Signature { name: "mp3-frame-3", ext: "mp3", kind: Kind::Mp3, pattern: &[0xFF, 0xF2], pattern_at: 0, max_len: 256 * MIB },
    // --- databases --------------------------------------------------------
    Signature { name: "sqlite", ext: "db", kind: Kind::Sqlite, pattern: b"SQLite format 3\x00", pattern_at: 0, max_len: 4096 * MIB },
    // --- executables ------------------------------------------------------
    Signature { name: "pe", ext: "exe", kind: Kind::Mz, pattern: b"MZ", pattern_at: 0, max_len: 256 * MIB },
    Signature { name: "elf", ext: "elf", kind: Kind::Elf, pattern: b"\x7fELF", pattern_at: 0, max_len: 256 * MIB },
    // --- images of disks --------------------------------------------------
    Signature { name: "iso9660", ext: "iso", kind: Kind::Iso, pattern: b"CD001", pattern_at: 32769, max_len: 8096 * MIB },
    // --- captures ---------------------------------------------------------
    Signature { name: "pcap-le", ext: "pcap", kind: Kind::Pcap, pattern: &[0xD4, 0xC3, 0xB2, 0xA1], pattern_at: 0, max_len: 2048 * MIB },
    Signature { name: "pcap-be", ext: "pcap", kind: Kind::Pcap, pattern: &[0xA1, 0xB2, 0xC3, 0xD4], pattern_at: 0, max_len: 2048 * MIB },
];

pub fn by_name(name: &str) -> Option<&'static Signature> {
    SIGNATURES.iter().find(|s| s.name == name)
}

/// All patterns in database order; index maps back into [`SIGNATURES`].
pub fn patterns() -> Vec<&'static [u8]> {
    SIGNATURES.iter().map(|s| s.pattern).collect()
}
