// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _generic_tanh_float_s_HH_
#define _generic_tanh_float_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "exp_generic_double_s.h"
#include "face_classifier_cqcK.h"
#include "face_classifier_cdEe.h"
#include "face_classifier_cjbC.h"
#include "face_classifier_ceOg.h"
#include "face_classifier_ckbM.h"
#include "face_classifier_crcU.h"
#include "face_classifier_csc4.h"
#include "face_classifier_ctde.h"
#include "face_classifier_cudo.h"

namespace ap_rtl {

struct generic_tanh_float_s : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<32> > t_in;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_lv<32> > ap_var_for_const1;
    sc_signal< sc_lv<32> > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const2;
    sc_signal< sc_lv<64> > ap_var_for_const4;
    sc_signal< sc_lv<5> > ap_var_for_const3;


    // Module declarations
    generic_tanh_float_s(sc_module_name name);
    SC_HAS_PROCESS(generic_tanh_float_s);

    ~generic_tanh_float_s();

    sc_trace_file* mVcdFile;

    exp_generic_double_s* grp_exp_generic_double_s_fu_89;
    face_classifier_cqcK<1,4,32,32,32>* face_classifier_cqcK_U75;
    face_classifier_cdEe<1,4,32,32,32>* face_classifier_cdEe_U76;
    face_classifier_cdEe<1,4,32,32,32>* face_classifier_cdEe_U77;
    face_classifier_cjbC<1,4,32,32,32>* face_classifier_cjbC_U78;
    face_classifier_ceOg<1,2,32,32,32>* face_classifier_ceOg_U79;
    face_classifier_ckbM<1,8,32,32,32>* face_classifier_ckbM_U80;
    face_classifier_crcU<1,1,64,32>* face_classifier_crcU_U81;
    face_classifier_csc4<1,1,32,64>* face_classifier_csc4_U82;
    face_classifier_ctde<1,1,32,32,1>* face_classifier_ctde_U83;
    face_classifier_cudo<1,4,64,64,64>* face_classifier_cudo_U84;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter16;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter17;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter18;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter19;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter20;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter21;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter22;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter23;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter24;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter25;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter26;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter27;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter28;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter29;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter30;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter31;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter32;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter16;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter17;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter18;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter19;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter20;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter21;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter22;
    sc_signal< bool > ap_block_state24_pp0_stage0_iter23;
    sc_signal< bool > ap_block_state25_pp0_stage0_iter24;
    sc_signal< bool > ap_block_state26_pp0_stage0_iter25;
    sc_signal< bool > ap_block_state27_pp0_stage0_iter26;
    sc_signal< bool > ap_block_state28_pp0_stage0_iter27;
    sc_signal< bool > ap_block_state29_pp0_stage0_iter28;
    sc_signal< bool > ap_block_state30_pp0_stage0_iter29;
    sc_signal< bool > ap_block_state31_pp0_stage0_iter30;
    sc_signal< bool > ap_block_state32_pp0_stage0_iter31;
    sc_signal< bool > ap_block_state33_pp0_stage0_iter32;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > expx_reg_58;
    sc_signal< sc_lv<32> > expx_reg_58_pp0_iter18_reg;
    sc_signal< sc_lv<32> > expx_reg_58_pp0_iter19_reg;
    sc_signal< sc_lv<32> > grp_fu_109_p2;
    sc_signal< sc_lv<32> > reg_156;
    sc_signal< sc_lv<1> > tmp_s_reg_345;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter19_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter19_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter19_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter19_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter19_reg;
    sc_signal< sc_lv<32> > grp_fu_125_p2;
    sc_signal< sc_lv<32> > reg_161;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter27_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter27_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter27_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter27_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter27_reg;
    sc_signal< sc_lv<32> > reg_161_pp0_iter29_reg;
    sc_signal< sc_lv<32> > reg_161_pp0_iter30_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter1_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter2_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter3_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter4_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter5_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter6_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter7_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter8_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter9_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter10_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter11_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter12_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter13_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter14_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter15_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter16_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter17_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter18_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter19_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter20_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter21_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter22_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter23_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter24_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter25_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter26_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter27_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter28_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter29_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter30_reg;
    sc_signal< sc_lv<1> > p_Result_s_reg_331_pp0_iter31_reg;
    sc_signal< sc_lv<32> > abst_in_fu_207_p1;
    sc_signal< sc_lv<32> > abst_in_reg_336;
    sc_signal< sc_lv<32> > abst_in_reg_336_pp0_iter1_reg;
    sc_signal< sc_lv<32> > abst_in_reg_336_pp0_iter2_reg;
    sc_signal< sc_lv<32> > abst_in_reg_336_pp0_iter3_reg;
    sc_signal< sc_lv<1> > tmp_s_fu_216_p2;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter1_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter2_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter3_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter4_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter5_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter6_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter7_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter8_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter14_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter15_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter16_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter17_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter18_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter20_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter21_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter22_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter23_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter24_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter25_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter26_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter28_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter29_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter30_reg;
    sc_signal< sc_lv<1> > tmp_s_reg_345_pp0_iter31_reg;
    sc_signal< sc_lv<1> > tmp_55_fu_222_p2;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter1_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter2_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter3_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter4_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter5_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter6_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter7_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter8_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter14_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter15_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter16_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter17_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter18_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter20_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter21_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter22_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter23_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter24_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter25_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter26_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter28_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter29_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter30_reg;
    sc_signal< sc_lv<1> > tmp_55_reg_349_pp0_iter31_reg;
    sc_signal< sc_lv<1> > or_cond_fu_234_p2;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter1_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter2_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter3_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter4_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter5_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter6_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter7_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter8_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter9_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter10_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter11_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter12_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter13_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter14_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter15_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter16_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter17_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter18_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter20_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter21_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter22_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter23_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter24_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter25_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter26_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter28_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter29_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter30_reg;
    sc_signal< sc_lv<1> > or_cond_reg_353_pp0_iter31_reg;
    sc_signal< sc_lv<1> > tmp_18_fu_136_p2;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter1_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter2_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter3_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter4_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter5_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter6_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter7_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter8_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter14_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter15_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter16_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter17_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter18_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter20_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter21_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter22_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter23_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter24_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter25_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter26_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter28_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter29_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter30_reg;
    sc_signal< sc_lv<1> > tmp_18_reg_357_pp0_iter31_reg;
    sc_signal< sc_lv<1> > tmp_59_fu_240_p2;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter1_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter2_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter3_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter4_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter5_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter6_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter7_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter8_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter14_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter15_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter16_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter17_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter18_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter20_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter21_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter22_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter23_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter24_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter25_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter26_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter28_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter29_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter30_reg;
    sc_signal< sc_lv<1> > tmp_59_reg_361_pp0_iter31_reg;
    sc_signal< sc_lv<32> > tmp_60_fu_252_p1;
    sc_signal< sc_lv<1> > tmp_54_fu_151_p2;
    sc_signal< sc_lv<1> > tmp_54_reg_371;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter1_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter2_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter3_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter4_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter5_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter6_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter7_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter8_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter14_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter15_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter16_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter17_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter18_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter19_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter20_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter21_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter22_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter23_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter24_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter25_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter26_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter27_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter28_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter29_reg;
    sc_signal< sc_lv<1> > tmp_54_reg_371_pp0_iter30_reg;
    sc_signal< sc_lv<32> > x_2_fu_257_p3;
    sc_signal< sc_lv<32> > x_2_reg_376;
    sc_signal< sc_lv<32> > grp_fu_100_p2;
    sc_signal< sc_lv<32> > tmp_58_reg_383;
    sc_signal< sc_lv<1> > tmp_i_fu_277_p2;
    sc_signal< sc_lv<1> > tmp_i_reg_388;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter5_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter6_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter7_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter8_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter14_reg;
    sc_signal< sc_lv<1> > tmp_i_reg_388_pp0_iter15_reg;
    sc_signal< sc_lv<1> > tmp_i_50_fu_283_p2;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter5_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter6_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter7_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter8_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter9_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter10_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter11_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter12_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter13_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter14_reg;
    sc_signal< sc_lv<1> > tmp_i_50_reg_392_pp0_iter15_reg;
    sc_signal< sc_lv<64> > xd_fu_133_p1;
    sc_signal< sc_lv<64> > xd_reg_396;
    sc_signal< sc_lv<32> > grp_fu_121_p2;
    sc_signal< sc_lv<32> > resultf_reg_401;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter6_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter7_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter8_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter9_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter10_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter11_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter12_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter13_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter14_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter15_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter16_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter17_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter18_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter19_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter20_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter21_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter22_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter23_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter24_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter25_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter26_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter27_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter28_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter29_reg;
    sc_signal< sc_lv<32> > resultf_reg_401_pp0_iter30_reg;
    sc_signal< sc_lv<64> > grp_exp_generic_double_s_fu_89_ap_return;
    sc_signal< sc_lv<64> > tmp_118_i_reg_406;
    sc_signal< sc_lv<64> > grp_fu_141_p2;
    sc_signal< sc_lv<64> > tmp_119_i_reg_411;
    sc_signal< sc_lv<32> > tmp_120_i_fu_130_p1;
    sc_signal< sc_lv<32> > tmp_114_neg_fu_293_p2;
    sc_signal< sc_lv<32> > tmp_114_neg_reg_421;
    sc_signal< sc_lv<32> > tmp_61_fu_299_p1;
    sc_signal< sc_lv<32> > p_1_fu_303_p3;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > grp_exp_generic_double_s_fu_89_ap_start;
    sc_signal< sc_logic > grp_exp_generic_double_s_fu_89_ap_done;
    sc_signal< sc_logic > grp_exp_generic_double_s_fu_89_ap_idle;
    sc_signal< sc_logic > grp_exp_generic_double_s_fu_89_ap_ready;
    sc_signal< sc_logic > grp_exp_generic_double_s_fu_89_ap_ce;
    sc_signal< bool > ap_predicate_op78_call_state6;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter0_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter1_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter3_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter4_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter5_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter6_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter7_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter8_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter9_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter10_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter11_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter12_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter13_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter15_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter16_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter17_expx_reg_58;
    sc_signal< sc_lv<32> > ap_phi_mux_resultf_4_phi_fu_76_p10;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter0_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter1_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter2_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter3_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter4_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter5_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter6_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter7_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter8_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter9_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter10_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter11_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter12_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter13_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter14_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter15_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter16_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter17_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter18_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter19_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter20_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter21_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter22_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter23_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter24_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter25_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter26_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter27_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter28_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter29_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter30_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter31_resultf_4_reg_72;
    sc_signal< sc_lv<32> > ap_phi_reg_pp0_iter32_resultf_4_reg_72;
    sc_signal< sc_lv<32> > grp_fu_115_p2;
    sc_signal< sc_logic > grp_exp_generic_double_s_fu_89_ap_start_reg;
    sc_signal< bool > ap_predicate_op78_call_state6_state5;
    sc_signal< sc_lv<32> > grp_fu_100_p0;
    sc_signal< sc_lv<32> > grp_fu_100_p1;
    sc_signal< sc_lv<32> > grp_fu_125_p0;
    sc_signal< sc_lv<23> > loc_V_1_fu_189_p1;
    sc_signal< sc_lv<32> > p_Val2_s_fu_167_p1;
    sc_signal< sc_lv<31> > tmp_fu_195_p1;
    sc_signal< sc_lv<32> > p_Result_9_fu_199_p3;
    sc_signal< sc_lv<8> > loc_V_fu_179_p4;
    sc_signal< sc_lv<1> > tmp_56_fu_228_p2;
    sc_signal< sc_lv<1> > tmp_57_fu_146_p2;
    sc_signal< sc_lv<32> > tmp_113_neg_fu_246_p2;
    sc_signal< sc_lv<32> > grp_fu_104_p2;
    sc_signal< sc_lv<32> > p_Val2_3_fu_264_p1;
    sc_signal< sc_lv<8> > loc_V_2_fu_267_p4;
    sc_signal< sc_lv<32> > tmp_114_to_int_fu_289_p1;
    sc_signal< sc_lv<32> > tmp_118_to_int_fu_310_p1;
    sc_signal< sc_lv<32> > tmp_118_neg_fu_314_p2;
    sc_signal< sc_lv<32> > tmp_65_fu_320_p1;
    sc_signal< sc_lv<2> > grp_fu_100_opcode;
    sc_signal< bool > ap_block_pp0_stage0_00001;
    sc_signal< sc_logic > grp_fu_100_ce;
    sc_signal< bool > ap_predicate_op55_fsub_state1;
    sc_signal< sc_logic > grp_fu_104_ce;
    sc_signal< sc_logic > grp_fu_109_ce;
    sc_signal< sc_logic > grp_fu_115_ce;
    sc_signal< sc_logic > grp_fu_121_ce;
    sc_signal< sc_logic > grp_fu_125_ce;
    sc_signal< sc_logic > grp_fu_141_ce;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to31;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_644;
    sc_signal< bool > ap_condition_835;
    sc_signal< bool > ap_condition_959;
    sc_signal< bool > ap_condition_172;
    sc_signal< bool > ap_condition_928;
    sc_signal< bool > ap_condition_940;
    sc_signal< bool > ap_condition_922;
    sc_signal< bool > ap_condition_844;
    sc_signal< bool > ap_condition_851;
    sc_signal< bool > ap_condition_787;
    sc_signal< bool > ap_condition_1019;
    sc_signal< bool > ap_condition_426;
    sc_signal< bool > ap_condition_1154;
    sc_signal< bool > ap_condition_25;
    sc_signal< bool > ap_condition_1603;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3F800000;
    static const sc_lv<32> ap_const_lv32_40000000;
    static const sc_lv<32> ap_const_lv32_41B00000;
    static const sc_lv<64> ap_const_lv64_BFF0000000000000;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_48;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<32> ap_const_lv32_80000000;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<8> ap_const_lv8_60;
    static const sc_lv<32> ap_const_lv32_7FFFFFFF;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<5> ap_const_lv5_4;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const3();
    void thread_ap_clk_no_reset_();
    void thread_abst_in_fu_207_p1();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_00001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter9();
    void thread_ap_block_state11_pp0_stage0_iter10();
    void thread_ap_block_state12_pp0_stage0_iter11();
    void thread_ap_block_state13_pp0_stage0_iter12();
    void thread_ap_block_state14_pp0_stage0_iter13();
    void thread_ap_block_state15_pp0_stage0_iter14();
    void thread_ap_block_state16_pp0_stage0_iter15();
    void thread_ap_block_state17_pp0_stage0_iter16();
    void thread_ap_block_state18_pp0_stage0_iter17();
    void thread_ap_block_state19_pp0_stage0_iter18();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state20_pp0_stage0_iter19();
    void thread_ap_block_state21_pp0_stage0_iter20();
    void thread_ap_block_state22_pp0_stage0_iter21();
    void thread_ap_block_state23_pp0_stage0_iter22();
    void thread_ap_block_state24_pp0_stage0_iter23();
    void thread_ap_block_state25_pp0_stage0_iter24();
    void thread_ap_block_state26_pp0_stage0_iter25();
    void thread_ap_block_state27_pp0_stage0_iter26();
    void thread_ap_block_state28_pp0_stage0_iter27();
    void thread_ap_block_state29_pp0_stage0_iter28();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state30_pp0_stage0_iter29();
    void thread_ap_block_state31_pp0_stage0_iter30();
    void thread_ap_block_state32_pp0_stage0_iter31();
    void thread_ap_block_state33_pp0_stage0_iter32();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_block_state5_pp0_stage0_iter4();
    void thread_ap_block_state6_pp0_stage0_iter5();
    void thread_ap_block_state7_pp0_stage0_iter6();
    void thread_ap_block_state8_pp0_stage0_iter7();
    void thread_ap_block_state9_pp0_stage0_iter8();
    void thread_ap_condition_1019();
    void thread_ap_condition_1154();
    void thread_ap_condition_1603();
    void thread_ap_condition_172();
    void thread_ap_condition_25();
    void thread_ap_condition_426();
    void thread_ap_condition_644();
    void thread_ap_condition_787();
    void thread_ap_condition_835();
    void thread_ap_condition_844();
    void thread_ap_condition_851();
    void thread_ap_condition_922();
    void thread_ap_condition_928();
    void thread_ap_condition_940();
    void thread_ap_condition_959();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to31();
    void thread_ap_phi_mux_resultf_4_phi_fu_76_p10();
    void thread_ap_phi_reg_pp0_iter0_expx_reg_58();
    void thread_ap_phi_reg_pp0_iter0_resultf_4_reg_72();
    void thread_ap_predicate_op55_fsub_state1();
    void thread_ap_predicate_op78_call_state6();
    void thread_ap_predicate_op78_call_state6_state5();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_return();
    void thread_grp_exp_generic_double_s_fu_89_ap_ce();
    void thread_grp_exp_generic_double_s_fu_89_ap_start();
    void thread_grp_fu_100_ce();
    void thread_grp_fu_100_opcode();
    void thread_grp_fu_100_p0();
    void thread_grp_fu_100_p1();
    void thread_grp_fu_104_ce();
    void thread_grp_fu_109_ce();
    void thread_grp_fu_115_ce();
    void thread_grp_fu_121_ce();
    void thread_grp_fu_125_ce();
    void thread_grp_fu_125_p0();
    void thread_grp_fu_141_ce();
    void thread_loc_V_1_fu_189_p1();
    void thread_loc_V_2_fu_267_p4();
    void thread_loc_V_fu_179_p4();
    void thread_or_cond_fu_234_p2();
    void thread_p_1_fu_303_p3();
    void thread_p_Result_9_fu_199_p3();
    void thread_p_Val2_3_fu_264_p1();
    void thread_p_Val2_s_fu_167_p1();
    void thread_tmp_113_neg_fu_246_p2();
    void thread_tmp_114_neg_fu_293_p2();
    void thread_tmp_114_to_int_fu_289_p1();
    void thread_tmp_118_neg_fu_314_p2();
    void thread_tmp_118_to_int_fu_310_p1();
    void thread_tmp_54_fu_151_p2();
    void thread_tmp_55_fu_222_p2();
    void thread_tmp_56_fu_228_p2();
    void thread_tmp_57_fu_146_p2();
    void thread_tmp_59_fu_240_p2();
    void thread_tmp_60_fu_252_p1();
    void thread_tmp_61_fu_299_p1();
    void thread_tmp_65_fu_320_p1();
    void thread_tmp_fu_195_p1();
    void thread_tmp_i_50_fu_283_p2();
    void thread_tmp_i_fu_277_p2();
    void thread_tmp_s_fu_216_p2();
    void thread_x_2_fu_257_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
