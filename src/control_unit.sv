
`timescale 1ns/1ps

module control_unit (
      input logic i_clock,
      input logic i_reset,
      //PC Line
      input logic [31:0] i_program_counter,
      output logic o_done_executing,
      output logic o_branch,
      output logic o_jalr,
      output logic [31:0] o_imm,
      //ROM Lines
      output logic o_ready_rom,
      output logic [31:0] o_address_rom,
      input logic [31:0] i_instruction,
      //Register file lines
      output logic [4:0] o_reg_read_select1  /* synthesis syn_maxfan = 32 */, o_reg_read_select2  /* synthesis syn_maxfan = 32 */, o_reg_write_select  /* synthesis syn_maxfan = 32 */,
      output logic o_reg_write_enable,
      input logic [31:0] i_reg_read_line_1, i_reg_read_line_2,
      output logic [31:0] o_reg_write_line,
      //ALU opcode
      output logic [3:0] o_opcode,
      output logic [31:0] o_ALU_operand_a, o_ALU_operand_b,
      input logic [31:0] i_ALU_result,
      //Data lines
      output logic o_data_rw,
      output logic [31:0]  o_data_address,
      output logic [31:0] o_data,
      output logic [3:0] o_data_rw_lines,
      input logic [31:0] i_data,
      output logic o_error

   );
   typedef enum logic [2:0] { S_IDLE, S_FETCH, S_DECODE, S_READ, S_EXECUTE, S_ERROR } state;

   state current_state, next_state;

   logic [3:0] ALU_op_reg /* synthesis syn_maxfan = 32 */, data_rw_lines_reg;
   logic [4:0] rs1_reg, rs2_reg, rsd_reg;
   logic [31:0] imm_reg, effective_address_reg;
   logic just_branched_reg;
   logic error_flag_reg;


   localparam logic [6:0] R_TYPE = 7'b0110011;
   localparam logic [6:0] I_TYPE_LOAD= 7'b0000011;
   localparam logic [6:0] I_TYPE_ARITHMETIC = 7'b0010011;
   localparam logic [6:0] I_TYPE_JALR= 7'b1100111;
   localparam logic [6:0] S_TYPE = 7'b0100011;
   localparam logic [6:0] B_TYPE = 7'b1100011;
   localparam logic [6:0] J_TYPE = 7'b1101111;
   localparam logic [6:0] U_TYPE_AUIPC = 7'b0010111;
   localparam logic [6:0] U_TYPE_LUI = 7'b0110111;

   localparam logic [2:0] FUNCT3_ADDI        = 3'b000;  // addi
   localparam logic [2:0] FUNCT3_SLLI        = 3'b001;  // slli  (shift-left immediate)
   localparam logic [2:0] FUNCT3_SLTI        = 3'b010;  // slti  (signed  < )
   localparam logic [2:0] FUNCT3_SLTIU       = 3'b011;  // sltiu (unsigned < )
   localparam logic [2:0] FUNCT3_XORI        = 3'b100;  // xori
   localparam logic [2:0] FUNCT3_SRLI_SRAI   = 3'b101;  // srli / srai (distinguish with imm[11:5])
   localparam logic [2:0] FUNCT3_ORI         = 3'b110;  // ori
   localparam logic [2:0] FUNCT3_ANDI        = 3'b111;  // 


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

   localparam logic [2:0] STORE_BYTE = 3'd0;
   localparam logic [2:0] STORE_HWORD = 3'd1;
   localparam logic [2:0] STORE_WORD = 3'd2;

   localparam logic [2:0] LOAD_BYTE   = 3'd0;
   localparam logic [2:0] LOAD_HWORD  = 3'd1;
   localparam logic [2:0] LOAD_WORD   = 3'd2;
   localparam logic [2:0] LOAB_BYTE_U = 3'd4;
   localparam logic [2:0] LOAD_HWORD_U = 3'd5;

   localparam logic [2:0] BEQ  = 3'd0;
   localparam logic [2:0] BNE  = 3'd1;
   localparam logic [2:0] BLT  = 3'd4;
   localparam logic [2:0] BGE  = 3'd5;
   localparam logic [2:0] BLTU = 3'd6;
   localparam logic [2:0] BGEU = 3'd7;

   assign o_imm = imm_reg;
   assign o_reg_read_select1 = rs1_reg;
   assign o_reg_read_select2 = rs2_reg;
   assign o_reg_write_select = rsd_reg;
   assign o_data_rw_lines = data_rw_lines_reg;
   assign o_error = error_flag_reg;
   assign o_data_address = effective_address_reg;

   


   always_ff @( posedge i_clock or posedge i_reset) begin : ff_logic

      if (i_reset) 
      begin
         current_state <= S_IDLE;
         rs1_reg <= 0;
         rs2_reg <= 0;
         imm_reg <= 0;
         ALU_op_reg <= 0; 
         data_rw_lines_reg <= 0;
         rs1_reg <= 0;
         rs2_reg <= 0;
         rsd_reg <= 0;
         imm_reg <= 0;
         effective_address_reg <= 0;
         just_branched_reg <= 0;
         error_flag_reg <= 0;
      end
      else 
      begin

        current_state <= next_state; 
        data_rw_lines_reg <= data_rw_lines;

        if(error == 1)
            error_flag_reg <= error;

        if(current_state == S_IDLE)
        begin
            rs1_reg <= 0;
            rs2_reg <= 0;
            imm_reg <= 0;
            ALU_op_reg <= 0; 
            data_rw_lines_reg <= 0;
            rs1_reg <= 0;
            rs2_reg <= 0;
            rsd_reg <= 0;
            imm_reg <= 0;
            effective_address_reg <= 0;
            just_branched_reg <= 0;
            error_flag_reg <= 0;
        end 

        if (current_state == S_FETCH)
            just_branched_reg <= 0;

        
        if (current_state == S_DECODE) 
        begin
            rs1_reg   <= rs1;
            rs2_reg   <= rs2;
            rsd_reg   <= rsd;
            //This is hacky I know.
            if(i_instruction[6:0] == I_TYPE_JALR)
               imm_reg <= (i_reg_read_line_1 + imm) & ~32'd1;
            else
               imm_reg <= imm;
            ALU_op_reg<= ALU_op;
        end

        if (current_state == S_READ)
        begin
            just_branched_reg <= just_branched_flag;
            effective_address_reg <= effective_address;
            data_rw_lines_reg <= data_rw_lines;
        end

        if (current_state == S_EXECUTE) 
        begin
            rs1_reg <= 0;
            rs2_reg <= 0;
            rsd_reg <= 0;
            ALU_op_reg <= 0;
            imm_reg <= 0;
        end

        if(current_state == S_ERROR)
            if(i_reset == 1)
               error_flag_reg <= 0;
      end
   end

   always_comb begin : next_state_logic

      next_state = current_state;

      unique case (current_state)
                S_IDLE:
                begin
                  if(i_reset != 1)
                     next_state = S_FETCH;                  
                end
                S_FETCH:
                begin
                   if(error == 1)
                     next_state = S_ERROR;
                   else
                     next_state = S_DECODE;
                end
                S_DECODE:
                begin
                   if(error == 1)
                     next_state = S_ERROR;
                   else
                     next_state = S_READ; 
                end
               S_READ:
               begin
                   if(error == 1)
                     next_state = S_ERROR;
                   else
                     next_state = S_EXECUTE;  
                end
               S_EXECUTE:
               begin
                   if(error == 1)
                     next_state = S_ERROR;
                   else
                     next_state = S_FETCH;                  
               end

               S_ERROR:
               begin
                  if(i_reset == 1)
                        next_state = S_IDLE;
                  else
                     next_state = S_ERROR;
               end
               default:
               begin
                  next_state = S_ERROR;
               end

             endcase

   end

   //temps that drive ffs
   logic [4:0] rs1;
   logic [4:0] rs2;
   logic [31:0] imm;
   logic [4:0] rsd;
   logic [3:0] ALU_op, data_rw_lines;
   logic [31:0] effective_address;
   logic just_branched_flag;
   logic error;


   always_comb begin : output_logic

    rs1 = 0;
    rs2 = 0;
    imm = 0;
    rsd = 0;
    ALU_op = 0;
    data_rw_lines = 0;
    effective_address = 0;
    just_branched_flag = 0;
    error = 0;
    effective_address = 0;
    o_opcode = 0;
    o_ALU_operand_a = 0;
    o_ALU_operand_b = 0;
    o_reg_write_enable = 0;
    o_reg_write_line = 32'd0;
    o_branch = 0;
    o_data_rw = 0;
    o_done_executing = 0;
    o_ready_rom = 0;
    o_address_rom = 32'd0;
    o_data = 32'd0;
    o_jalr = 0;


      unique case (current_state)
         S_ERROR:
         begin
            error = 1;
         end
         S_IDLE:
         begin
            just_branched_flag = 0;
            rs1 = 0;
            rs2 = 0;
            imm = 0;
            rsd = 0;
            ALU_op = 0;
            o_reg_write_enable = 0;
            o_ready_rom = 0;
            o_address_rom = 0;
            o_branch = 0;
            data_rw_lines = 0;
            o_reg_write_enable = 0; 
         end
         S_FETCH:
         begin
            
            o_done_executing = 0;
            o_data_rw = 0; 
            data_rw_lines = 0;
            o_reg_write_enable = 1'b0; 
            o_branch = 0;
            just_branched_flag = 0;
            o_ready_rom = 1;
            o_address_rom = i_program_counter;
            
         end
         S_DECODE:
         begin
            automatic logic [6:0] opcode = i_instruction[6:0];
            
            unique case (opcode)
               R_TYPE:
               begin 
                  automatic logic [2:0] funct3_field = i_instruction[14:12];
                  automatic logic [6:0] funct7_field = i_instruction[31:25];
                  rs1 = i_instruction[19:15];
                  rs2 = i_instruction[24:20];
                  rsd = i_instruction[11:7];

                  case (funct3_field)
                     FUNCT3_ADDI: 
                     begin
                        if(funct7_field == 7'b0000000)
                           ALU_op = OP_ADD;
                        else if(funct7_field == 7'b0100000)
                           ALU_op = OP_SUB;
                     end
                     FUNCT3_XORI:
                        ALU_op = OP_XOR;
                     FUNCT3_ORI:
                        ALU_op = OP_OR;
                     FUNCT3_ANDI:
                        ALU_op = OP_AND;
                     FUNCT3_SLLI:
                        ALU_op = OP_SLL;
                     FUNCT3_SRLI_SRAI:
                     begin
                        if(funct7_field == 7'b0000000)
                           ALU_op = OP_SRL;
                        else if(funct7_field == 7'b0100000)
                           ALU_op = OP_SRA;
                     end
                     FUNCT3_SLTI:
                        ALU_op = OP_SLT;
                     FUNCT3_SLTIU:
                        ALU_op = OP_SLTU;
                     default: 
                     begin
                        error = 1; 
                     end
                        
                        
                  endcase
               end
               I_TYPE_LOAD:
               begin
                  rs1 = i_instruction[19:15];
                  imm = { {20{i_instruction[31]}}, i_instruction[31:20]};
                  rsd = i_instruction[11:7];   

               end
               I_TYPE_ARITHMETIC:
               begin
                  automatic logic [2:0] funct3_field = i_instruction[14:12];                  
                  rs1 = i_instruction[19:15];
                  imm =  { {20{i_instruction[31]}}, i_instruction[31:20]};
                  rsd = i_instruction[11:7];                  
                  case (funct3_field)
                     FUNCT3_ADDI: 
                        ALU_op = OP_ADD;
                     FUNCT3_XORI:
                        ALU_op = OP_XOR;
                     FUNCT3_ORI:
                        ALU_op = OP_OR;
                     FUNCT3_ANDI:
                        ALU_op = OP_AND;
                     FUNCT3_SLLI:
                        ALU_op = OP_SLL;
                     FUNCT3_SRLI_SRAI:
                     begin
                        if(imm[11:5] == 7'b0000000)
                        begin
                           ALU_op = OP_SRL;
                        end else
                        begin
                           ALU_op = OP_SRA;
                        end
                     end
                     FUNCT3_SLTI:
                        ALU_op = OP_SLT;
                     FUNCT3_SLTIU:
                        ALU_op = OP_SLTU;
                     default: 
                        error = 1;
                  endcase
               end
               
               I_TYPE_JALR:
               begin
                  imm =  { {20{i_instruction[31]}}, i_instruction[31:20]};
                  rs1   = i_instruction[19:15];
                  rsd    = i_instruction[11:7];
               end
               S_TYPE:
               begin

                  automatic logic [2:0] funct3_field = i_instruction[14:12];
                  rs1 = i_instruction[19:15];
                  rs2 = i_instruction[24:20];
                  imm = { {20{i_instruction[31]}},i_instruction[31:25], i_instruction[11:7]};

                  case (funct3_field)
                     STORE_BYTE:
                        data_rw_lines = 4'b0001;
                     STORE_HWORD:
                        data_rw_lines = 4'b0011;
                     STORE_WORD:
                        data_rw_lines = 4'b1111;
                     default:
                        error = 1;
                  endcase
               end

               B_TYPE:
               begin
                  imm = { {19{i_instruction[31]}},i_instruction[31],  i_instruction[7],   i_instruction[30:25],  i_instruction[11:8], 1'b0};
                  rs1 = i_instruction[19:15];
                  rs2 = i_instruction[24:20];  
               end
               U_TYPE_AUIPC:
               begin
                  imm = {i_instruction[31:12],{12{1'b0}}};
                  rsd = i_instruction[11:7];
               end
               U_TYPE_LUI:
               begin
                  imm = {i_instruction[31:12],{12{1'b0}}};
                  rsd = i_instruction[11:7];
               end
               J_TYPE:
               begin
                  rsd = i_instruction[11:7];
                  imm ={ {11{i_instruction[31]}} ,i_instruction[31], i_instruction[19:12], i_instruction[20], i_instruction[30:21], 1'b0 };                  
               end
               default: 
                  error = 1;
            endcase

            


            
         end
         S_READ:
         begin
         
            unique case (i_instruction[6:0])
               R_TYPE:
               begin
                  o_ALU_operand_a = i_reg_read_line_1;
                  o_ALU_operand_b = i_reg_read_line_2;
                  o_opcode = ALU_op_reg;
                  o_reg_write_enable = 1;
                  o_reg_write_line = i_ALU_result;
               end
               I_TYPE_LOAD:
               begin
                  effective_address = i_reg_read_line_1 + imm_reg;
                  effective_address = {{22{effective_address[11]}}  , effective_address[11:2]};
                  data_rw_lines = 4'b1111; 
                  o_data_rw = 0;
               end
               
               I_TYPE_ARITHMETIC:
               begin
                  o_ALU_operand_a = i_reg_read_line_1;
                  o_ALU_operand_b = imm_reg;
                  o_opcode = ALU_op_reg;
                  o_reg_write_enable = 1;
                  o_reg_write_line = i_ALU_result;
               end               
               I_TYPE_JALR:
               begin
                  o_reg_write_enable = 1;
                  o_reg_write_line = i_program_counter + 4;
                  o_jalr = 1;
                  imm = (i_reg_read_line_1 + imm_reg) & ~1;
                  just_branched_flag = 1;
               end
               S_TYPE:
               begin
                  effective_address = $signed(i_reg_read_line_1 + imm_reg); 
                  data_rw_lines = data_rw_lines_reg << effective_address_reg[1:0];
               end
               B_TYPE:
               begin
                  automatic logic [2:0] funct3_field = i_instruction[14:12];

                  case (funct3_field)
                     BEQ:
                     begin
                        if(i_reg_read_line_1 == i_reg_read_line_2)
                        begin
                         o_branch = 1;
                         just_branched_flag = 1;
                        end 
                     end
                     BNE:
                     begin
                        if( i_reg_read_line_1 != i_reg_read_line_2)
                        begin
                         o_branch = 1;
                         just_branched_flag = 1;
                        end
                     end
                     BLT:
                     begin
                        if( $signed(i_reg_read_line_1) < $signed(i_reg_read_line_2))
                        begin
                         o_branch = 1;
                         just_branched_flag = 1;
                        end 
                     end
                     BGE:
                     begin
                        if( $signed(i_reg_read_line_1) >= $signed(i_reg_read_line_2))
                        begin
                         o_branch = 1;
                         just_branched_flag = 1;
                        end 
                     end
                     BLTU:
                     begin
                        if( $unsigned(i_reg_read_line_1) < $unsigned(i_reg_read_line_2))
                        begin
                         o_branch = 1;
                         just_branched_flag = 1;
                        end 
                     end
                     BGEU:
                     begin
                        if( $unsigned(i_reg_read_line_1) >= $unsigned(i_reg_read_line_2))
                        begin
                         o_branch = 1;
                         just_branched_flag = 1;
                        end 
                     end
                     default:
                        error = 1;
                  endcase
               end
               U_TYPE_AUIPC:
               begin
                  o_reg_write_line = i_program_counter + imm_reg;
                  o_reg_write_enable = 1;
               end
               U_TYPE_LUI:
               begin
                  o_reg_write_line = imm_reg;
                  o_reg_write_enable = 1;
               end
               J_TYPE:
               begin
                  o_reg_write_enable = 1;
                  o_reg_write_line = i_program_counter + 4;
                  o_branch = 1;
                  just_branched_flag = 1;
               end
               default: 
                  error = 1;
            endcase
         end

         S_EXECUTE:
         begin
            if(just_branched_reg != 1)
               o_done_executing = 1;

            unique case (i_instruction[6:0])
               R_TYPE:
               begin
                  o_reg_write_line = i_ALU_result;
               end
               I_TYPE_LOAD:
               begin
                  automatic logic [2:0] funct3_field = i_instruction[14:12];
                  automatic logic [1:0] byte_address = effective_address_reg[1:0];
                  automatic logic  hword_address = effective_address_reg[1];
                  case (funct3_field)
                    LOAD_BYTE: 
                    begin
                      case (byte_address)
                        2'b00: o_reg_write_line = { {24{i_data[7]}}  , i_data[7:0]}  ;
                        2'b01: o_reg_write_line = { {24{i_data[15]}} , i_data[15:8]}  ;
                        2'b10: o_reg_write_line = { {24{i_data[23]}} , i_data[23:16]}  ;
                        2'b11: o_reg_write_line = { {24{i_data[31]}} , i_data[31:24]} ;
                        default:
                           error = 1;
                      endcase
                    end
                    LOAB_BYTE_U: 
                    begin
                      case (byte_address)
                        2'b00: o_reg_write_line = { {24'b0} , i_data[7:0]}  ;
                        2'b01: o_reg_write_line = { {24'b0} , i_data[15:8]}  ;
                        2'b10: o_reg_write_line = { {24'b0} , i_data[23:16]}  ;
                        2'b11: o_reg_write_line = { {24'b0} , i_data[31:24]} ;
                        default:
                           error = 1;
                      endcase
                    end
                    LOAD_HWORD: 
                    begin
                     case (hword_address)
                        1'b0: o_reg_write_line = { {16{i_data[15]}}  , i_data[15:0]};
                        1'b1: o_reg_write_line = { {16{i_data[31]}}  , i_data[31:16]};
                        default:
                           error = 1;
                     endcase
                    end
                    LOAD_HWORD_U: 
                    begin
                     case (hword_address)
                        1'b0: o_reg_write_line = { 16'b0 , i_data[15:0]};
                        1'b1: o_reg_write_line = { 16'b0 , i_data[31:16]};
                        default:
                           error = 1;
                     endcase
                    end
                    LOAD_WORD:
                    begin
                     o_reg_write_line = i_data;
                    end
                    default:
                     error = 1;
                  endcase  
                  o_reg_write_enable = 1;
               end
               I_TYPE_ARITHMETIC:
               begin
                  o_reg_write_line = i_ALU_result;
               end               
               I_TYPE_JALR:
               begin
                  o_jalr = 0;
                  o_reg_write_enable = 0;
               end
               S_TYPE:
               begin
                  automatic logic [2:0] funct3_field = i_instruction[14:12];

                  if(error != 1)
                     o_data_rw = 1;

                  case (funct3_field)
                     STORE_BYTE: o_data = {24'b0, i_reg_read_line_2[7:0]};  
                     STORE_HWORD: o_data = {16'b0, i_reg_read_line_2[15:0]};
                     STORE_WORD: o_data = i_reg_read_line_2; 
                     default:
                        error = 1;
                  endcase

               end

               B_TYPE:
               begin
                  o_branch = 0;
               end
               U_TYPE_AUIPC:
                  o_reg_write_enable = 0;
               U_TYPE_LUI:
                  o_reg_write_enable = 0;
               J_TYPE:
               begin
                  o_branch = 0;
                  o_reg_write_enable = 0;
               end
               default: 
                  error = 1;
            endcase
         end
         default:
         begin
            error = 1;
         end
      endcase
   end
endmodule
