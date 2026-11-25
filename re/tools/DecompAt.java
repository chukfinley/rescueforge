// Decompile the functions at the given entry addresses.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DecompAt extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = args[0];
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        PrintWriter pw = new PrintWriter(new FileWriter(outPath));
        for (int i = 1; i < args.length; i++) {
            long va = Long.parseUnsignedLong(args[i].replace("0x", ""), 16);
            Address at = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(va);
            Function f = getFunctionAt(at);
            pw.println("\n// ===== function at 0x" + Long.toHexString(va) + " name=" + (f == null ? "?" : f.getName()));
            if (f == null) {
                pw.println("// no function");
                continue;
            }
            DecompileResults res = dec.decompileFunction(f, 180, monitor);
            if (res != null && res.decompileCompleted()) {
                pw.println(res.getDecompiledFunction().getC());
            } else {
                pw.println("// decompile failed");
            }
        }
        pw.close();
        println("wrote " + outPath);
    }
}
