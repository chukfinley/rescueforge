// Dump decompiled C for every function that references a matching string.
// Intended for locating the per-format validators inside a C++ binary that has
// RTTI names but no PDB: the strings "CPdfData::Validate" etc. are logging tags
// emitted by the validator itself, so an xref from a function lands you in it.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Reference;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class XrefDecomp extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String needle = args.length > 0 ? args[0] : "::Validate";
        String outPath = args.length > 1 ? args[1] : "/tmp/xref.c";

        DecompInterface dec = new DecompInterface();
        dec.toggleCCode(true);
        dec.toggleSyntaxTree(true);
        dec.openProgram(currentProgram);

        List<Address> hits = new ArrayList<>();
        Listing lst = currentProgram.getListing();
        DataIterator it = lst.getDefinedData(true);
        while (it.hasNext()) {
            var d = it.next();
            Object v;
            try {
                v = d.getValue();
            } catch (Exception e) {
                continue;
            }
            if (v != null && v.toString().contains(needle)) {
                hits.add(d.getAddress());
            }
        }

        PrintWriter pw = new PrintWriter(new FileWriter(outPath));
        pw.println("// program=" + currentProgram.getName());
        pw.println("// needle=" + needle);
        pw.println("// string hits=" + hits.size());
        for (Address h : hits) {
            String s;
            try {
                s = lst.getDataAt(h).getValue().toString();
            } catch (Exception e) {
                s = "?";
            }
            pw.println("\n// ===== string at " + h + " : " + s);
            Reference[] refs = getReferencesTo(h);
            for (Reference r : refs) {
                Function f = getFunctionContaining(r.getFromAddress());
                if (f == null) {
                    pw.println("//   xref from " + r.getFromAddress() + " outside any function");
                    continue;
                }
                pw.println("// ---- function " + f.getName() + " @ " + f.getEntryPoint() + " (xref " + r.getFromAddress() + ")");
                DecompileResults res = dec.decompileFunction(f, 120, monitor);
                if (res != null && res.decompileCompleted()) {
                    pw.println(res.getDecompiledFunction().getC());
                } else {
                    pw.println("//   decompile failed");
                }
            }
        }
        pw.close();
        println("wrote " + outPath);
    }
}
