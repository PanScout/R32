`timescale 1ns/1ps
/* verilator lint_off UNUSEDSIGNAL  */
/* verilator lint_off UNDRIVEN */


// ============================================================================
// Generic Verilog Testbench Template (module name: tb_old)
// Instantiates the DUT named "top". Edit as needed.
// Clock/reset scaffolding provided; remove if unnecessary.
// ============================================================================
module tb_old;

   // Clock & reset signals ---------------------------------------------------
   //logic rst = 1;
   logic clock;
   logic ready_rom;
   logic [31:0] address;
   logic [31:0] instructionOut;
   logic error;

   logic [31:0] PC;
   logic [31:0] PC_newCount;
   logic PC_reset;
   logic PC_branch;
   logic [11:0] imm_b;
   logic [31:0] PC_imm;
   logic done_executing;

   logic CU_reset; 

   logic RF_reset;
   logic [4:0] reg_read_select_1, reg_read_select_2;
   logic [4:0] reg_write_select;
   logic reg_write_enable;

   logic [31:0] reg_output_1, reg_output_2, reg_write_input, reg_write_line;
   logic [3:0] opcode;
   logic [31:0] ALU_result;
   logic [31:0] ALU_operand_a, ALU_operand_b;

   logic zero, carry, sign, overflow;

   logic data_rw;
   logic [31:0] data_address;
   logic [31:0] data_to_write;
   logic [3:0] data_write_lines;
   logic [31:0] data_to_read;
   logic [31:0]  debug_mem [0:1023];
   logic [20:0] imm_j;
   logic PC_branch_j;
   logic pc_jalr;

   




   // ~100 MHz free-running clock (10 ns period) ------------------------------
   always #5 clock = ~clock;

   // Release reset after 100 ns ------------------------------------------------
   //initial begin
   //  #100 rst = 0;
   //end

   // Device Under Test -------------------------------------------------------
   // Replace 'top' with your DUT module name and connect ports as needed
   ROM u_ROM(
          .i_clock           (clock            ),
          .i_ready          (ready_rom         ),
          .i_address        (address        ),
          .o_instructionOut (instructionOut )
       );

   program_counter u_program_counter(
       .i_clock        (clock        ),
       .i_reset        (PC_reset        ),
       .i_done_executing(done_executing),
       .i_branch (PC_branch ),
       .o_currentCount (PC),
       .i_imm(PC_imm),
       .i_jalr(pc_jalr)
   );





   control_unit u_control_unit(
       .i_clock           (clock           ),
       .i_reset           (CU_reset           ),
       .i_program_counter (PC ),
       .o_done_executing  (done_executing  ),
       .o_ready_rom       (ready_rom       ),
       .o_address_rom         (address         ),
       .i_instruction     (instructionOut     ),
       .o_reg_read_select1  (reg_read_select_1  ),
       .o_reg_read_select2  (reg_read_select_2  ),
       .o_reg_write_select  (reg_write_select  ),
       .o_reg_write_enable  (reg_write_enable  ),
       .o_opcode (opcode),
       .o_ALU_operand_a(ALU_operand_a),
       .o_ALU_operand_b(ALU_operand_b),
       .i_ALU_result(ALU_result),
       .o_reg_write_line(reg_write_line),
       .i_reg_read_line_1(reg_output_1),
       .i_reg_read_line_2(reg_output_2),
       .o_branch(PC_branch),
       .o_data_rw(data_rw),
       .o_imm(PC_imm),
       .o_data_address(data_address),
       .o_jalr(pc_jalr),
       .o_data(data_to_write),
       .o_data_rw_lines(data_write_lines),
       .i_data(data_to_read),
       .o_error(error)
   );
   

   register_file u_register_file(
       .i_clock            (clock            ),
       .i_reset            (RF_reset            ),
       .i_reg_read_select1 (reg_read_select_1 ),
       .i_reg_read_select2 (reg_read_select_2 ),
       .o_reg_output1      (reg_output_1      ),
       .o_reg_output2      (reg_output_2      ),
       .i_reg_write_sel    (reg_write_select    ),
       .i_reg_write_input  (reg_write_line ),
       .i_write_enable     (reg_write_enable     )
   );
    


   ALU u_ALU(
       .i_operand_a (ALU_operand_a ),
       .i_operand_b (ALU_operand_b ),
       .i_opcode    (opcode    ),
       .o_result    (ALU_result    )
   );       

   data_memory u_data_memory(
       .i_clock            (clock            ),
       .i_rw               (data_rw               ),
       .i_address          (data_address          ),
       .i_data             (data_to_write             ),
       .i_byte_write_lines (data_write_lines ),
       .o_data             (data_to_read             ),
       .debug_mem(debug_mem)
   );
   
   
   
   
   




`ifndef SYNTHESIS
   
   initial begin
      $dumpfile("build/tb_old.vcd");  // create this file
      $dumpvars(0, tb_old); // dump all signals in the tb_old hierarchy
   end


   // Simple stimulus ---------------------------------------------------------
   initial begin
    //No need to replace 
    //PC_newCount = 0;
    //PC_branch_bi = 0;   
       
    PC_reset = 1;
    CU_reset = 1;
    RF_reset = 1;
    //$display(o_instructionOut);
    #10;
    CU_reset = 0;
    PC_reset = 0;
    RF_reset = 0;

    #6000

    PC_reset = 1;
    CU_reset = 1;
    RF_reset = 1;
    #100

    PC_reset = 0;
    CU_reset = 0;
    RF_reset = 0;
    #6000
    


    $finish;


   end
`endif // !SYNTHESIS

endmodule

