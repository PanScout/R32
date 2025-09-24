`timescale 1ns/1ps

module SoC (
    input logic i_clock,
    input logic i_reset,
    output logic o_error,
    output logic [7:0] o_hex_byte
);
/* verilator lint_off UNUSEDSIGNAL */
logic rom_ready, data_rw, mem_error_ram, mem_error_rom;
logic [3:0] rw_strobe;
logic [31:0] instruction, data_in, data_out, instruction_address, data_address;

R32 u_R32(
    .i_clock               (i_clock               ),
    .i_reset               (i_reset               ),
    .o_error               (o_error               ),
    .i_instruction         (instruction         ),
    .o_instruction_address (instruction_address ),
    .o_rom_ready           (rom_ready           ),
    .o_data_rw             (data_rw             ),
    .o_data                (data_out                ),
    .i_data                (data_in                ),
    .o_data_address        (data_address        ),
    .o_data_rw_strobe      (rw_strobe      )
);

ROM_RAM u_ROM_RAM(
    .i_clock           (i_clock           ),
    .i_rom_ready       (rom_ready       ),
    .i_rom_address     (instruction_address ),
    .o_rom_out         (instruction         ),
    .i_rw_data         (data_rw         ),
    .i_data_address    (data_address >> 2),
    .i_data            (data_out            ),
    .i_rw_data_strobes (rw_strobe ),
    .o_data            (data_in            ),
    .o_error_ram(mem_error_ram),
    .o_error_rom(mem_error_rom),
    .hex_byte(o_hex_byte)
);



    
endmodule

