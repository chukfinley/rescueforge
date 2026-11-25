# rescueforge

Open-source file recovery engine in Rust: signature carving plus metadata-level
undelete for NTFS, FAT and ext4.

Written from scratch after reverse-engineering how commercial recovery suites
actually work (see [docs/RE-NOTES.md](docs/RE-NOTES.md)). No vendor code, no
cracked binaries, no borrowed tables: the format knowledge is public, the
parsing logic is ours.

## What it does

Two independent recovery strategies in one binary:

| Strategy | What it needs | What you get |
|---|---|---|
| **Carving** (`carve`) | any raw image, even without a filesystem | files without names, byte-exact where the format allows length reconstruction |
| **Undelete** (`ntfs` / `fat` / `ext4`) | a filesystem whose metadata survived | original name, size, timestamps, cluster/block extents |

Carving walks the whole image once with an Aho-Corasick automaton over ~30
signature patterns, then hands every hit to a **structural validator** that walks
the real container (JPEG segments to EOI, PNG chunks with CRC verification, ZIP
central directory, MP4 box tree, ext4 extent trees inside NTFS runlists, ...)
and returns the exact byte length. A header without a valid tail is rejected, so
the output is files, not fragments.

## Install

```sh
cargo build --release
install -m755 target/release/rescueforge ~/.local/bin/
```

## Usage

```sh
# what can be carved
rescueforge sigs

# detect the filesystem in an image
rescueforge fsinfo disk.img

# dry run: show what would be recovered, write nothing
rescueforge scan disk.img --min-size 32 --min-conf 0.6

# carve, with sparse output and a CSV manifest of every decision
rescueforge carve disk.img -o recovered --skip-zero --min-size 4096

# whole-disk image: the volume starts 512*128 bytes in
rescueforge --offset 65536 carve disk.img -o recovered

# list deleted files straight out of $MFT / FAT / ext4 inodes
rescueforge ntfs disk.img --offset 65536 --limit 50
rescueforge fat  disk.img --live
rescueforge ext4 disk.img --limit 50

# pull one file out by record id
rescueforge --offset 65536 get disk.img ntfs 79 -o out
```

`manifest.csv` records every candidate, including rejects and why (below
min-size, below confidence, inside a previous extent), so a run can be audited
afterwards instead of trusted.

## Signature coverage

Images: JPEG, PNG, GIF, BMP, TIFF (both endiannesses), RIFF (WAV/AVI/WebP).
Documents: PDF, ZIP (and OOXML/ODF detection from the central directory), OLE2
(doc/xls/ppt), PST. Archives: RAR4, RAR5, 7z, gzip. Media: MP4/MOV, Matroska,
MP3 (ID3 + frame walk), FLAC, Ogg. Other: SQLite, PE, ELF, ISO9660, PCAP.

Adding a format is one entry in [`src/sig.rs`](src/sig.rs) plus one function in
[`src/validators.rs`](src/validators.rs).

## Tested

* carving: synthetic image with real GIF/PDF/ZIP streams at unaligned offsets,
  byte-exact comparison (`cargo test`)
* NTFS undelete: 256 MB VHD formatted by Windows 10, 21 files deleted, all
  recovered with original names, sizes and content
* PNG carving against a generated 64x64 image and an embedded PDF/ZIP: exact

## Status

v0.1. Carving is solid. NTFS undelete works on live and deleted `$MFT` records.
FAT and ext4 parsers are functional but less battle-tested than NTFS. Fragmented
files are recovered per-extent (correct for NTFS, best-effort for FAT where the
chain is cleared on delete).

Not implemented yet: NTFS attribute lists for heavily fragmented system files,
ext4 journal replay, ReFS/APFS, and a template-driven carver (see the roadmap in
the RE notes: R-Studio ships declarative XML templates and that design is worth
copying).

## License

MIT OR Apache-2.0, at your option.
