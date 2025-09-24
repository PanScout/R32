`timescale 1ns/1ps

module R32 (
    input logic i_clock,
    input logic i_reset,
    output logic o_error,
    //Instruction ROM
    input  logic [31:0] i_instruction,
    output logic [31:0] o_instruction_address,
    output logic o_rom_ready,
    //RAM Memory
    output logic o_data_rw,
    output logic [31:0] o_data,
    input logic  [31:0] i_data,
    output logic [31:0] o_data_address,
    output logic [3:0] o_data_rw_strobe
);
    logic jalr_flag, branch_flag, done_executing_flag, reg_write_enable;
    logic [3:0] alu_opcode;
    logic [4:0] reg_read_sel_1, reg_read_sel_2, reg_write_sel;
    logic [31:0] program_count, imm, alu_operand_a, alu_operand_b, alu_result, reg_read_line_1, reg_read_line_2, reg_write_line;
    
    control_unit u_control_unit(
        .i_clock            (i_clock            ),
        .i_reset            (i_reset            ),
        .i_program_counter  (program_count  ),
        .o_done_executing   (done_executing_flag),
        .o_branch           (branch_flag           ),
        .o_jalr             (jalr_flag             ),
        .o_imm              (imm              ),
        .o_ready_rom        (o_rom_ready        ),
        .o_address_rom      (o_instruction_address),
        .i_instruction      (i_instruction      ),
        .o_reg_read_select1 (reg_read_sel_1 ),
        .o_reg_read_select2 (reg_read_sel_2 ),
        .o_reg_write_select (reg_write_sel ),
        .o_reg_write_enable (reg_write_enable),
        .i_reg_read_line_1  (reg_read_line_1  ),
        .i_reg_read_line_2  (reg_read_line_2  ),
        .o_reg_write_line   (reg_write_line   ),
        .o_opcode           (alu_opcode           ),
        .o_ALU_operand_a    (alu_operand_a    ),
        .o_ALU_operand_b    (alu_operand_b    ),
        .i_ALU_result       (alu_result       ),
        .o_data_rw          (o_data_rw          ),
        .o_data_address     (o_data_address     ),
        .o_data             (o_data             ),
        .o_data_rw_lines    (o_data_rw_strobe    ),
        .i_data             (i_data             ),
        .o_error            (o_error            )
    );

    ALU u_ALU(
        .i_operand_a (alu_operand_a ),
        .i_operand_b (alu_operand_b ),
        .i_opcode    (alu_opcode   ),
        .o_result    (alu_result    )
    );

    program_counter u_program_counter(
        .i_clock          (i_clock          ),
        .i_reset          (i_reset          ),
        .i_done_executing (done_executing_flag ),
        .i_branch         (branch_flag         ),
        .i_jalr           (jalr_flag           ),
        .i_imm            (imm            ),
        .o_currentCount   (program_count)
    );

    register_file u_register_file(
        .i_clock            (i_clock            ),
        .i_reset            (i_reset            ),
        .i_reg_read_select1 (reg_read_sel_1 ),
        .i_reg_read_select2 (reg_read_sel_2 ),
        .o_reg_output1      (reg_read_line_1      ),
        .o_reg_output2      (reg_read_line_2      ),
        .i_reg_write_sel    (reg_write_sel    ),
        .i_reg_write_input  (reg_write_line  ),
        .i_write_enable     (reg_write_enable    )
    );
    
    
endmodule
