`timescale 1ns/1ps

module program_counter (
      input logic i_clock,
      input logic i_reset,
      input logic i_done_executing,
      input logic i_branch,
      input logic i_jalr,
      input logic [31:0] i_imm,
      output wire [31:0] o_currentCount
   );

   logic [31:0] currentCountReg;
   assign o_currentCount = currentCountReg;

   always_ff @(posedge i_clock or posedge i_reset) begin : main
      if (i_reset == 1) begin
         currentCountReg <= 0;
      end
      else if (i_jalr) begin
         currentCountReg <= i_imm;
      end
      else if (i_branch) begin
         currentCountReg <= currentCountReg + i_imm;
      end
      else if (i_done_executing) begin
         currentCountReg <= currentCountReg + 4;
      end
   end

endmodule
