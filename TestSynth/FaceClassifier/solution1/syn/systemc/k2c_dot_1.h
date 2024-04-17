// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_dot_1_HH_
#define _k2c_dot_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "k2c_idx2sub.h"
#include "k2c_sub2idx.h"
#include "face_classifier_cdEe.h"
#include "face_classifier_ceOg.h"
#include "face_classifier_cfYi.h"
#include "face_classifier_cg8j.h"
#include "face_classifier_chbi.h"
#include "k2c_dot_1_permA.h"
#include "k2c_dot_1_permB.h"

namespace ap_rtl {

struct k2c_dot_1 : public sc_module {
    // Port declarations 33
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<12> > C_array_address0;
    sc_out< sc_logic > C_array_ce0;
    sc_out< sc_logic > C_array_we0;
    sc_out< sc_lv<32> > C_array_d0;
    sc_out< sc_lv<12> > Ar_array_address0;
    sc_out< sc_logic > Ar_array_ce0;
    sc_in< sc_lv<32> > Ar_array_q0;
    sc_in< sc_lv<64> > Ar_ndim_read;
    sc_in< sc_lv<64> > Ar_numel_read;
    sc_out< sc_lv<3> > Ar_shape_address0;
    sc_out< sc_logic > Ar_shape_ce0;
    sc_in< sc_lv<64> > Ar_shape_q0;
    sc_out< sc_lv<19> > B_array_address0;
    sc_out< sc_logic > B_array_ce0;
    sc_in< sc_lv<32> > B_array_q0;
    sc_out< sc_lv<3> > B_shape_address0;
    sc_out< sc_logic > B_shape_ce0;
    sc_in< sc_lv<64> > B_shape_q0;
    sc_in< sc_lv<64> > p_read4;
    sc_out< sc_lv<19> > fwork_address0;
    sc_out< sc_logic > fwork_ce0;
    sc_out< sc_logic > fwork_we0;
    sc_out< sc_lv<32> > fwork_d0;
    sc_in< sc_lv<32> > fwork_q0;
    sc_out< sc_lv<19> > fwork_address1;
    sc_out< sc_logic > fwork_ce1;
    sc_in< sc_lv<32> > fwork_q1;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_dot_1(sc_module_name name);
    SC_HAS_PROCESS(k2c_dot_1);

    ~k2c_dot_1();

    sc_trace_file* mVcdFile;

    k2c_dot_1_permA* permA_U;
    k2c_dot_1_permB* permB_U;
    k2c_dot_1_permA* freeA_U;
    k2c_dot_1_permB* freeB_U;
    k2c_dot_1_permA* newshpA_U;
    k2c_dot_1_permA* newshpB_U;
    k2c_dot_1_permA* Asub_U;
    k2c_dot_1_permA* Bsub_U;
    k2c_idx2sub* grp_k2c_idx2sub_fu_644;
    k2c_sub2idx* grp_k2c_sub2idx_fu_656;
    face_classifier_cdEe<1,4,32,32,32>* face_classifier_cdEe_U12;
    face_classifier_ceOg<1,2,32,32,32>* face_classifier_ceOg_U13;
    face_classifier_cfYi<1,68,64,64,64>* face_classifier_cfYi_U14;
    face_classifier_cg8j<1,26,22,64,64>* face_classifier_cg8j_U15;
    face_classifier_chbi<1,1,13,13,13,13>* face_classifier_chbi_U16;
    sc_signal< sc_lv<99> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > i_4_reg_477;
    sc_signal< sc_lv<2> > i_7_reg_497;
    sc_signal< sc_lv<1> > j_1_reg_509;
    sc_signal< sc_lv<3> > i_8_reg_520;
    sc_signal< sc_lv<2> > i_9_reg_531;
    sc_signal< sc_lv<3> > j3_reg_555;
    sc_signal< sc_lv<32> > tmp_22_reg_621;
    sc_signal< sc_lv<64> > k_reg_633;
    sc_signal< sc_lv<64> > i_21_fu_685_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > i_23_fu_722_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond7_fu_716_p2;
    sc_signal< sc_lv<64> > Ar_shape_load_reg_1174;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<20> > tmp_28_fu_749_p1;
    sc_signal< sc_lv<20> > tmp_28_reg_1180;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_lv<64> > grp_fu_753_p2;
    sc_signal< sc_lv<64> > free_axesA_reg_1195;
    sc_signal< sc_logic > ap_CS_fsm_state71;
    sc_signal< sc_lv<64> > grp_fu_758_p2;
    sc_signal< sc_lv<64> > free_axesB_reg_1200;
    sc_signal< sc_lv<20> > tmp_29_fu_764_p1;
    sc_signal< sc_lv<20> > tmp_29_reg_1206;
    sc_signal< sc_lv<13> > tmp_30_fu_768_p1;
    sc_signal< sc_lv<13> > tmp_30_reg_1211;
    sc_signal< sc_lv<64> > i_20_fu_775_p2;
    sc_signal< sc_lv<64> > i_20_reg_1216;
    sc_signal< sc_lv<3> > i_20_cast_fu_780_p2;
    sc_signal< sc_lv<3> > i_20_cast_reg_1221;
    sc_signal< sc_lv<64> > i_4_cast_fu_786_p1;
    sc_signal< sc_lv<64> > i_4_cast_reg_1226;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state72_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state73_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond8_fu_791_p2;
    sc_signal< sc_lv<1> > exitcond8_reg_1231;
    sc_signal< sc_lv<3> > i_22_fu_796_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<3> > i_24_fu_812_p2;
    sc_signal< sc_logic > ap_CS_fsm_state75;
    sc_signal< sc_lv<1> > tmp_s_fu_807_p2;
    sc_signal< sc_lv<1> > exitcond1_fu_818_p2;
    sc_signal< sc_lv<1> > exitcond1_reg_1253;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< bool > ap_block_state77_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state78_pp2_stage0_iter1;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<2> > i_25_fu_829_p2;
    sc_signal< sc_lv<2> > i_25_reg_1262;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<1> > j_fu_835_p2;
    sc_signal< sc_lv<64> > i_8_cast_fu_846_p1;
    sc_signal< sc_lv<64> > i_8_cast_reg_1272;
    sc_signal< sc_logic > ap_CS_fsm_pp3_stage0;
    sc_signal< bool > ap_block_state80_pp3_stage0_iter0;
    sc_signal< bool > ap_block_state81_pp3_stage0_iter1;
    sc_signal< bool > ap_block_state82_pp3_stage0_iter2;
    sc_signal< bool > ap_block_pp3_stage0_11001;
    sc_signal< sc_lv<64> > i_8_cast_reg_1272_pp3_iter1_reg;
    sc_signal< sc_lv<1> > exitcond2_fu_851_p2;
    sc_signal< sc_lv<1> > exitcond2_reg_1277;
    sc_signal< sc_lv<1> > exitcond2_reg_1277_pp3_iter1_reg;
    sc_signal< sc_lv<3> > i_26_fu_856_p2;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter0;
    sc_signal< sc_lv<1> > exitcond3_fu_862_p2;
    sc_signal< sc_lv<1> > exitcond3_reg_1296;
    sc_signal< sc_logic > ap_CS_fsm_pp4_stage0;
    sc_signal< bool > ap_block_state84_pp4_stage0_iter0;
    sc_signal< bool > ap_block_state85_pp4_stage0_iter1;
    sc_signal< bool > ap_block_state86_pp4_stage0_iter2;
    sc_signal< bool > ap_block_pp4_stage0_11001;
    sc_signal< sc_lv<1> > exitcond3_reg_1296_pp4_iter1_reg;
    sc_signal< sc_lv<2> > i_27_fu_868_p2;
    sc_signal< sc_logic > ap_enable_reg_pp4_iter0;
    sc_signal< sc_lv<64> > i_9_cast6_fu_874_p1;
    sc_signal< sc_lv<64> > i_9_cast6_reg_1305;
    sc_signal< sc_lv<64> > i_9_cast6_reg_1305_pp4_iter1_reg;
    sc_signal< sc_lv<64> > i_28_fu_889_p2;
    sc_signal< sc_lv<64> > i_28_reg_1323;
    sc_signal< sc_logic > ap_CS_fsm_state88;
    sc_signal< sc_lv<20> > tmp_32_fu_895_p1;
    sc_signal< sc_lv<20> > tmp_32_reg_1328;
    sc_signal< sc_lv<1> > exitcond5_fu_884_p2;
    sc_signal< sc_lv<64> > j3_cast_fu_898_p1;
    sc_signal< sc_lv<64> > j3_cast_reg_1334;
    sc_signal< sc_logic > ap_CS_fsm_pp5_stage0;
    sc_signal< bool > ap_block_state90_pp5_stage0_iter0;
    sc_signal< bool > ap_block_state91_pp5_stage0_iter1;
    sc_signal< bool > ap_block_state92_pp5_stage0_iter2;
    sc_signal< bool > ap_block_pp5_stage0_11001;
    sc_signal< sc_lv<64> > j3_cast_reg_1334_pp5_iter1_reg;
    sc_signal< sc_lv<1> > exitcond10_fu_903_p2;
    sc_signal< sc_lv<1> > exitcond10_reg_1339;
    sc_signal< sc_lv<1> > exitcond10_reg_1339_pp5_iter1_reg;
    sc_signal< sc_lv<3> > j_5_fu_908_p2;
    sc_signal< sc_logic > ap_enable_reg_pp5_iter0;
    sc_signal< sc_logic > ap_CS_fsm_state93;
    sc_signal< sc_lv<19> > i_29_fu_920_p2;
    sc_signal< sc_lv<19> > i_29_reg_1366;
    sc_signal< sc_logic > ap_CS_fsm_state95;
    sc_signal< sc_lv<64> > i_11_cast5_fu_926_p1;
    sc_signal< sc_lv<64> > i_11_cast5_reg_1371;
    sc_signal< sc_lv<1> > exitcond4_fu_914_p2;
    sc_signal< sc_lv<19> > B_array_addr_reg_1376;
    sc_signal< sc_lv<128> > bound_fu_938_p2;
    sc_signal< sc_lv<128> > bound_reg_1381;
    sc_signal< sc_lv<2> > j_6_fu_950_p2;
    sc_signal< sc_lv<2> > j_6_reg_1389;
    sc_signal< sc_logic > ap_CS_fsm_state97;
    sc_signal< sc_lv<64> > j4_cast4_fu_956_p1;
    sc_signal< sc_lv<64> > j4_cast4_reg_1394;
    sc_signal< sc_lv<1> > exitcond9_fu_944_p2;
    sc_signal< sc_lv<1> > ifzero_fu_961_p2;
    sc_signal< sc_lv<1> > ifzero_reg_1404;
    sc_signal< sc_logic > ap_CS_fsm_state98;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_986_p2;
    sc_signal< sc_logic > ap_CS_fsm_state102;
    sc_signal< sc_lv<128> > indvar_flatten_next_fu_991_p2;
    sc_signal< sc_lv<128> > indvar_flatten_next_reg_1417;
    sc_signal< sc_lv<64> > j9_mid2_fu_1002_p3;
    sc_signal< sc_lv<64> > j9_mid2_reg_1422;
    sc_signal< sc_lv<64> > tmp_21_mid2_v_v_fu_1016_p3;
    sc_signal< sc_lv<64> > tmp_21_mid2_v_v_reg_1427;
    sc_signal< sc_lv<20> > tmp_22_mid2_fu_1032_p2;
    sc_signal< sc_lv<20> > tmp_22_mid2_reg_1432;
    sc_signal< sc_lv<20> > tmp_35_fu_1037_p1;
    sc_signal< sc_lv<20> > tmp_35_reg_1437;
    sc_signal< sc_lv<12> > C_array_addr_reg_1442;
    sc_signal< sc_lv<1> > exitcond_fu_1049_p2;
    sc_signal< sc_lv<1> > exitcond_reg_1447;
    sc_signal< sc_logic > ap_CS_fsm_pp6_stage0;
    sc_signal< bool > ap_block_state103_pp6_stage0_iter0;
    sc_signal< bool > ap_block_state107_pp6_stage0_iter1;
    sc_signal< bool > ap_block_pp6_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_reg_1447_pp6_iter1_reg;
    sc_signal< sc_lv<64> > k_2_fu_1054_p2;
    sc_signal< sc_lv<64> > k_2_reg_1451;
    sc_signal< sc_logic > ap_enable_reg_pp6_iter0;
    sc_signal< sc_lv<32> > fwork_load_reg_1466;
    sc_signal< sc_logic > ap_CS_fsm_pp6_stage1;
    sc_signal< bool > ap_block_state104_pp6_stage1_iter0;
    sc_signal< bool > ap_block_state108_pp6_stage1_iter1;
    sc_signal< bool > ap_block_pp6_stage1_11001;
    sc_signal< sc_lv<32> > fwork_load_2_reg_1471;
    sc_signal< sc_lv<32> > grp_fu_671_p2;
    sc_signal< sc_lv<32> > tmp_25_reg_1476;
    sc_signal< sc_logic > ap_CS_fsm_pp6_stage3;
    sc_signal< bool > ap_block_state106_pp6_stage3_iter0;
    sc_signal< bool > ap_block_state110_pp6_stage3_iter1;
    sc_signal< bool > ap_block_pp6_stage3_11001;
    sc_signal< sc_lv<32> > grp_fu_665_p2;
    sc_signal< sc_logic > ap_enable_reg_pp6_iter1;
    sc_signal< sc_lv<64> > j_7_fu_1094_p2;
    sc_signal< sc_logic > ap_CS_fsm_state111;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state72;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_CS_fsm_state76;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state77;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< sc_logic > ap_CS_fsm_state79;
    sc_signal< bool > ap_block_pp3_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp3_exit_iter0_state80;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter2;
    sc_signal< sc_logic > ap_CS_fsm_state83;
    sc_signal< bool > ap_block_pp4_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp4_exit_iter0_state84;
    sc_signal< sc_logic > ap_enable_reg_pp4_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp4_iter2;
    sc_signal< sc_logic > ap_CS_fsm_state89;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_644_ap_idle;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_644_ap_ready;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_644_ap_done;
    sc_signal< bool > ap_block_pp5_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp5_exit_iter0_state90;
    sc_signal< sc_logic > ap_enable_reg_pp5_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp5_iter2;
    sc_signal< bool > ap_block_pp6_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp6_exit_iter0_state103;
    sc_signal< bool > ap_block_pp6_stage3_subdone;
    sc_signal< sc_lv<3> > permA_address0;
    sc_signal< sc_logic > permA_ce0;
    sc_signal< sc_logic > permA_we0;
    sc_signal< sc_lv<64> > permA_d0;
    sc_signal< sc_lv<64> > permA_q0;
    sc_signal< sc_lv<3> > permB_address0;
    sc_signal< sc_logic > permB_ce0;
    sc_signal< sc_logic > permB_we0;
    sc_signal< sc_lv<2> > permB_d0;
    sc_signal< sc_lv<2> > permB_q0;
    sc_signal< sc_lv<3> > freeA_address0;
    sc_signal< sc_logic > freeA_ce0;
    sc_signal< sc_logic > freeA_we0;
    sc_signal< sc_lv<64> > freeA_q0;
    sc_signal< sc_lv<3> > freeB_address0;
    sc_signal< sc_logic > freeB_ce0;
    sc_signal< sc_logic > freeB_we0;
    sc_signal< sc_lv<2> > freeB_q0;
    sc_signal< sc_lv<3> > newshpA_address0;
    sc_signal< sc_logic > newshpA_ce0;
    sc_signal< sc_logic > newshpA_we0;
    sc_signal< sc_lv<64> > newshpA_q0;
    sc_signal< sc_lv<3> > newshpB_address0;
    sc_signal< sc_logic > newshpB_ce0;
    sc_signal< sc_logic > newshpB_we0;
    sc_signal< sc_lv<64> > newshpB_q0;
    sc_signal< sc_lv<3> > Asub_address0;
    sc_signal< sc_logic > Asub_ce0;
    sc_signal< sc_logic > Asub_we0;
    sc_signal< sc_lv<64> > Asub_d0;
    sc_signal< sc_lv<64> > Asub_q0;
    sc_signal< sc_lv<3> > Bsub_address0;
    sc_signal< sc_logic > Bsub_ce0;
    sc_signal< sc_logic > Bsub_we0;
    sc_signal< sc_lv<64> > Bsub_d0;
    sc_signal< sc_lv<64> > Bsub_q0;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_644_ap_start;
    sc_signal< sc_lv<64> > grp_k2c_idx2sub_fu_644_idx;
    sc_signal< sc_lv<3> > grp_k2c_idx2sub_fu_644_sub_address0;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_644_sub_ce0;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_644_sub_we0;
    sc_signal< sc_lv<64> > grp_k2c_idx2sub_fu_644_sub_d0;
    sc_signal< sc_lv<3> > grp_k2c_idx2sub_fu_644_shape_address0;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_644_shape_ce0;
    sc_signal< sc_lv<64> > grp_k2c_idx2sub_fu_644_shape_q0;
    sc_signal< sc_lv<64> > grp_k2c_idx2sub_fu_644_ndim;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_656_ap_start;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_656_ap_done;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_656_ap_idle;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_656_ap_ready;
    sc_signal< sc_lv<3> > grp_k2c_sub2idx_fu_656_sub_address0;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_656_sub_ce0;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_656_sub_q0;
    sc_signal< sc_lv<3> > grp_k2c_sub2idx_fu_656_shape_address0;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_656_shape_ce0;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_656_shape_q0;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_656_ndim;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_656_ap_return;
    sc_signal< sc_lv<64> > i_reg_453;
    sc_signal< sc_lv<1> > exitcond6_fu_680_p2;
    sc_signal< sc_lv<2> > i_1_reg_465;
    sc_signal< sc_lv<3> > i_5_reg_488;
    sc_signal< sc_logic > ap_CS_fsm_state74;
    sc_signal< sc_lv<2> > ap_phi_mux_i_7_phi_fu_501_p4;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_lv<64> > i_10_reg_542;
    sc_signal< sc_logic > ap_CS_fsm_state94;
    sc_signal< sc_logic > ap_CS_fsm_state87;
    sc_signal< sc_lv<19> > i_11_reg_566;
    sc_signal< sc_lv<2> > j4_reg_577;
    sc_signal< sc_logic > ap_CS_fsm_state96;
    sc_signal< sc_logic > ap_CS_fsm_state101;
    sc_signal< bool > ap_block_state101_on_subcall_done;
    sc_signal< sc_lv<128> > indvar_flatten_reg_588;
    sc_signal< sc_lv<64> > i_s_reg_599;
    sc_signal< sc_lv<64> > j9_reg_610;
    sc_signal< sc_lv<64> > ap_phi_mux_k_phi_fu_637_p4;
    sc_signal< bool > ap_block_pp6_stage0;
    sc_signal< sc_logic > grp_k2c_idx2sub_fu_644_ap_start_reg;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_656_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state100;
    sc_signal< sc_lv<1> > tmp_12_fu_691_p2;
    sc_signal< sc_lv<1> > tmp_fu_728_p2;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > i_5_cast_fu_802_p1;
    sc_signal< sc_lv<64> > j_1_cast_fu_824_p1;
    sc_signal< sc_lv<64> > i_7_cast7_fu_841_p1;
    sc_signal< bool > ap_block_pp3_stage0;
    sc_signal< bool > ap_block_pp4_stage0;
    sc_signal< sc_lv<64> > extLd_fu_879_p1;
    sc_signal< bool > ap_block_pp5_stage0;
    sc_signal< sc_lv<64> > extLd1_fu_967_p1;
    sc_signal< sc_logic > ap_CS_fsm_state99;
    sc_signal< sc_lv<64> > sum9_cast_fu_981_p1;
    sc_signal< sc_lv<64> > tmp_25_cast_fu_1045_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_1069_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_1089_p1;
    sc_signal< sc_lv<64> > count_fu_94;
    sc_signal< sc_lv<64> > count_4_fu_700_p2;
    sc_signal< sc_lv<64> > count_2_fu_130;
    sc_signal< sc_lv<64> > count_5_fu_738_p2;
    sc_signal< bool > ap_block_pp6_stage3;
    sc_signal< sc_logic > ap_CS_fsm_pp6_stage2;
    sc_signal< bool > ap_block_pp6_stage2;
    sc_signal< sc_lv<22> > grp_fu_758_p0;
    sc_signal< sc_lv<3> > tmp_31_fu_772_p1;
    sc_signal< sc_lv<64> > bound_fu_938_p0;
    sc_signal< sc_lv<64> > bound_fu_938_p1;
    sc_signal< sc_lv<20> > tmp_37_fu_972_p1;
    sc_signal< sc_lv<20> > sum9_fu_976_p2;
    sc_signal< sc_lv<1> > tmp_19_fu_997_p2;
    sc_signal< sc_lv<64> > i_30_fu_1010_p2;
    sc_signal< sc_lv<20> > tmp_34_fu_1028_p1;
    sc_signal< sc_lv<13> > grp_fu_1099_p3;
    sc_signal< sc_lv<20> > tmp_38_fu_1060_p1;
    sc_signal< sc_lv<20> > sum_fu_1064_p2;
    sc_signal< sc_lv<20> > tmp_24_fu_1074_p2;
    sc_signal< sc_lv<20> > tmp1_fu_1079_p2;
    sc_signal< sc_lv<20> > sum2_fu_1084_p2;
    sc_signal< sc_lv<13> > grp_fu_1099_p0;
    sc_signal< sc_lv<13> > grp_fu_1099_p2;
    sc_signal< sc_logic > grp_fu_753_ap_start;
    sc_signal< sc_logic > grp_fu_753_ap_done;
    sc_signal< sc_logic > grp_fu_758_ap_start;
    sc_signal< sc_logic > grp_fu_758_ap_done;
    sc_signal< sc_lv<99> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp6_stage1_subdone;
    sc_signal< bool > ap_block_state105_pp6_stage2_iter0;
    sc_signal< bool > ap_block_state109_pp6_stage2_iter1;
    sc_signal< bool > ap_block_pp6_stage2_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    sc_signal< sc_logic > ap_idle_pp3;
    sc_signal< sc_logic > ap_enable_pp3;
    sc_signal< sc_logic > ap_idle_pp4;
    sc_signal< sc_logic > ap_enable_pp4;
    sc_signal< sc_logic > ap_idle_pp5;
    sc_signal< sc_logic > ap_enable_pp5;
    sc_signal< sc_logic > ap_idle_pp6;
    sc_signal< sc_logic > ap_enable_pp6;
    sc_signal< sc_lv<128> > bound_fu_938_p00;
    sc_signal< sc_lv<128> > bound_fu_938_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<99> ap_ST_fsm_state1;
    static const sc_lv<99> ap_ST_fsm_state2;
    static const sc_lv<99> ap_ST_fsm_state3;
    static const sc_lv<99> ap_ST_fsm_state4;
    static const sc_lv<99> ap_ST_fsm_state5;
    static const sc_lv<99> ap_ST_fsm_state6;
    static const sc_lv<99> ap_ST_fsm_state7;
    static const sc_lv<99> ap_ST_fsm_state8;
    static const sc_lv<99> ap_ST_fsm_state9;
    static const sc_lv<99> ap_ST_fsm_state10;
    static const sc_lv<99> ap_ST_fsm_state11;
    static const sc_lv<99> ap_ST_fsm_state12;
    static const sc_lv<99> ap_ST_fsm_state13;
    static const sc_lv<99> ap_ST_fsm_state14;
    static const sc_lv<99> ap_ST_fsm_state15;
    static const sc_lv<99> ap_ST_fsm_state16;
    static const sc_lv<99> ap_ST_fsm_state17;
    static const sc_lv<99> ap_ST_fsm_state18;
    static const sc_lv<99> ap_ST_fsm_state19;
    static const sc_lv<99> ap_ST_fsm_state20;
    static const sc_lv<99> ap_ST_fsm_state21;
    static const sc_lv<99> ap_ST_fsm_state22;
    static const sc_lv<99> ap_ST_fsm_state23;
    static const sc_lv<99> ap_ST_fsm_state24;
    static const sc_lv<99> ap_ST_fsm_state25;
    static const sc_lv<99> ap_ST_fsm_state26;
    static const sc_lv<99> ap_ST_fsm_state27;
    static const sc_lv<99> ap_ST_fsm_state28;
    static const sc_lv<99> ap_ST_fsm_state29;
    static const sc_lv<99> ap_ST_fsm_state30;
    static const sc_lv<99> ap_ST_fsm_state31;
    static const sc_lv<99> ap_ST_fsm_state32;
    static const sc_lv<99> ap_ST_fsm_state33;
    static const sc_lv<99> ap_ST_fsm_state34;
    static const sc_lv<99> ap_ST_fsm_state35;
    static const sc_lv<99> ap_ST_fsm_state36;
    static const sc_lv<99> ap_ST_fsm_state37;
    static const sc_lv<99> ap_ST_fsm_state38;
    static const sc_lv<99> ap_ST_fsm_state39;
    static const sc_lv<99> ap_ST_fsm_state40;
    static const sc_lv<99> ap_ST_fsm_state41;
    static const sc_lv<99> ap_ST_fsm_state42;
    static const sc_lv<99> ap_ST_fsm_state43;
    static const sc_lv<99> ap_ST_fsm_state44;
    static const sc_lv<99> ap_ST_fsm_state45;
    static const sc_lv<99> ap_ST_fsm_state46;
    static const sc_lv<99> ap_ST_fsm_state47;
    static const sc_lv<99> ap_ST_fsm_state48;
    static const sc_lv<99> ap_ST_fsm_state49;
    static const sc_lv<99> ap_ST_fsm_state50;
    static const sc_lv<99> ap_ST_fsm_state51;
    static const sc_lv<99> ap_ST_fsm_state52;
    static const sc_lv<99> ap_ST_fsm_state53;
    static const sc_lv<99> ap_ST_fsm_state54;
    static const sc_lv<99> ap_ST_fsm_state55;
    static const sc_lv<99> ap_ST_fsm_state56;
    static const sc_lv<99> ap_ST_fsm_state57;
    static const sc_lv<99> ap_ST_fsm_state58;
    static const sc_lv<99> ap_ST_fsm_state59;
    static const sc_lv<99> ap_ST_fsm_state60;
    static const sc_lv<99> ap_ST_fsm_state61;
    static const sc_lv<99> ap_ST_fsm_state62;
    static const sc_lv<99> ap_ST_fsm_state63;
    static const sc_lv<99> ap_ST_fsm_state64;
    static const sc_lv<99> ap_ST_fsm_state65;
    static const sc_lv<99> ap_ST_fsm_state66;
    static const sc_lv<99> ap_ST_fsm_state67;
    static const sc_lv<99> ap_ST_fsm_state68;
    static const sc_lv<99> ap_ST_fsm_state69;
    static const sc_lv<99> ap_ST_fsm_state70;
    static const sc_lv<99> ap_ST_fsm_state71;
    static const sc_lv<99> ap_ST_fsm_pp0_stage0;
    static const sc_lv<99> ap_ST_fsm_state74;
    static const sc_lv<99> ap_ST_fsm_state75;
    static const sc_lv<99> ap_ST_fsm_state76;
    static const sc_lv<99> ap_ST_fsm_pp2_stage0;
    static const sc_lv<99> ap_ST_fsm_state79;
    static const sc_lv<99> ap_ST_fsm_pp3_stage0;
    static const sc_lv<99> ap_ST_fsm_state83;
    static const sc_lv<99> ap_ST_fsm_pp4_stage0;
    static const sc_lv<99> ap_ST_fsm_state87;
    static const sc_lv<99> ap_ST_fsm_state88;
    static const sc_lv<99> ap_ST_fsm_state89;
    static const sc_lv<99> ap_ST_fsm_pp5_stage0;
    static const sc_lv<99> ap_ST_fsm_state93;
    static const sc_lv<99> ap_ST_fsm_state94;
    static const sc_lv<99> ap_ST_fsm_state95;
    static const sc_lv<99> ap_ST_fsm_state96;
    static const sc_lv<99> ap_ST_fsm_state97;
    static const sc_lv<99> ap_ST_fsm_state98;
    static const sc_lv<99> ap_ST_fsm_state99;
    static const sc_lv<99> ap_ST_fsm_state100;
    static const sc_lv<99> ap_ST_fsm_state101;
    static const sc_lv<99> ap_ST_fsm_state102;
    static const sc_lv<99> ap_ST_fsm_pp6_stage0;
    static const sc_lv<99> ap_ST_fsm_pp6_stage1;
    static const sc_lv<99> ap_ST_fsm_pp6_stage2;
    static const sc_lv<99> ap_ST_fsm_pp6_stage3;
    static const sc_lv<99> ap_ST_fsm_state111;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_46;
    static const sc_lv<32> ap_const_lv32_47;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_49;
    static const sc_lv<32> ap_const_lv32_4B;
    static const sc_lv<32> ap_const_lv32_4D;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<32> ap_const_lv32_51;
    static const sc_lv<32> ap_const_lv32_53;
    static const sc_lv<32> ap_const_lv32_54;
    static const sc_lv<32> ap_const_lv32_56;
    static const sc_lv<32> ap_const_lv32_58;
    static const sc_lv<32> ap_const_lv32_59;
    static const sc_lv<32> ap_const_lv32_5D;
    static const sc_lv<32> ap_const_lv32_5E;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_61;
    static const sc_lv<32> ap_const_lv32_62;
    static const sc_lv<32> ap_const_lv32_4A;
    static const sc_lv<32> ap_const_lv32_4C;
    static const sc_lv<32> ap_const_lv32_4E;
    static const sc_lv<32> ap_const_lv32_52;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_48;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_55;
    static const sc_lv<32> ap_const_lv32_50;
    static const sc_lv<19> ap_const_lv19_0;
    static const sc_lv<32> ap_const_lv32_57;
    static const sc_lv<32> ap_const_lv32_5C;
    static const sc_lv<128> ap_const_lv128_lc_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<32> ap_const_lv32_5B;
    static const sc_lv<32> ap_const_lv32_5A;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<64> ap_const_lv64_40038;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<19> ap_const_lv19_40038;
    static const sc_lv<19> ap_const_lv19_1;
    static const sc_lv<128> ap_const_lv128_lc_2;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_Ar_array_address0();
    void thread_Ar_array_ce0();
    void thread_Ar_shape_address0();
    void thread_Ar_shape_ce0();
    void thread_Asub_address0();
    void thread_Asub_ce0();
    void thread_Asub_d0();
    void thread_Asub_we0();
    void thread_B_array_address0();
    void thread_B_array_ce0();
    void thread_B_shape_address0();
    void thread_B_shape_ce0();
    void thread_Bsub_address0();
    void thread_Bsub_ce0();
    void thread_Bsub_d0();
    void thread_Bsub_we0();
    void thread_C_array_address0();
    void thread_C_array_ce0();
    void thread_C_array_d0();
    void thread_C_array_we0();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_pp3_stage0();
    void thread_ap_CS_fsm_pp4_stage0();
    void thread_ap_CS_fsm_pp5_stage0();
    void thread_ap_CS_fsm_pp6_stage0();
    void thread_ap_CS_fsm_pp6_stage1();
    void thread_ap_CS_fsm_pp6_stage2();
    void thread_ap_CS_fsm_pp6_stage3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state100();
    void thread_ap_CS_fsm_state101();
    void thread_ap_CS_fsm_state102();
    void thread_ap_CS_fsm_state111();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state71();
    void thread_ap_CS_fsm_state74();
    void thread_ap_CS_fsm_state75();
    void thread_ap_CS_fsm_state76();
    void thread_ap_CS_fsm_state79();
    void thread_ap_CS_fsm_state83();
    void thread_ap_CS_fsm_state87();
    void thread_ap_CS_fsm_state88();
    void thread_ap_CS_fsm_state89();
    void thread_ap_CS_fsm_state93();
    void thread_ap_CS_fsm_state94();
    void thread_ap_CS_fsm_state95();
    void thread_ap_CS_fsm_state96();
    void thread_ap_CS_fsm_state97();
    void thread_ap_CS_fsm_state98();
    void thread_ap_CS_fsm_state99();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp2_stage0();
    void thread_ap_block_pp2_stage0_11001();
    void thread_ap_block_pp2_stage0_subdone();
    void thread_ap_block_pp3_stage0();
    void thread_ap_block_pp3_stage0_11001();
    void thread_ap_block_pp3_stage0_subdone();
    void thread_ap_block_pp4_stage0();
    void thread_ap_block_pp4_stage0_11001();
    void thread_ap_block_pp4_stage0_subdone();
    void thread_ap_block_pp5_stage0();
    void thread_ap_block_pp5_stage0_11001();
    void thread_ap_block_pp5_stage0_subdone();
    void thread_ap_block_pp6_stage0();
    void thread_ap_block_pp6_stage0_11001();
    void thread_ap_block_pp6_stage0_subdone();
    void thread_ap_block_pp6_stage1_11001();
    void thread_ap_block_pp6_stage1_subdone();
    void thread_ap_block_pp6_stage2();
    void thread_ap_block_pp6_stage2_subdone();
    void thread_ap_block_pp6_stage3();
    void thread_ap_block_pp6_stage3_11001();
    void thread_ap_block_pp6_stage3_subdone();
    void thread_ap_block_state101_on_subcall_done();
    void thread_ap_block_state103_pp6_stage0_iter0();
    void thread_ap_block_state104_pp6_stage1_iter0();
    void thread_ap_block_state105_pp6_stage2_iter0();
    void thread_ap_block_state106_pp6_stage3_iter0();
    void thread_ap_block_state107_pp6_stage0_iter1();
    void thread_ap_block_state108_pp6_stage1_iter1();
    void thread_ap_block_state109_pp6_stage2_iter1();
    void thread_ap_block_state110_pp6_stage3_iter1();
    void thread_ap_block_state72_pp0_stage0_iter0();
    void thread_ap_block_state73_pp0_stage0_iter1();
    void thread_ap_block_state77_pp2_stage0_iter0();
    void thread_ap_block_state78_pp2_stage0_iter1();
    void thread_ap_block_state80_pp3_stage0_iter0();
    void thread_ap_block_state81_pp3_stage0_iter1();
    void thread_ap_block_state82_pp3_stage0_iter2();
    void thread_ap_block_state84_pp4_stage0_iter0();
    void thread_ap_block_state85_pp4_stage0_iter1();
    void thread_ap_block_state86_pp4_stage0_iter2();
    void thread_ap_block_state90_pp5_stage0_iter0();
    void thread_ap_block_state91_pp5_stage0_iter1();
    void thread_ap_block_state92_pp5_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state72();
    void thread_ap_condition_pp2_exit_iter0_state77();
    void thread_ap_condition_pp3_exit_iter0_state80();
    void thread_ap_condition_pp4_exit_iter0_state84();
    void thread_ap_condition_pp5_exit_iter0_state90();
    void thread_ap_condition_pp6_exit_iter0_state103();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp2();
    void thread_ap_enable_pp3();
    void thread_ap_enable_pp4();
    void thread_ap_enable_pp5();
    void thread_ap_enable_pp6();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp2();
    void thread_ap_idle_pp3();
    void thread_ap_idle_pp4();
    void thread_ap_idle_pp5();
    void thread_ap_idle_pp6();
    void thread_ap_phi_mux_i_7_phi_fu_501_p4();
    void thread_ap_phi_mux_k_phi_fu_637_p4();
    void thread_ap_ready();
    void thread_bound_fu_938_p0();
    void thread_bound_fu_938_p00();
    void thread_bound_fu_938_p1();
    void thread_bound_fu_938_p10();
    void thread_bound_fu_938_p2();
    void thread_count_4_fu_700_p2();
    void thread_count_5_fu_738_p2();
    void thread_exitcond10_fu_903_p2();
    void thread_exitcond1_fu_818_p2();
    void thread_exitcond2_fu_851_p2();
    void thread_exitcond3_fu_862_p2();
    void thread_exitcond4_fu_914_p2();
    void thread_exitcond5_fu_884_p2();
    void thread_exitcond6_fu_680_p2();
    void thread_exitcond7_fu_716_p2();
    void thread_exitcond8_fu_791_p2();
    void thread_exitcond9_fu_944_p2();
    void thread_exitcond_flatten_fu_986_p2();
    void thread_exitcond_fu_1049_p2();
    void thread_extLd1_fu_967_p1();
    void thread_extLd_fu_879_p1();
    void thread_freeA_address0();
    void thread_freeA_ce0();
    void thread_freeA_we0();
    void thread_freeB_address0();
    void thread_freeB_ce0();
    void thread_freeB_we0();
    void thread_fwork_address0();
    void thread_fwork_address1();
    void thread_fwork_ce0();
    void thread_fwork_ce1();
    void thread_fwork_d0();
    void thread_fwork_we0();
    void thread_grp_fu_1099_p0();
    void thread_grp_fu_1099_p2();
    void thread_grp_fu_753_ap_start();
    void thread_grp_fu_758_ap_start();
    void thread_grp_fu_758_p0();
    void thread_grp_k2c_idx2sub_fu_644_ap_start();
    void thread_grp_k2c_idx2sub_fu_644_idx();
    void thread_grp_k2c_idx2sub_fu_644_ndim();
    void thread_grp_k2c_idx2sub_fu_644_shape_q0();
    void thread_grp_k2c_sub2idx_fu_656_ap_start();
    void thread_grp_k2c_sub2idx_fu_656_ndim();
    void thread_grp_k2c_sub2idx_fu_656_shape_q0();
    void thread_grp_k2c_sub2idx_fu_656_sub_q0();
    void thread_i_11_cast5_fu_926_p1();
    void thread_i_20_cast_fu_780_p2();
    void thread_i_20_fu_775_p2();
    void thread_i_21_fu_685_p2();
    void thread_i_22_fu_796_p2();
    void thread_i_23_fu_722_p2();
    void thread_i_24_fu_812_p2();
    void thread_i_25_fu_829_p2();
    void thread_i_26_fu_856_p2();
    void thread_i_27_fu_868_p2();
    void thread_i_28_fu_889_p2();
    void thread_i_29_fu_920_p2();
    void thread_i_30_fu_1010_p2();
    void thread_i_4_cast_fu_786_p1();
    void thread_i_5_cast_fu_802_p1();
    void thread_i_7_cast7_fu_841_p1();
    void thread_i_8_cast_fu_846_p1();
    void thread_i_9_cast6_fu_874_p1();
    void thread_ifzero_fu_961_p2();
    void thread_indvar_flatten_next_fu_991_p2();
    void thread_j3_cast_fu_898_p1();
    void thread_j4_cast4_fu_956_p1();
    void thread_j9_mid2_fu_1002_p3();
    void thread_j_1_cast_fu_824_p1();
    void thread_j_5_fu_908_p2();
    void thread_j_6_fu_950_p2();
    void thread_j_7_fu_1094_p2();
    void thread_j_fu_835_p2();
    void thread_k_2_fu_1054_p2();
    void thread_newshpA_address0();
    void thread_newshpA_ce0();
    void thread_newshpA_we0();
    void thread_newshpB_address0();
    void thread_newshpB_ce0();
    void thread_newshpB_we0();
    void thread_permA_address0();
    void thread_permA_ce0();
    void thread_permA_d0();
    void thread_permA_we0();
    void thread_permB_address0();
    void thread_permB_ce0();
    void thread_permB_d0();
    void thread_permB_we0();
    void thread_sum2_cast_fu_1089_p1();
    void thread_sum2_fu_1084_p2();
    void thread_sum9_cast_fu_981_p1();
    void thread_sum9_fu_976_p2();
    void thread_sum_cast_fu_1069_p1();
    void thread_sum_fu_1064_p2();
    void thread_tmp1_fu_1079_p2();
    void thread_tmp_12_fu_691_p2();
    void thread_tmp_19_fu_997_p2();
    void thread_tmp_21_mid2_v_v_fu_1016_p3();
    void thread_tmp_22_mid2_fu_1032_p2();
    void thread_tmp_24_fu_1074_p2();
    void thread_tmp_25_cast_fu_1045_p1();
    void thread_tmp_28_fu_749_p1();
    void thread_tmp_29_fu_764_p1();
    void thread_tmp_30_fu_768_p1();
    void thread_tmp_31_fu_772_p1();
    void thread_tmp_32_fu_895_p1();
    void thread_tmp_34_fu_1028_p1();
    void thread_tmp_35_fu_1037_p1();
    void thread_tmp_37_fu_972_p1();
    void thread_tmp_38_fu_1060_p1();
    void thread_tmp_fu_728_p2();
    void thread_tmp_s_fu_807_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
