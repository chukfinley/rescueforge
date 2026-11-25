#!/usr/bin/env python3
"""Locate compiled-in carving signature tables inside a PE binary.

Commercial recovery tools keep their magic-byte lists as static arrays. Finding
such an array tells us (a) which formats the tool actually carves and (b) how
the table is encoded (magic, mask, length, name pointer).
"""
import sys
import struct
from pathlib import Path

MAGICS = {
    "png": b"\x89PNG\r\n\x1a\n",
    "jpeg": b"\xff\xd8\xff",
    "gif": b"GIF89a",
    "bmp": b"BM",
    "pdf": b"%PDF-",
    "zip": b"PK\x03\x04",
    "7z": b"7z\xbc\xaf\x27\x1c",
    "rar4": b"Rar!\x1a\x07\x00",
    "flac": b"fLaC",
    "ogg": b"OggS",
    "riff": b"RIFF",
    "sqlite": b"SQLite format 3\x00",
    "mp4": b"ftyp",
    "mkv": b"\x1aE\xdf\xa3",
    "gzip": b"\x1f\x8b\x08",
    "iso": b"CD001",
    "ole2": b"\xd0\xcf\x11\xe0\xa1\xb1\x1a\xe1",
}


def sections(data):
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    if data[e_lfanew:e_lfanew + 4] != b"PE\0\0":
        raise SystemExit("not a PE file")
    coff = e_lfanew + 4
    nsec, = struct.unpack_from("<H", data, coff + 2)
    opt_size, = struct.unpack_from("<H", data, coff + 16)
    opt = coff + 20
    magic, = struct.unpack_from("<H", data, opt)
    image_base = struct.unpack_from("<Q" if magic == 0x20B else "<I", data, opt + (24 if magic == 0x20B else 28))[0]
    sect = opt + opt_size
    out = []
    for i in range(nsec):
        off = sect + i * 40
        name = data[off:off + 8].rstrip(b"\0").decode("ascii", "replace")
        vsize, vaddr, rawsize, rawptr = struct.unpack_from("<IIII", data, off + 8)
        out.append((name, vaddr, vsize, rawptr, rawsize))
    return image_base, out


def hexdump(b):
    return " ".join(f"{x:02x}" for x in b)


def main(path):
    data = Path(path).read_bytes()
    base, secs = sections(data)
    print(f"== {Path(path).name}  base=0x{base:x}")
    for name, va, vs, rp, rs in secs:
        print(f"   {name:<9} va=0x{va:08x} vsize=0x{vs:08x} raw=0x{rp:08x} size=0x{rs:08x}")
    for sname, va, vs, rp, rs in secs:
        if sname not in (".rdata", ".data", ".text"):
            continue
        blob = data[rp:rp + rs]
        for fmt, magic in MAGICS.items():
            idx = 0
            hits = []
            while True:
                idx = blob.find(magic, idx)
                if idx < 0:
                    break
                hits.append(idx)
                idx += 1
                if len(hits) >= 6:
                    break
            for h in hits:
                lo = max(0, h - 24)
                hi = min(len(blob), h + len(magic) + 40)
                ctx = blob[lo:hi]
                print(f"  [{sname}] {fmt:<8} file+0x{rp + h:08x} va=0x{va + h:x}")
                print(f"      {hexdump(ctx)}")
    print()


if __name__ == "__main__":
    for p in sys.argv[1:]:
        main(p)
