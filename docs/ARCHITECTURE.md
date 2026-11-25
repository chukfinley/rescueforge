# Architecture

```
src/
  io.rs          block-cached random access, partition offsets, endian helpers
  sig.rs         signature database (pattern, in-file offset, kind, size cap)
  scan.rs        one-pass Aho-Corasick scanner with chunk overlap
  validators.rs  one structural parser per kind -> exact length + confidence
  carve.rs       orchestration: watermark, filters, spill, manifest
  report.rs      CSV manifest (accepted + rejected)
  fsmod/
    ntfs.rs      boot sector, $MFT data runs, FILE records, runlists, undelete
    fat.rs       FAT12/16/32 boot sector, directory entries, LFN, chains
    ext4.rs      superblock, group descriptors, inodes, extent trees
  main.rs        CLI (clap)
```

## Why two strategies

Carving ignores metadata: it finds files by their content and is the only option
when the filesystem itself is destroyed (reformatted, overwritten partition
table, unknown filesystem). Its weakness is that a fragmented file is not
contiguous, so a header-only carver returns a truncated file.

Undelete reads the filesystem's own bookkeeping. `$MFT` records survive deletion
in NTFS: the in-use flag is cleared, but the name, parent reference, timestamps
and cluster runlist are still there. That gives the real file back, fragmented or
not.

The two are complementary; `rescueforge` exposes both and keeps each honest
about what it knows.

## Scanner

One pass, one automaton. All patterns are compiled into a single Aho-Corasick
matcher; 4 MiB chunks overlap by the longest pattern so a signature spanning a
chunk boundary is still found. A candidate's file start is the match offset minus
the signature's `pattern_at` (needed for `ftyp` at +4, `CD001` at 32769).

## Validators

A validator answers "how long is this file and how sure am I?".

* **Exact** cases compute the length from the structure: RIFF size field, 7z next
  header, SQLite page count, ZIP EOCD + comment length, MP4 box chain, Ogg page
  chain, PNG IEND, JPEG EOI after scanning entropy data.
* **Derived** cases reconstruct the intended length from fields: BMP geometry when
  `bfSize` is zero, PE section table, ELF program headers, Matroska segment size,
  HFS/ISO volume sizes.
* **Unknown length** cases say so. gzip has no length field and requires
  inflating; RAR5 headers are vint-framed; `rtf`/`crw` have no length at all.
  Those get a low confidence and a boundary heuristic, and the manifest records
  the reason. Pretending certainty there is how carvers produce garbage.

Confidence is deliberately coarse: `0.95+` structural proof (CRC, EOCD, box
chain), `0.7-0.9` strong derivation, `0.3-0.5` heuristic.

## Carver

Candidates arrive in offset order, so a single watermark suffices:

1. candidate inside an already-recovered extent -> rejected as fragment;
2. validate -> no structure -> dropped silently (most `MZ`/`BM` hits);
3. length < `min_size` or confidence < `min_conf` -> recorded as rejected;
4. write extent (optionally skipping zero pages to keep output sparse), advance
   the watermark.

Output names are `{offset:012}_{signature}.{ext}` so a recovered file can always
be traced back to its byte position, and `manifest.csv` carries the same offset
plus the validator's explanation.

## NTFS undelete details

1. Boot sector: bytes/sector `0x0B`, sectors/cluster `0x0D`, `$MFT` LCN `0x30`,
   record size from `0x40` (negative = `2^-n`).
2. `$MFT` record 0 is read to get the MFT's own `$DATA` runlist; that streams
   every record.
3. FILE records need **update sequence fixups**: the last two bytes of each 512
   byte sector hold a sequence number that must be swapped for the saved values
   from the USA array, otherwise attribute parsing reads corrupt lengths.
4. Attributes walked: `0x10` (standard information, timestamps), `0x30` (file
   name, parent reference, namespaces: Win32 preferred over DOS), `0x80` (data).
5. Non-resident `$DATA` gives cluster runs; sparse runs have no LCN.

Verified end-to-end on a Windows 10 formatted 256 MB VHD: 21 deleted files
recovered with exact content, including a 200 KB binary.

## FAT details

Deleted entries keep `0xE5` in the first name byte and their first cluster; the
FAT chain is usually cleared. Recovery therefore follows the chain if it is still
intact and falls back to one contiguous extent sized by the directory entry.

## ext4 details

Superblock at 1024, group descriptor table after it, inode table per group.
Deleted inode: `links_count == 0 && dtime != 0`. The extent tree in `i_block`
(magic `0xF30A`) is parsed recursively; ext2/3 direct pointers are handled as a
degenerate case.

## Roadmap

* template-driven carving (declarative format descriptions instead of code) --
  R-Studio ships exactly this and it is the right design for 100+ formats;
* NTFS attribute list (`0x20`) traversal for fragmented system files;
* ext4 journal replay to recover inodes that were already reused;
* ReFS, APFS, HFS+;
* parallel validation (carving is IO bound on the scan, CPU bound on the walk).
