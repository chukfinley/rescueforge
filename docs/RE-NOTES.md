# Reverse-engineering notes

Purpose: find out how commercial recovery tools decide *what* a file is, *how
long* it is, and *which* files are worth recovering, then implement the same
behaviour from public format knowledge. No vendor code is copied, no crack is
used; every binary below is a free or trial build downloaded from the vendor.

## Targets

| Tool | File | SHA-256 (first 16) | Notes |
|---|---|---|---|
| Recuva 1.53 | `recuva64.exe` (8.2 MB) | `b640f712a5dc9ab2` | native C++ (MSVC), RTTI names retained, no PDB |
| DMDE 4.4.4 | `dmde.exe` (5.4 MB) | `57a4febbb5046df1` | Delphi/Free Pascal, single binary |
| R-Studio 9 | `RStudio64.exe` (60.6 MB) | `6d1943dfc1a60501` | native C++ + Qt4, ships format templates |
| Disk Drill | `diskdrill.exe` (53.8 MB) | `9cc63549a7f5bca2` | packed NSIS payload, not analysed deeply |
| EaseUS DRW | `drw_setup.exe` (41.9 MB) | `6366944390241ae9` | custom packer, payload not extractable with 7-Zip |

Method: `7z` to unpack installers, `re/tools/pe_scan.py` to map sections and find
compiled-in magic arrays, `re/tools/recuva_sigs.py` to decode the descriptor
table, Ghidra 12.2 headless (`re/tools/` + `XrefDecomp.java` in the tooling repo)
to decompile the validator that a logging string points at.

## Recuva: compiled descriptor table

Recuva keeps one descriptor per file type in `.rdata`, 8-byte aligned:

```
<label, UTF-16>            L"Trying Png"
<extension slots, UTF-16>  "png", ".png", ...
<magic bytes>              89 50 4e 47 0d 0a 1a 0a
<RTTI class name, ASCII>   "CPdfData::Validate", "CRiffDataType::Validate", ...
```

Because the RTTI class names survive, the container/validator pairing is readable
straight out of the binary: `CPdfData`, `CRiffDataType`, `CZipData`,
`CrarDataType`, `CItunesDbDataType`, `CCabData`, `CRtfData`, `CUrlData`.

Confirmed magic values found this way (`re/data/recuva_signatures.csv`):

| Format | Magic | Extensions claimed |
|---|---|---|
| PNG | `89 50 4e 47 0d 0a 1a 0a` | png, jfi, jfif, jif |
| JPEG | `ff d8 ff` | jpe, jpeg, jpg |
| BMP | `42 4d` | bmp, dib |
| TIFF | `49 49 2a 00` / `4d 4d 00 2a` | tiff, tif |
| ZIP (+ OOXML/ODF) | `50 4b 03 04` | zip, docx, xlsx, pptx, odt/ods/odg/odp, epub |
| RAR4 | `52 61 72 21 1a 07 00` | rar |
| CAB | `4d 53 43 46` | cab |
| PDF | `25 50 44 46 2d` | pdf |
| RTF | `7b 5c 72 74 66` | rtf |
| OLE2 (doc/xls/ppt/vsd) | `d0 cf 11 e0 a1 b1 1a e1` | doc, xls, ppt, vds |
| ASF/WMV/WMA | `30 26 b2 75 8e 66 cf 11` | asf, wma, wmv |
| FLV | `46 4c 56` | flv |
| MPEG-PS | `00 00 01 ba` | mpg, mpeg, m1v, mpv |
| MP3/MPEG audio | frame sync walk | mp3, mp2, mpa, m1a, m2a |
| QuickTime/MP4 | `66 74 79 70` at +4 | mov, qt, mp4, m4a, m4v, 3gp |
| iTunesDB | `69 54 75 6e 65 73 44 42` | iTunesDB |
| CRW | `30 26 b2 75 8e 66 cf 11` (shared with ASF row, disambiguated in code) | crw |
| UDF / ISO9660 | volume descriptor walk | iso |
| Windows Mail / mbox | text heuristics | eml |

The important design detail is the **"eof" descriptors**: `Trying Rtf eof`,
`Trying Pdf eof`, `Trying CrwEnd`. Recuva treats "find the header" and "find the
trailer" as separate passes for formats whose length is not in the header. That
is exactly the split used in `src/validators.rs`: `pdf()` scans for `%%EOF`
instead of trusting a length field, and formats with no trailer at all are the
ones that get a low confidence.

Also visible in the strings: the scan pipeline is
`LibRecuva::Scan::StageAnalyzeDamage::ProcessFiles` -> `...AnalyzeDamageFilter`
-> `...ProcessRecycleBin` -> `...SearchFileContents`, i.e. deep scan files are
first found by content, then *filtered by damage* before being shown. That
filtering is a product decision (which results look plausible), not a recovery
requirement, and is why so many tools show far fewer deep-scan results than they
actually found.

## R-Studio: declarative templates

R-Studio ships `Templates/tpl_*.xml`, a small declarative language for format
descriptions:

```xml
<template name="AVI File">
  <signature align="1">
    <field offset="0x00">52 49 46 46</field>
    <field offset="0x08">41 56 49 20</field>
  </signature>
  <section name="AVI File">
    <field type="char" size="4" name="Signature: RIFF" var="signature"/>
    <goto offset="-4"/>
    <field type="uint32" name="Size" var="dataSize"/>
    <if test="signature == 0x46464952"> ... </if>
  </section>
</template>
```

Two templates are exposed as examples (AVI, AVI_LIST); the rest are compiled in.
The schema is the interesting part: a signature block (offset + bytes), a section
tree of typed fields, `goto`, and conditionals. This is a byte-code for carving
and it is the right model for supporting a hundred formats without a hundred
hand-written functions.

Roadmap item for this project: move validators to that shape (a small interpreter
plus a data file), keeping hand-written code only for the formats that need real
state machines (JPEG entropy scan, MP3 frame walk, NTFS runlists).

## DMDE: monolith with a signature picker

DMDE is a single Delphi binary (5.4 MB) with no external format database; the raw
signature list is compiled in and selected through the `[$Raw Files by
Signatures]` UI section. Useful strings for behaviour parity:

* `NTFS File Raw Sectors`, `Create unformatted (Raw) partition`, `Scan the entire
  disk` vs `Scan the selected partition`
* `The destination directory should be located on a different disk than the lost
  data. Saving recovered files to the same disk may overwrite lost data.`
  -- a safety rule worth copying into any carver CLI.
* `NTFS Search (DMDE 2.10)`, `FAT Search (DMDE 2.10)` -- its metadata search
  engines are the same NTFS/FAT record walks implemented in `src/fsmod/`.

Delphi binaries decompile poorly (no RTTI in the Ghidra sense, virtual method
tables resolved at runtime), so the yield here is behaviour, not code.


## Ghidra pass: what string xrefs actually reach

Recuva 1.53 x64 was imported into Ghidra 12.2 with the full auto-analyser, then a
script (`XrefDecomp.java`) decompiled every function that references a string
containing `::Validate`. 25 validator class tags produced 75 functions; the
mapping is in `re/data/recuva_validator_map.txt` and the full decompilation dump
in `re/data/recuva_validate.c` (717 KB of C).

Result, and the limit of this technique:

* Each `C<Format>Data::Validate` string sits inside a **trace wrapper**: the
  function calls `MultiByteToWideChar(0, 0, "CPngFileData::Validate", ...)` to
  format a log line, then dispatches through
  `PTR__guard_dispatch_icall_1405394d0` (Control Flow Guard). The real validation
  body is reached by an indirect vtable call, so there is no direct xref from the
  string to the algorithm.
* Consequence: get the format *catalogue* from `.rdata`, but to get the algorithm
  you must rebuild the class hierarchy (RTTI -> vtable -> method slots). That is
  a separate, much larger job and it is not needed here: the algorithms are
  described in public specifications, and the descriptor table already tells us
  which formats exist and which magic they use.
* 75 CFG-guarded indirect calls also explain why naive patching of commercial
  carvers is common malware territory; this project does not do that.

The practical yield of the Ghidra pass was therefore structural, not textual:
confirmation that validators are per-class, vtable-dispatched, and independent of
the scan engine -- which is exactly the decomposition used in `src/validators.rs`
(one function per format, called through a `match` on `Kind`).


### Getting past the wrappers: MSVC RTTI -> vtable

Ghidra's RTTI analyzer did not recover the classes (only the log strings showed
up as labels), so the vtable was resolved directly from the on-disk RTTI chain
with `re/tools/msvc_rtti.py`:

```
type descriptor -> CompleteObjectLocator (signature 1, pTypeDescriptor RVA)
                -> qword in .rdata/.data equal to the COL address
                -> that qword + 8 is slot 0
```

x64 MSVC stores those pointers as image-base-relative values, so this works on
the file without running it.

```
CPngFileData   vtable 0x1405a2d30
  slot 1  0x140281a90   memcmp(header, <descriptor magic>, 8)
CPdfData       vtable 0x1405a2ad8
  slot 1  0x14028bff0   memcmp(header, "%PDF-", 4)
CZipFileData   vtable 0x1405a3598
  slot 1  0x14027e620
```

Decompiled slot 1 of `CPngFileData` (`re/data/png_validator.c`):

```c
void FUN_140281a90(undefined8 self, undefined8 buf)
{
  (*(code *)PTR__guard_dispatch_icall_1405394d0)(buf, &DAT_1405cb310, 8);
  return;
}
```

`DAT_1405cb310` is `89 50 4e 47 0d 0a 1a 0a`. The slot's whole job is: compare
N bytes of the candidate against the magic that lives in the descriptor. The
equivalent PDF slot compares 4 bytes against `25 50 44 46 2d` (`%PDF-`).

Two consequences worth recording:

* the architecture is exactly header-match -> vtable-dispatched `Validate`, which
  is what `src/sig.rs` (pattern + `pattern_at`) and `src/validators.rs` (per-kind
  function) reproduce;
* reading the vtable naively beyond its last slot walks into the *next* class:
  `CPngFileData`'s neighbour is `CGifFileData` (`DAT_1405cb388` = `GIF8`,
  `DAT_1405cb340` = `L"gif"`). That is how the first pass mislabelled slots 6/7.

## What this project does differently

* Validators return a length **and** a confidence, and every rejection is written
  to `manifest.csv`. Commercial tools hide that; a recovery run should be
  arguable.
* Formats whose length cannot be derived are marked as heuristics instead of
  being silently reported as certain.
* Undelete goes through the filesystem's own structures (`$MFT` runlists, ext4
  extent trees) rather than only contiguous carving.
