#!/usr/bin/env python3
"""Resolve an MSVC class vtable from RTTI, without a debugger or a PDB.

x64 MSVC RTTI layout used here:

    TypeDescriptor   { void *vftable; void *spare; char name[]; }   // name at +16
    CompleteObjectLocator {
        uint32 signature;      // 1
        uint32 offset;
        uint32 cdOffset;
        uint32 pTypeDescriptor;  // RVA
        uint32 pClassDescriptor; // RVA
    }
    vtable[-1] = CompleteObjectLocator * (absolute VA, relocated)

So: find the type descriptor string, find the COL whose pTypeDescriptor RVA
matches, then scan code/data sections for a qword pointing at that COL. The
qword after it is slot 0.

Usage: msvc_rtti.py <exe> <ClassName> [slots]
"""
import struct
import sys
from pathlib import Path


def sections(data):
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    coff = e_lfanew + 4
    nsec, = struct.unpack_from("<H", data, coff + 2)
    opt_size, = struct.unpack_from("<H", data, coff + 16)
    opt = coff + 20
    magic, = struct.unpack_from("<H", data, opt)
    is64 = magic == 0x20B
    base = struct.unpack_from("<Q" if is64 else "<I", data, opt + (24 if is64 else 28))[0]
    sect = opt + opt_size
    out = []
    for i in range(nsec):
        o = sect + i * 40
        name = data[o:o + 8].rstrip(b"\0").decode("ascii", "replace")
        vsize, vaddr, rawsize, rawptr = struct.unpack_from("<IIII", data, o + 8)
        out.append({"name": name, "va": vaddr, "vsize": vsize, "raw": rawptr, "rsize": rawsize})
    return base, out


def rva_to_off(secs, rva):
    for s in secs:
        if s["va"] <= rva < s["va"] + max(s["vsize"], s["rsize"]):
            return s["raw"] + (rva - s["va"])
    return None


def main():
    path = Path(sys.argv[1])
    cls = sys.argv[2]
    slots = int(sys.argv[3]) if len(sys.argv) > 3 else 10
    data = path.read_bytes()
    base, secs = sections(data)

    # 1. type descriptor name
    name = f".?AV{cls}@@".encode()
    idx = data.find(name)
    if idx < 0:
        print(f"type descriptor for {cls} not found")
        return
    for s in secs:
        if s["raw"] <= idx < s["raw"] + s["rsize"]:
            name_rva = s["va"] + (idx - s["raw"])
            break
    td_rva = name_rva - 16
    print(f"type descriptor  va=0x{base + td_rva:x} name=0x{base + name_rva:x}")

    # 2. complete object locator referencing it
    col_rva = None
    for s in secs:
        blob = data[s["raw"]:s["raw"] + s["rsize"]]
        needle = struct.pack("<I", td_rva)
        pos = 0
        while True:
            pos = blob.find(needle, pos)
            if pos < 0:
                break
            cand = s["va"] + pos - 12  # pTypeDescriptor sits 12 bytes into the COL
            off = rva_to_off(secs, cand)
            if off is not None:
                sig, _o, _cd, ptd = struct.unpack_from("<IIII", data, off)
                if sig == 1 and ptd == td_rva:
                    col_rva = cand
                    break
            pos += 4
        if col_rva is not None:
            break

    if col_rva is None:
        print("complete object locator not found")
        return
    col_va = base + col_rva
    print(f"object locator   va=0x{col_va:x}")

    # 3. vtable: a qword equal to the COL VA, next qword is slot 0
    vt_rva = None
    for s in secs:
        blob = data[s["raw"]:s["raw"] + s["rsize"]]
        needle = struct.pack("<Q", col_va)
        pos = 0
        while True:
            pos = blob.find(needle, pos)
            if pos < 0:
                break
            if pos % 8 == 0:
                off = s["va"] + pos + 8
                vt_rva = off
                break
            pos += 8
        if vt_rva is not None:
            break

    if vt_rva is None:
        print("vtable not found (COL unused?)")
        return
    print(f"vtable           va=0x{base + vt_rva:x}")
    vt_off = rva_to_off(secs, vt_rva)
    for i in range(slots):
        ptr, = struct.unpack_from("<Q", data, vt_off + i * 8)
        if ptr == 0:
            break
        fn_rva = ptr - base
        label = ""
        if i == 0:
            label = "  (slot 0: usually the destructor)"
        print(f"  slot {i:2d}  va=0x{ptr:x}{label}")


if __name__ == "__main__":
    main()
