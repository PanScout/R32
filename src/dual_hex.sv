    `timescale 1ns/1ps
    module dual_hex (
        input wire i_clock,
        input wire [3:0] num1,
        input wire [3:0] num2,
        output logic [7:0] hex_out
    );

    /* verilator lint_off PROCASSINIT */
    logic clock_div = 0;
    logic [31:0] counter = 32'b0;
    /* verilator lint_on PROCASSINIT */


    always @(posedge i_clock) begin
        if(counter < 500_000) //MAGIC NUMBER WOO
            counter <= counter + 1;
        else begin
            clock_div <= ~ clock_div;
            counter <= 0;
        end
    end


    always_comb begin
        hex_out = 8'b0;
        if (clock_div == 1) begin
            case (num1)
            4'h0: hex_out = 8'b1_0000001;  // 0
            4'h1: hex_out = 8'b1_1001111;  // 1
            4'h2: hex_out = 8'b1_0010010;  // 2
            4'h3: hex_out = 8'b1_0000110;  // 3
            4'h4: hex_out = 8'b1_1001100;  // 4
            4'h5: hex_out = 8'b1_0100100;  // 5
            4'h6: hex_out = 8'b1_0100000;  // 6
            4'h7: hex_out = 8'b1_0001111;  // 7
            4'h8: hex_out = 8'b1_0000000;  // 8
            4'h9: hex_out = 8'b1_0000100;  // 9
            4'hA: hex_out = 8'b1_0001000;  // A
            4'hB: hex_out = 8'b1_1100000;  // b
            4'hC: hex_out = 8'b1_0110001;  // C
            4'hD: hex_out = 8'b1_1000010;  // d
            4'hE: hex_out = 8'b1_0110000;  // E
            4'hF: hex_out = 8'b1_0111000;  // F
            default: hex_out = 8'b1_0000000;
            endcase
        end else if (clock_div == 0) begin
            case (num2)
            4'h0: hex_out = 8'b0_0000001;  // 0
            4'h1: hex_out = 8'b0_1001111;  // 1
            4'h2: hex_out = 8'b0_0010010;  // 2
            4'h3: hex_out = 8'b0_0000110;  // 3
            4'h4: hex_out = 8'b0_1001100;  // 4
            4'h5: hex_out = 8'b0_0100100;  // 5
            4'h6: hex_out = 8'b0_0100000;  // 6
            4'h7: hex_out = 8'b0_0001111;  // 7
            4'h8: hex_out = 8'b0_0000000;  // 8
            4'h9: hex_out = 8'b0_0000100;  // 9
            4'hA: hex_out = 8'b0_0001000;  // A
            4'hB: hex_out = 8'b0_1100000;  // b
            4'hC: hex_out = 8'b0_0110001;  // C
            4'hD: hex_out = 8'b0_1000010;  // d
            4'hE: hex_out = 8'b0_0110000;  // E
            4'hF: hex_out = 8'b0_0111000;  // F
            default: hex_out = 8'b0_0000000;
            endcase
        end

    end
        
    endmodule
