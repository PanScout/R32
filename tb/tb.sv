`timescale 1ns/1ps
/* verilator lint_off UNUSEDSIGNAL  */
/* verilator lint_off UNDRIVEN */


// ============================================================================
// Generic Verilog Testbench Template (module name: tb)
// Instantiates the DUT named "top". Edit as needed.
// Clock/reset scaffolding provided; remove if unnecessary.
// ============================================================================
module tb;

   // Clock & reset signals ---------------------------------------------------
   //logic rst = 1;
   logic clock, reset, error;
   logic [7:0] hex_byte;
   // ~100 MHz free-running clock (10 ns period) ------------------------------
   always #5 clock = ~clock;

   // Release reset after 100 ns ------------------------------------------------
   //initial begin
   //  #100 rst = 0;
   //end

   // Device Under Test -------------------------------------------------------
   // Replace 'top' with your DUT module name and connect ports as needed

   SoC u_SoC(
       .i_clock (clock ),
       .i_reset (reset ),
       .o_error (error ),
       .o_hex_byte(hex_byte)
   );
   



`ifndef SYNTHESIS
   
   initial begin
      $dumpfile("tb.fst");  // create this file
      $dumpvars(0, tb); // dump all signals in the tb hierarchy
   end


   // Simple stimulus ---------------------------------------------------------
   initial begin
    reset = 1;
    #100
    reset = 0;
    #6000
    reset = 1;
    #6000
    reset = 0;
    #6000



    $finish;


   end
`endif // !SYNTHESIS

endmodule

