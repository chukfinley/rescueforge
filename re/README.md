# RE artifacts

Reproducible evidence for [docs/RE-NOTES.md](../docs/RE-NOTES.md).

* `tools/pe_scan.py` - map PE sections and dump context around compiled-in magic
  byte arrays. `python3 pe_scan.py recuva64.exe`
* `tools/recuva_sigs.py` - decode Recuva's `.rdata` descriptor table
  (UTF-16 label -> extension slots -> magic -> RTTI validator class name).
  `--csv` emits machine-readable rows.
* `data/recuva_signatures.csv` - the curated result: format, magic, extensions,
  and the evidence that backs each row.
* `data/recuva_descriptors.txt` - raw dump of every `Trying ...` descriptor in
  `recuva64.exe` 1.53, including log strings the extractor cannot classify.

Binaries are not vendored. Download the installers yourself; the hashes used are
listed in the notes.
