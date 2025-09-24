`timescale 1ns/1ps
import utils_pkg::band, utils_pkg::expect_equal;

module tb_top;
  logic a = 1'b0;
  logic b = 1'b0;
  logic y;

  and_gate dut (.a(a), .b(b), .y(y));

  // NEW: waveform open
  initial begin
    // If you want to control the filename via plusarg:
    string wf;
    if (!$value$plusargs("WAVEFILE=%s", wf)) wf = "dump.fst";  // default
    $dumpfile(wf);
    // Depth 0 = dump everything reachable
    $dumpvars(0, tb_top);
  end

  initial begin
    a = 1'b0; b = 1'b0; #10; expect_equal(y, band(a,b), "00");
    a = 1'b0; b = 1'b1; #10; expect_equal(y, band(a,b), "01");
    a = 1'b1; b = 1'b0; #10; expect_equal(y, band(a,b), "10");
    a = 1'b1; b = 1'b1; #10; expect_equal(y, band(a,b), "11");
    a = 1'b0; b = 1'b0; #10; expect_equal(y, band(a,b), "00");
    $display("tb_top PASSED");
    $finish;
  end
endmodule
