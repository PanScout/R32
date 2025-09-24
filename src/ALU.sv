`timescale 1ns/1ps

module ALU (
      input  wire [31:0] i_operand_a,
      input  wire [31:0] i_operand_b,
      input  wire [3:0]  i_opcode,
      output logic [31:0] o_result
   );

   // Operation codes as local parameters for readability
   localparam logic [3:0] OP_ADD  = 4'd0;
   localparam logic [3:0] OP_SUB  = 4'd1;
   localparam logic [3:0] OP_XOR  = 4'd2;
   localparam logic [3:0] OP_OR   = 4'd3;
   localparam logic [3:0] OP_AND  = 4'd4;
   localparam logic [3:0] OP_SLL  = 4'd5;
   localparam logic [3:0] OP_SRL  = 4'd6;
   localparam logic [3:0] OP_SRA  = 4'd7;
   localparam logic [3:0] OP_SLT  = 4'd8;
   localparam logic [3:0] OP_SLTU = 4'd9;

   (* use_dsp = "yes" *) 
   always_comb begin 
      // Extract shift amount from lower 5 bits of operand B
      automatic logic [4:0] shift_amt = i_operand_b[4:0];

      unique case (i_opcode)
                // ADD: A + B
                OP_ADD: begin
                   (* use_dsp = "yes" *) o_result = i_operand_a + i_operand_b;
                end

                // SUB: A - B
                OP_SUB: begin
                   (* use_dsp = "yes" *) o_result = i_operand_a - i_operand_b;
                end

                // XOR: bitwise exclusive OR
                OP_XOR: begin
                   o_result    = i_operand_a ^ i_operand_b;
                end

                // OR: bitwise inclusive OR
                OP_OR: begin
                   o_result    = i_operand_a | i_operand_b;
                end

                // AND: bitwise AND
                OP_AND: begin
                   o_result    = i_operand_a & i_operand_b;
                end

                // SLL: shift left logical
                OP_SLL: begin
                   o_result    = i_operand_a << shift_amt;
                end

                // SRL: shift right logical
                OP_SRL: begin
                   o_result    = i_operand_a >> shift_amt;
                end

                // SRA: shift right arithmetic
                OP_SRA: begin
                   o_result    = $signed(i_operand_a) >>> shift_amt;
                end

                // SLT: set if A < B (signed)
                OP_SLT: begin
                   o_result    = {31'd0, ($signed(i_operand_a) < $signed(i_operand_b))};
                end

                // SLTU: set if A < B (unsigned)
                OP_SLTU: begin
                   o_result    = {31'd0, (i_operand_a < i_operand_b)};
                end

                // DEFAULT: invalid opcode
                default: begin
                   o_result    = 32'd0;
                end
             endcase
          end

       endmodule
