// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module k2c_batch_norm (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        outputs_array_address0,
        outputs_array_ce0,
        outputs_array_we0,
        outputs_array_d0,
        inputs_array_address0,
        inputs_array_ce0,
        inputs_array_q0,
        inputs_numel_read,
        mean_array_address0,
        mean_array_ce0,
        mean_array_q0,
        stdev_array_address0,
        stdev_array_ce0,
        stdev_array_q0,
        gamma_array_address0,
        gamma_array_ce0,
        gamma_array_q0,
        beta_array_address0,
        beta_array_ce0,
        beta_array_q0
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state26 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [11:0] outputs_array_address0;
output   outputs_array_ce0;
output   outputs_array_we0;
output  [31:0] outputs_array_d0;
output  [11:0] inputs_array_address0;
output   inputs_array_ce0;
input  [31:0] inputs_array_q0;
input  [63:0] inputs_numel_read;
output  [11:0] mean_array_address0;
output   mean_array_ce0;
input  [31:0] mean_array_q0;
output  [11:0] stdev_array_address0;
output   stdev_array_ce0;
input  [31:0] stdev_array_q0;
output  [11:0] gamma_array_address0;
output   gamma_array_ce0;
input  [31:0] gamma_array_q0;
output  [11:0] beta_array_address0;
output   beta_array_ce0;
input  [31:0] beta_array_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg outputs_array_ce0;
reg outputs_array_we0;
reg inputs_array_ce0;
reg mean_array_ce0;
reg stdev_array_ce0;
reg gamma_array_ce0;
reg beta_array_ce0;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [11:0] i_reg_128;
wire   [63:0] i_cast_fu_155_p1;
reg   [63:0] i_cast_reg_177;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_state4_pp0_stage0_iter2;
wire    ap_block_state5_pp0_stage0_iter3;
wire    ap_block_state6_pp0_stage0_iter4;
wire    ap_block_state7_pp0_stage0_iter5;
wire    ap_block_state8_pp0_stage0_iter6;
wire    ap_block_state9_pp0_stage0_iter7;
wire    ap_block_state10_pp0_stage0_iter8;
wire    ap_block_state11_pp0_stage0_iter9;
wire    ap_block_state12_pp0_stage0_iter10;
wire    ap_block_state13_pp0_stage0_iter11;
wire    ap_block_state14_pp0_stage0_iter12;
wire    ap_block_state15_pp0_stage0_iter13;
wire    ap_block_state16_pp0_stage0_iter14;
wire    ap_block_state17_pp0_stage0_iter15;
wire    ap_block_state18_pp0_stage0_iter16;
wire    ap_block_state19_pp0_stage0_iter17;
wire    ap_block_state20_pp0_stage0_iter18;
wire    ap_block_state21_pp0_stage0_iter19;
wire    ap_block_state22_pp0_stage0_iter20;
wire    ap_block_state23_pp0_stage0_iter21;
wire    ap_block_state24_pp0_stage0_iter22;
wire    ap_block_state25_pp0_stage0_iter23;
wire    ap_block_pp0_stage0_11001;
reg   [63:0] i_cast_reg_177_pp0_iter1_reg;
reg   [63:0] i_cast_reg_177_pp0_iter2_reg;
reg   [63:0] i_cast_reg_177_pp0_iter3_reg;
reg   [63:0] i_cast_reg_177_pp0_iter4_reg;
reg   [63:0] i_cast_reg_177_pp0_iter5_reg;
reg   [63:0] i_cast_reg_177_pp0_iter6_reg;
reg   [63:0] i_cast_reg_177_pp0_iter7_reg;
reg   [63:0] i_cast_reg_177_pp0_iter8_reg;
reg   [63:0] i_cast_reg_177_pp0_iter9_reg;
reg   [63:0] i_cast_reg_177_pp0_iter10_reg;
reg   [63:0] i_cast_reg_177_pp0_iter11_reg;
reg   [63:0] i_cast_reg_177_pp0_iter12_reg;
reg   [63:0] i_cast_reg_177_pp0_iter13_reg;
reg   [63:0] i_cast_reg_177_pp0_iter14_reg;
reg   [63:0] i_cast_reg_177_pp0_iter15_reg;
reg   [63:0] i_cast_reg_177_pp0_iter16_reg;
reg   [63:0] i_cast_reg_177_pp0_iter17_reg;
reg   [63:0] i_cast_reg_177_pp0_iter18_reg;
reg   [63:0] i_cast_reg_177_pp0_iter19_reg;
reg   [63:0] i_cast_reg_177_pp0_iter20_reg;
reg   [63:0] i_cast_reg_177_pp0_iter21_reg;
reg   [63:0] i_cast_reg_177_pp0_iter22_reg;
wire   [0:0] exitcond_fu_161_p2;
reg   [0:0] exitcond_reg_185;
reg   [0:0] exitcond_reg_185_pp0_iter1_reg;
reg   [0:0] exitcond_reg_185_pp0_iter2_reg;
reg   [0:0] exitcond_reg_185_pp0_iter3_reg;
reg   [0:0] exitcond_reg_185_pp0_iter4_reg;
reg   [0:0] exitcond_reg_185_pp0_iter5_reg;
reg   [0:0] exitcond_reg_185_pp0_iter6_reg;
reg   [0:0] exitcond_reg_185_pp0_iter7_reg;
reg   [0:0] exitcond_reg_185_pp0_iter8_reg;
reg   [0:0] exitcond_reg_185_pp0_iter9_reg;
reg   [0:0] exitcond_reg_185_pp0_iter10_reg;
reg   [0:0] exitcond_reg_185_pp0_iter11_reg;
reg   [0:0] exitcond_reg_185_pp0_iter12_reg;
reg   [0:0] exitcond_reg_185_pp0_iter13_reg;
reg   [0:0] exitcond_reg_185_pp0_iter14_reg;
reg   [0:0] exitcond_reg_185_pp0_iter15_reg;
reg   [0:0] exitcond_reg_185_pp0_iter16_reg;
reg   [0:0] exitcond_reg_185_pp0_iter17_reg;
reg   [0:0] exitcond_reg_185_pp0_iter18_reg;
reg   [0:0] exitcond_reg_185_pp0_iter19_reg;
reg   [0:0] exitcond_reg_185_pp0_iter20_reg;
reg   [0:0] exitcond_reg_185_pp0_iter21_reg;
reg   [0:0] exitcond_reg_185_pp0_iter22_reg;
wire   [11:0] i_37_fu_166_p2;
reg    ap_enable_reg_pp0_iter0;
reg   [31:0] inputs_array_load_reg_204;
reg   [31:0] mean_array_load_reg_209;
wire   [31:0] grp_fu_139_p2;
reg   [31:0] tmp_s_reg_219;
reg   [31:0] stdev_array_load_reg_224;
wire   [31:0] grp_fu_151_p2;
reg   [31:0] tmp_52_reg_234;
reg   [31:0] gamma_array_load_reg_239;
wire   [31:0] grp_fu_147_p2;
reg   [31:0] tmp_53_reg_249;
reg   [31:0] beta_array_load_reg_254;
wire   [31:0] grp_fu_143_p2;
reg   [31:0] tmp_54_reg_259;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
reg    ap_enable_reg_pp0_iter8;
reg    ap_enable_reg_pp0_iter9;
reg    ap_enable_reg_pp0_iter10;
reg    ap_enable_reg_pp0_iter11;
reg    ap_enable_reg_pp0_iter12;
reg    ap_enable_reg_pp0_iter13;
reg    ap_enable_reg_pp0_iter14;
reg    ap_enable_reg_pp0_iter15;
reg    ap_enable_reg_pp0_iter16;
reg    ap_enable_reg_pp0_iter17;
reg    ap_enable_reg_pp0_iter18;
reg    ap_enable_reg_pp0_iter19;
reg    ap_enable_reg_pp0_iter20;
reg    ap_enable_reg_pp0_iter21;
reg    ap_enable_reg_pp0_iter22;
reg    ap_enable_reg_pp0_iter23;
wire    ap_block_pp0_stage0;
wire    ap_CS_fsm_state26;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 ap_enable_reg_pp0_iter9 = 1'b0;
#0 ap_enable_reg_pp0_iter10 = 1'b0;
#0 ap_enable_reg_pp0_iter11 = 1'b0;
#0 ap_enable_reg_pp0_iter12 = 1'b0;
#0 ap_enable_reg_pp0_iter13 = 1'b0;
#0 ap_enable_reg_pp0_iter14 = 1'b0;
#0 ap_enable_reg_pp0_iter15 = 1'b0;
#0 ap_enable_reg_pp0_iter16 = 1'b0;
#0 ap_enable_reg_pp0_iter17 = 1'b0;
#0 ap_enable_reg_pp0_iter18 = 1'b0;
#0 ap_enable_reg_pp0_iter19 = 1'b0;
#0 ap_enable_reg_pp0_iter20 = 1'b0;
#0 ap_enable_reg_pp0_iter21 = 1'b0;
#0 ap_enable_reg_pp0_iter22 = 1'b0;
#0 ap_enable_reg_pp0_iter23 = 1'b0;
end

face_classifier_clbW #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
face_classifier_clbW_U52(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(inputs_array_load_reg_204),
    .din1(mean_array_load_reg_209),
    .ce(1'b1),
    .dout(grp_fu_139_p2)
);

face_classifier_ceOg #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
face_classifier_ceOg_U53(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_53_reg_249),
    .din1(beta_array_load_reg_254),
    .ce(1'b1),
    .dout(grp_fu_143_p2)
);

face_classifier_cfYi #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
face_classifier_cfYi_U54(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_52_reg_234),
    .din1(gamma_array_load_reg_239),
    .ce(1'b1),
    .dout(grp_fu_147_p2)
);

face_classifier_cmb6 #(
    .ID( 1 ),
    .NUM_STAGE( 10 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
face_classifier_cmb6_U55(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_s_reg_219),
    .din1(stdev_array_load_reg_224),
    .ce(1'b1),
    .dout(grp_fu_151_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state2)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter10 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter10 <= ap_enable_reg_pp0_iter9;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter11 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter11 <= ap_enable_reg_pp0_iter10;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter12 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter12 <= ap_enable_reg_pp0_iter11;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter13 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter13 <= ap_enable_reg_pp0_iter12;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter14 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter14 <= ap_enable_reg_pp0_iter13;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter15 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter15 <= ap_enable_reg_pp0_iter14;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter16 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter16 <= ap_enable_reg_pp0_iter15;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter17 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter17 <= ap_enable_reg_pp0_iter16;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter18 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter18 <= ap_enable_reg_pp0_iter17;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter19 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter19 <= ap_enable_reg_pp0_iter18;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter20 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter20 <= ap_enable_reg_pp0_iter19;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter21 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter21 <= ap_enable_reg_pp0_iter20;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter22 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter22 <= ap_enable_reg_pp0_iter21;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter23 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter23 <= ap_enable_reg_pp0_iter22;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter23 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter9 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter9 <= ap_enable_reg_pp0_iter8;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_fu_161_p2 == 1'd0))) begin
        i_reg_128 <= i_37_fu_166_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_128 <= 12'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_reg_185_pp0_iter17_reg == 1'd0))) begin
        beta_array_load_reg_254 <= beta_array_q0;
        tmp_53_reg_249 <= grp_fu_147_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exitcond_reg_185 <= exitcond_fu_161_p2;
        exitcond_reg_185_pp0_iter1_reg <= exitcond_reg_185;
        i_cast_reg_177[11 : 0] <= i_cast_fu_155_p1[11 : 0];
        i_cast_reg_177_pp0_iter1_reg[11 : 0] <= i_cast_reg_177[11 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        exitcond_reg_185_pp0_iter10_reg <= exitcond_reg_185_pp0_iter9_reg;
        exitcond_reg_185_pp0_iter11_reg <= exitcond_reg_185_pp0_iter10_reg;
        exitcond_reg_185_pp0_iter12_reg <= exitcond_reg_185_pp0_iter11_reg;
        exitcond_reg_185_pp0_iter13_reg <= exitcond_reg_185_pp0_iter12_reg;
        exitcond_reg_185_pp0_iter14_reg <= exitcond_reg_185_pp0_iter13_reg;
        exitcond_reg_185_pp0_iter15_reg <= exitcond_reg_185_pp0_iter14_reg;
        exitcond_reg_185_pp0_iter16_reg <= exitcond_reg_185_pp0_iter15_reg;
        exitcond_reg_185_pp0_iter17_reg <= exitcond_reg_185_pp0_iter16_reg;
        exitcond_reg_185_pp0_iter18_reg <= exitcond_reg_185_pp0_iter17_reg;
        exitcond_reg_185_pp0_iter19_reg <= exitcond_reg_185_pp0_iter18_reg;
        exitcond_reg_185_pp0_iter20_reg <= exitcond_reg_185_pp0_iter19_reg;
        exitcond_reg_185_pp0_iter21_reg <= exitcond_reg_185_pp0_iter20_reg;
        exitcond_reg_185_pp0_iter22_reg <= exitcond_reg_185_pp0_iter21_reg;
        exitcond_reg_185_pp0_iter2_reg <= exitcond_reg_185_pp0_iter1_reg;
        exitcond_reg_185_pp0_iter3_reg <= exitcond_reg_185_pp0_iter2_reg;
        exitcond_reg_185_pp0_iter4_reg <= exitcond_reg_185_pp0_iter3_reg;
        exitcond_reg_185_pp0_iter5_reg <= exitcond_reg_185_pp0_iter4_reg;
        exitcond_reg_185_pp0_iter6_reg <= exitcond_reg_185_pp0_iter5_reg;
        exitcond_reg_185_pp0_iter7_reg <= exitcond_reg_185_pp0_iter6_reg;
        exitcond_reg_185_pp0_iter8_reg <= exitcond_reg_185_pp0_iter7_reg;
        exitcond_reg_185_pp0_iter9_reg <= exitcond_reg_185_pp0_iter8_reg;
        i_cast_reg_177_pp0_iter10_reg[11 : 0] <= i_cast_reg_177_pp0_iter9_reg[11 : 0];
        i_cast_reg_177_pp0_iter11_reg[11 : 0] <= i_cast_reg_177_pp0_iter10_reg[11 : 0];
        i_cast_reg_177_pp0_iter12_reg[11 : 0] <= i_cast_reg_177_pp0_iter11_reg[11 : 0];
        i_cast_reg_177_pp0_iter13_reg[11 : 0] <= i_cast_reg_177_pp0_iter12_reg[11 : 0];
        i_cast_reg_177_pp0_iter14_reg[11 : 0] <= i_cast_reg_177_pp0_iter13_reg[11 : 0];
        i_cast_reg_177_pp0_iter15_reg[11 : 0] <= i_cast_reg_177_pp0_iter14_reg[11 : 0];
        i_cast_reg_177_pp0_iter16_reg[11 : 0] <= i_cast_reg_177_pp0_iter15_reg[11 : 0];
        i_cast_reg_177_pp0_iter17_reg[11 : 0] <= i_cast_reg_177_pp0_iter16_reg[11 : 0];
        i_cast_reg_177_pp0_iter18_reg[11 : 0] <= i_cast_reg_177_pp0_iter17_reg[11 : 0];
        i_cast_reg_177_pp0_iter19_reg[11 : 0] <= i_cast_reg_177_pp0_iter18_reg[11 : 0];
        i_cast_reg_177_pp0_iter20_reg[11 : 0] <= i_cast_reg_177_pp0_iter19_reg[11 : 0];
        i_cast_reg_177_pp0_iter21_reg[11 : 0] <= i_cast_reg_177_pp0_iter20_reg[11 : 0];
        i_cast_reg_177_pp0_iter22_reg[11 : 0] <= i_cast_reg_177_pp0_iter21_reg[11 : 0];
        i_cast_reg_177_pp0_iter2_reg[11 : 0] <= i_cast_reg_177_pp0_iter1_reg[11 : 0];
        i_cast_reg_177_pp0_iter3_reg[11 : 0] <= i_cast_reg_177_pp0_iter2_reg[11 : 0];
        i_cast_reg_177_pp0_iter4_reg[11 : 0] <= i_cast_reg_177_pp0_iter3_reg[11 : 0];
        i_cast_reg_177_pp0_iter5_reg[11 : 0] <= i_cast_reg_177_pp0_iter4_reg[11 : 0];
        i_cast_reg_177_pp0_iter6_reg[11 : 0] <= i_cast_reg_177_pp0_iter5_reg[11 : 0];
        i_cast_reg_177_pp0_iter7_reg[11 : 0] <= i_cast_reg_177_pp0_iter6_reg[11 : 0];
        i_cast_reg_177_pp0_iter8_reg[11 : 0] <= i_cast_reg_177_pp0_iter7_reg[11 : 0];
        i_cast_reg_177_pp0_iter9_reg[11 : 0] <= i_cast_reg_177_pp0_iter8_reg[11 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_reg_185_pp0_iter14_reg == 1'd0))) begin
        gamma_array_load_reg_239 <= gamma_array_q0;
        tmp_52_reg_234 <= grp_fu_151_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_reg_185 == 1'd0))) begin
        inputs_array_load_reg_204 <= inputs_array_q0;
        mean_array_load_reg_209 <= mean_array_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_reg_185_pp0_iter4_reg == 1'd0))) begin
        stdev_array_load_reg_224 <= stdev_array_q0;
        tmp_s_reg_219 <= grp_fu_139_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_reg_185_pp0_iter21_reg == 1'd0))) begin
        tmp_54_reg_259 <= grp_fu_143_p2;
    end
end

always @ (*) begin
    if ((exitcond_fu_161_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state26) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter23 == 1'b0) & (ap_enable_reg_pp0_iter22 == 1'b0) & (ap_enable_reg_pp0_iter21 == 1'b0) & (ap_enable_reg_pp0_iter20 == 1'b0) & (ap_enable_reg_pp0_iter19 == 1'b0) & (ap_enable_reg_pp0_iter18 == 1'b0) & (ap_enable_reg_pp0_iter17 == 1'b0) & (ap_enable_reg_pp0_iter16 == 1'b0) & (ap_enable_reg_pp0_iter15 == 1'b0) & (ap_enable_reg_pp0_iter14 == 1'b0) & (ap_enable_reg_pp0_iter13 == 1'b0) & (ap_enable_reg_pp0_iter12 == 1'b0) & (ap_enable_reg_pp0_iter11 == 1'b0) & (ap_enable_reg_pp0_iter10 == 1'b0) & (ap_enable_reg_pp0_iter9 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state26)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter17 == 1'b1))) begin
        beta_array_ce0 = 1'b1;
    end else begin
        beta_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter14 == 1'b1))) begin
        gamma_array_ce0 = 1'b1;
    end else begin
        gamma_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        inputs_array_ce0 = 1'b1;
    end else begin
        inputs_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        mean_array_ce0 = 1'b1;
    end else begin
        mean_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter23 == 1'b1))) begin
        outputs_array_ce0 = 1'b1;
    end else begin
        outputs_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter23 == 1'b1) & (exitcond_reg_185_pp0_iter22_reg == 1'd0))) begin
        outputs_array_we0 = 1'b1;
    end else begin
        outputs_array_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        stdev_array_ce0 = 1'b1;
    end else begin
        stdev_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_fu_161_p2 == 1'd1)) & ~((ap_enable_reg_pp0_iter22 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter23 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter22 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter23 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_fu_161_p2 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state26;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state26 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage0_iter8 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage0_iter9 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter10 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage0_iter11 = ~(1'b1 == 1'b1);

assign ap_block_state14_pp0_stage0_iter12 = ~(1'b1 == 1'b1);

assign ap_block_state15_pp0_stage0_iter13 = ~(1'b1 == 1'b1);

assign ap_block_state16_pp0_stage0_iter14 = ~(1'b1 == 1'b1);

assign ap_block_state17_pp0_stage0_iter15 = ~(1'b1 == 1'b1);

assign ap_block_state18_pp0_stage0_iter16 = ~(1'b1 == 1'b1);

assign ap_block_state19_pp0_stage0_iter17 = ~(1'b1 == 1'b1);

assign ap_block_state20_pp0_stage0_iter18 = ~(1'b1 == 1'b1);

assign ap_block_state21_pp0_stage0_iter19 = ~(1'b1 == 1'b1);

assign ap_block_state22_pp0_stage0_iter20 = ~(1'b1 == 1'b1);

assign ap_block_state23_pp0_stage0_iter21 = ~(1'b1 == 1'b1);

assign ap_block_state24_pp0_stage0_iter22 = ~(1'b1 == 1'b1);

assign ap_block_state25_pp0_stage0_iter23 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign beta_array_address0 = i_cast_reg_177_pp0_iter16_reg;

assign exitcond_fu_161_p2 = ((i_cast_fu_155_p1 == inputs_numel_read) ? 1'b1 : 1'b0);

assign gamma_array_address0 = i_cast_reg_177_pp0_iter13_reg;

assign i_37_fu_166_p2 = (i_reg_128 + 12'd1);

assign i_cast_fu_155_p1 = i_reg_128;

assign inputs_array_address0 = i_cast_fu_155_p1;

assign mean_array_address0 = i_cast_fu_155_p1;

assign outputs_array_address0 = i_cast_reg_177_pp0_iter22_reg;

assign outputs_array_d0 = tmp_54_reg_259;

assign stdev_array_address0 = i_cast_reg_177_pp0_iter3_reg;

always @ (posedge ap_clk) begin
    i_cast_reg_177[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter1_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter2_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter3_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter4_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter5_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter6_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter7_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter8_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter9_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter10_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter11_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter12_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter13_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter14_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter15_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter16_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter17_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter18_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter19_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter20_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter21_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
    i_cast_reg_177_pp0_iter22_reg[63:12] <= 52'b0000000000000000000000000000000000000000000000000000;
end

endmodule //k2c_batch_norm
