    `timescale 1ns/1ps

(* ram_style = "block" *) 
module register_file (
    input logic i_clock,
    input logic i_reset,

    //Reading
    input logic [4:0] i_reg_read_select1, i_reg_read_select2,
    output logic [31:0] o_reg_output1, o_reg_output2,

    //Writing
    input logic [4:0] i_reg_write_sel,
    input logic [31:0] i_reg_write_input,
    input logic i_write_enable

    //
);

logic [31:0] register_file_array [31:0];

assign o_reg_output1 = register_file_array[i_reg_read_select1];
assign o_reg_output2 = register_file_array[i_reg_read_select2];

always_ff @( posedge i_clock or posedge i_reset ) begin

    if(i_reset == 1) begin
        //Reset
        integer i;
        for ( i = 0 ; i < 32 ; i = i +1 ) begin
            register_file_array[i] <= 0;
        end
    end else if(i_write_enable) begin
            if (i_reg_write_sel == 0) begin
             register_file_array[0] <= 0;
            end else begin
             register_file_array[i_reg_write_sel] <= i_reg_write_input;
            end
        end
    end


    
endmodule
