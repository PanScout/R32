`timescale 1ns/1ps

module board (
    input logic i_clock,
    input wire i_reset,
    output logic reset_led,
    output logic o_error,
    output logic [7:0] o_hex_display
);

/* verilator lint_off PROCASSINIT */
logic clock_div = 0;
logic [31:0] counter = 32'b0;
/* verilator lint_on PROCASSINIT */

logic [7:0] hex_data, hex_display;


always_comb begin
    if(i_reset == 1) begin
        o_hex_display = 8'b0;
        reset_led = 1;
    end else begin
        o_hex_display = hex_display;
        reset_led = 0;
    end
end


always @(posedge i_clock) begin : SoC_clock_div
    if(counter < 1_000_000) //MAGIC NUMBER WOO
        counter <= counter + 1;
    else begin
        clock_div <= ~ clock_div;
        counter <= 0;
    end
end


logic error_sig;
assign o_error = error_sig;

SoC u_SoC(
    .i_clock    (clock_div  ),
    .i_reset    (i_reset),
    .o_error    (error_sig    ),
    .o_hex_byte (hex_data )
);

dual_hex u_dual_hex(
    .i_clock   (i_clock   ),
    .num1    (hex_data[3:0]),
    .num2    (hex_data[7:4]),
    .hex_out (hex_display )
);





    
endmodule
