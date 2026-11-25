#!/usr/bin/env python3
"""Decode Recuva's compiled-in file-signature descriptors.

Layout, verified against recuva64.exe 1.53.2096 (x64):

    <label, UTF-16, L"Trying <Format>">
    <extension slots, each an 8-byte aligned UTF-16 string: "jpg", ".pdf", ...>
    <magic bytes, 8-byte aligned>
    <RTTI class name, ASCII: "CPdfData::Validate">

The label says what the tool calls the format, the slots are the extensions it
will assign, and the magic is the byte pattern the deep scan looks for. Formats
whose length cannot be derived from the header get a separate "eof" descriptor
(e.g. "Trying Pdf eof", "Trying Rtf eof", "Trying CrwEnd").

Usage: recuva_sigs.py <recuva64.exe> [--csv]
"""
import struct
import sys
from pathlib import Path

# magic bytes known to be carved by the tool; used to spot the magic field in
# each descriptor region (the region also contains UTF-16 text, so plain
# "find any 8 bytes" is not precise enough).
KNOWN = {
    "89 50 4e 47 0d 0a 1a 0a": "PNG",
    "ff d8 ff": "JPEG",
    "47 49 46 38 39 61": "GIF89a",
    "42 4d": "BMP",
    "25 50 44 46 2d": "PDF",
    "50 4b 03 04": "ZIP",
    "52 61 72 21 1a 07 00": "RAR4",
    "52 61 72 21 1a 07 01": "RAR5",
    "37 7a bc af 27 1c": "7Z",
    "1f 8b 08": "GZIP",
    "66 4c 61 43": "FLAC",
    "4f 67 67 53": "OGG",
    "52 49 46 46": "RIFF",
    "4d 5a": "MZ/PE",
    "7f 45 4c 46": "ELF",
    "4d 53 43 46": "MSCF/CAB",
    "7b 5c 72 74 66": "RTF",
    "69 54 75 6e 65 73 44 42": "iTunesDB",
    "46 4c 56": "FLV",
    "1a 45 df a3": "EBML/MKV",
    "49 49 2a 00": "TIFF-LE",
    "4d 4d 00 2a": "TIFF-BE",
    "30 26 b2 75 8e 66 cf 11": "ASF/WMA",
    "00 00 01 ba": "MPEG-PS",
    "ff fb": "MP3",
    "00 00 00 18 66 74 79 70": "MP4",
    "d0 cf 11 e0": "OLE2",
    "43 44 30 30 31": "ISO9660",
    "51 46 49 fb": "QCOW",
    "4b 44 4d": "VMDK",
    "3c 3f 78 6d 6c": "XML",
}


def sections(data):
    e = struct.unpack_from("<I", data, 0x3C)[0]
    coff = e + 4
    nsec, = struct.unpack_from("<H", data, coff + 2)
    opt_size, = struct.unpack_from("<H", data, coff + 16)
    opt = coff + 20
    magic, = struct.unpack_from("<H", data, opt)
    sect = opt + opt_size
    out = []
    for i in range(nsec):
        o = sect + i * 40
        name = data[o:o + 8].rstrip(b"\0").decode("ascii", "replace")
        vsize, vaddr, rawsize, rawptr = struct.unpack_from("<IIII", data, o + 8)
        out.append((name, vaddr, vsize, rawptr, rawsize))
    return out


def wstr(blob, off, maxlen=16):
    out = []
    for i in range(maxlen):
        o = off + i * 2
        if o + 2 > len(blob):
            break
        c, = struct.unpack_from("<H", blob, o)
        if c == 0:
            break
        if not (32 <= c < 127):
            return ""
        out.append(chr(c))
    return "".join(out)


def parse(blob):
    labels = []
    needle = "Trying ".encode("utf-16-le")
    i = 0
    while True:
        i = blob.find(needle, i)
        if i < 0:
            break
        labels.append((i, wstr(blob, i, 32)))
        i += 2

    rows = []
    for n, (off, label) in enumerate(labels):
        end = labels[n + 1][0] if n + 1 < len(labels) else min(len(blob), off + 0x600)
        region = blob[off:end]

        # extension slots: 8-byte aligned short UTF-16 strings after the label
        exts = []
        for s in range((len(label) * 2 + 2 + 7) // 8 * 8, len(region) - 8, 8):
            txt = wstr(region, s, 5)
            if txt and 1 <= len(txt) <= 5:
                exts.append(txt)

        # magic: known pattern inside the region, prefer the earliest aligned hit
        magic, name = "", ""
        for pattern, pname in KNOWN.items():
            raw = bytes.fromhex(pattern)
            pos = region.find(raw)
            if pos >= 0:
                magic, name = pattern, pname
                break

        rows.append((off, label, exts, magic, name))
    return rows


def main():
    path = Path(sys.argv[1])
    data = path.read_bytes()
    rdata = [s for s in sections(data) if s[0] == ".rdata"][0]
    _, _va, _vs, rp, rs = rdata
    rows = parse(data[rp:rp + rs])

    csv = "--csv" in sys.argv
    if csv:
        print("label,extensions,magic_hex,magic_name,file_offset")
    else:
        print(f"{'label':<22} {'magic':<28} {'match':<12} extensions")
    for off, label, exts, magic, name in rows:
        ext_s = ",".join(x.strip(".") for x in exts if not x.startswith("Trying"))
        if csv:
            print(f'"{label}",{ext_s},"{magic}","{name}",0x{rp + off:x}')
        else:
            print(f"{label:<22} {magic:<28} {name:<12} {ext_s}")


if __name__ == "__main__":
    main()
