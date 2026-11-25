// Dump RTTI-derived class symbols and decompile whatever their vtable points at.
//
// Commercial C++ carvers keep one validator per format behind a vtable, so
// string xrefs only reach the trace wrappers. If the RTTI analyzer recovered the
// class, the vtable symbol exists and its slots are the real validators.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class VtableDump extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String needle = args.length > 0 ? args[0] : "FileData";
        String outPath = args.length > 1 ? args[1] : "/tmp/vtable.c";

        SymbolTable st = currentProgram.getSymbolTable();
        List<Symbol> hits = new ArrayList<>();
        SymbolIterator it = st.getAllSymbols(true);
        while (it.hasNext()) {
            Symbol s = it.next();
            if (s.getName().contains(needle)) {
                hits.add(s);
            }
        }

        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        Memory mem = currentProgram.getMemory();
        PrintWriter pw = new PrintWriter(new FileWriter(outPath));
        pw.println("// needle=" + needle + " symbols=" + hits.size());

        for (Symbol s : hits) {
            Address at = s.getAddress();
            String name = s.getName();
            pw.println("\n// ===== symbol " + name + " @ " + at + " type=" + s.getSymbolType());
            // treat the symbol as the start of a vtable: read 8 pointers
            for (int slot = 0; slot < 8; slot++) {
                Address entry = at.add((long) slot * 8);
                long ptr;
                try {
                    ptr = mem.getLong(entry);
                } catch (Exception e) {
                    break;
                }
                if (ptr == 0) {
                    continue;
                }
                Address target = entry.getNewAddress(ptr);
                Function f = getFunctionAt(target);
                if (f == null) {
                    f = getFunctionContaining(target);
                }
                if (f == null) {
                    pw.println("//   slot " + slot + " -> " + target + " (no function)");
                    continue;
                }
                pw.println("// ---- slot " + slot + " -> " + f.getName() + " @ " + f.getEntryPoint());
                DecompileResults res = dec.decompileFunction(f, 120, monitor);
                if (res != null && res.decompileCompleted()) {
                    pw.println(res.getDecompiledFunction().getC());
                }
            }
        }
        pw.close();
        println("wrote " + outPath);
    }
}
