`timescale 1ns/1ps

module ROM_RAM (
      input logic i_clock,
      //ROM
      input logic i_rom_ready,
      input logic [31:0] i_rom_address,
      output logic [31:0] o_rom_out,
      //DATA
      input logic i_rw_data, //! HIGH means write, low means read.
      /* verilator lint_off UNUSEDSIGNAL */
      input logic [31:0] i_data_address, //! Input address, selects a 32 bit word.
      /* verilator lint_on UNUSEDSIGNAL */
      input logic [31:0] i_data, //! Input data to write.
      input logic [3:0] i_rw_data_strobes, //! Selects which bytes of 32 bit word to write to, each high bit means that associated byte will be written to.
      output logic [31:0] o_data, //! The outputted 32 bit word.
      output logic o_error_ram,
      output logic o_error_rom,
      output logic [7:0] hex_byte
   );
   localparam MAX_ADDR_ROM = 512;
   localparam RAM_SIZE = 1024;
   localparam MAX_ADDR_RAM = MAX_ADDR_ROM + RAM_SIZE;
   /* verilator lint_off UNDRIVEN */
   logic [31:0] ROM [0:MAX_ADDR_ROM - 1];
   /* verilator lint_on UNDRIVEN */

    

   // ------------------------------------------------------------------
   //  Time-zero ROM preload
   // ------------------------------------------------------------------
   initial begin
      $readmemh("/Users/mwd/Developer/HDL/RISC-V/hex/FIB.hex", ROM);
   end


   always @(posedge i_clock) begin : ROM_block
      if (i_rom_ready == 1 && i_rom_address < (MAX_ADDR_ROM << 2)) begin
         /* verilator lint_off WIDTHTRUNC */
         o_rom_out <= ROM[ i_rom_address[31:2] ];
         o_error_rom <= 0;
         /* verilator lint_on WIDTHTRUNC */
      end else
        if(i_rom_address != 0)
            o_error_rom <= 1;
   end



    logic [31:0] RAM [0:RAM_SIZE-1] /*verilator public_flat_rw*/ ; 
    assign hex_byte = RAM[0][7:0];

   initial begin : intial_clear
      integer k;
      for (k = 0; k < RAM_SIZE; k=k+1 ) begin
         RAM[k] = 32'd0;
      end
   end

   //! This codifies synchronous read and write.
   always @(posedge i_clock) begin : read_write_block
      if (i_rw_data == 0 && i_data_address >= (MAX_ADDR_ROM << 2) && i_data_address < (MAX_ADDR_RAM << 2) ) //begin o_data <= mem[i_data_address];end
      begin
         o_data <= RAM[i_data_address - MAX_ADDR_ROM];
        o_error_ram <= 0;
      end
      else if (i_rw_data == 1 && i_data_address >= MAX_ADDR_ROM && i_data_address < MAX_ADDR_RAM) begin
         if(i_rw_data_strobes[0])
            RAM[ (i_data_address) - MAX_ADDR_ROM][7:0]     <=     i_data[7:0];
         if(i_rw_data_strobes[1])
            RAM[(i_data_address) - MAX_ADDR_ROM][15:8]    <=     i_data[15:8];
         if(i_rw_data_strobes[2])
            RAM[(i_data_address)- MAX_ADDR_ROM][23:16]   <=     i_data[23:16];
         if(i_rw_data_strobes[3])
            RAM[(i_data_address) - MAX_ADDR_ROM][31:24]   <=     i_data[31:24];
        o_error_ram <= 0;
      end 
      if(i_data_address != 0 && i_data_address <= MAX_ADDR_ROM && i_data_address > MAX_ADDR_RAM)
            o_error_ram <= 1;
    end



endmodule
