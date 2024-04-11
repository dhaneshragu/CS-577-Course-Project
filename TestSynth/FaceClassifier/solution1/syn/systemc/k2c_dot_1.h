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

#include "k2c_sub2idx.h"
#include "face_classifier_cbkb.h"
#include "face_classifier_ccud.h"
#include "face_classifier_cdEe.h"
#include "face_classifier_ceOg.h"
#include "face_classifier_cfYi.h"
#include "face_classifier_cg8j.h"
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
    k2c_sub2idx* grp_k2c_sub2idx_fu_679;
    face_classifier_cbkb<1,1,32,32,32>* face_classifier_cbkb_U4;
    face_classifier_ccud<1,1,32,32,32>* face_classifier_ccud_U5;
    face_classifier_cdEe<1,68,64,64,64>* face_classifier_cdEe_U6;
    face_classifier_ceOg<1,26,22,64,64>* face_classifier_ceOg_U7;
    face_classifier_cfYi<1,68,64,64,64>* face_classifier_cfYi_U8;
    face_classifier_cdEe<1,68,64,64,64>* face_classifier_cdEe_U9;
    face_classifier_cfYi<1,68,64,64,64>* face_classifier_cfYi_U10;
    face_classifier_cdEe<1,68,64,64,64>* face_classifier_cdEe_U11;
    face_classifier_cg8j<1,1,13,13,13>* face_classifier_cg8j_U12;
    sc_signal< sc_lv<234> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_logic > ap_CS_fsm_state159;
    sc_signal< sc_lv<64> > i_18_fu_714_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > i_20_fu_751_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond7_fu_745_p2;
    sc_signal< sc_lv<64> > Ar_shape_load_reg_1235;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<20> > tmp_25_fu_778_p1;
    sc_signal< sc_lv<20> > tmp_25_reg_1241;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_lv<64> > grp_fu_782_p2;
    sc_signal< sc_lv<64> > free_axesA_reg_1251;
    sc_signal< sc_logic > ap_CS_fsm_state71;
    sc_signal< sc_lv<64> > grp_fu_787_p2;
    sc_signal< sc_lv<64> > free_axesB_reg_1256;
    sc_signal< sc_lv<20> > tmp_26_fu_793_p1;
    sc_signal< sc_lv<20> > tmp_26_reg_1261;
    sc_signal< sc_lv<13> > tmp_27_fu_797_p1;
    sc_signal< sc_lv<13> > tmp_27_reg_1266;
    sc_signal< sc_lv<64> > i_17_fu_804_p2;
    sc_signal< sc_lv<64> > i_17_reg_1271;
    sc_signal< sc_lv<3> > i_17_cast_fu_809_p2;
    sc_signal< sc_lv<3> > i_17_cast_reg_1276;
    sc_signal< sc_lv<64> > i_4_cast_fu_815_p1;
    sc_signal< sc_lv<64> > i_4_cast_reg_1281;
    sc_signal< sc_logic > ap_CS_fsm_state72;
    sc_signal< sc_lv<3> > i_19_fu_825_p2;
    sc_signal< sc_lv<3> > i_19_reg_1289;
    sc_signal< sc_lv<1> > exitcond8_fu_820_p2;
    sc_signal< sc_lv<3> > i_21_fu_841_p2;
    sc_signal< sc_logic > ap_CS_fsm_state74;
    sc_signal< sc_lv<1> > tmp_s_fu_836_p2;
    sc_signal< sc_lv<64> > i_7_cast7_fu_847_p1;
    sc_signal< sc_lv<64> > i_7_cast7_reg_1307;
    sc_signal< sc_logic > ap_CS_fsm_state75;
    sc_signal< sc_lv<1> > exitcond1_fu_851_p2;
    sc_signal< sc_lv<2> > i_22_fu_862_p2;
    sc_signal< sc_lv<2> > i_22_reg_1320;
    sc_signal< sc_lv<1> > j_fu_868_p2;
    sc_signal< sc_lv<1> > j_reg_1325;
    sc_signal< sc_lv<64> > i_8_cast_fu_874_p1;
    sc_signal< sc_lv<64> > i_8_cast_reg_1330;
    sc_signal< sc_logic > ap_CS_fsm_state77;
    sc_signal< sc_lv<3> > i_23_fu_884_p2;
    sc_signal< sc_lv<3> > i_23_reg_1338;
    sc_signal< sc_lv<1> > exitcond2_fu_879_p2;
    sc_signal< sc_logic > ap_CS_fsm_state78;
    sc_signal< sc_lv<64> > i_9_cast6_fu_890_p1;
    sc_signal< sc_lv<64> > i_9_cast6_reg_1353;
    sc_signal< sc_logic > ap_CS_fsm_state80;
    sc_signal< sc_lv<2> > i_24_fu_901_p2;
    sc_signal< sc_lv<2> > i_24_reg_1361;
    sc_signal< sc_lv<1> > exitcond3_fu_895_p2;
    sc_signal< sc_lv<32> > tmp_29_fu_907_p1;
    sc_signal< sc_lv<32> > tmp_29_reg_1371;
    sc_signal< sc_logic > ap_CS_fsm_state81;
    sc_signal< sc_lv<64> > i_27_fu_920_p2;
    sc_signal< sc_lv<64> > i_27_reg_1384;
    sc_signal< sc_logic > ap_CS_fsm_state83;
    sc_signal< sc_lv<20> > tmp_30_fu_926_p1;
    sc_signal< sc_lv<20> > tmp_30_reg_1389;
    sc_signal< sc_lv<1> > exitcond5_fu_915_p2;
    sc_signal< sc_lv<32> > i_25_fu_929_p2;
    sc_signal< sc_lv<32> > i_25_reg_1395;
    sc_signal< sc_logic > ap_CS_fsm_state84;
    sc_signal< sc_lv<64> > tmp_5_i_fu_943_p1;
    sc_signal< sc_lv<64> > tmp_5_i_reg_1403;
    sc_signal< sc_lv<1> > tmp_31_fu_935_p3;
    sc_signal< sc_logic > ap_CS_fsm_state85;
    sc_signal< sc_lv<64> > grp_fu_955_p2;
    sc_signal< sc_logic > ap_CS_fsm_state152;
    sc_signal< sc_lv<64> > j3_cast_fu_961_p1;
    sc_signal< sc_lv<64> > j3_cast_reg_1424;
    sc_signal< sc_logic > ap_CS_fsm_state153;
    sc_signal< sc_lv<3> > j_5_fu_971_p2;
    sc_signal< sc_lv<3> > j_5_reg_1432;
    sc_signal< sc_lv<1> > exitcond10_fu_966_p2;
    sc_signal< sc_logic > ap_CS_fsm_state154;
    sc_signal< sc_lv<64> > idx2_6_cast5_fu_977_p1;
    sc_signal< sc_lv<64> > idx2_6_cast5_reg_1452;
    sc_signal< sc_logic > ap_CS_fsm_state157;
    sc_signal< sc_lv<19> > i_29_fu_987_p2;
    sc_signal< sc_lv<19> > i_29_reg_1461;
    sc_signal< sc_lv<64> > tmp_5_i5_fu_1005_p1;
    sc_signal< sc_lv<64> > tmp_5_i5_reg_1469;
    sc_signal< sc_logic > ap_CS_fsm_state158;
    sc_signal< sc_lv<1> > tmp_34_fu_997_p3;
    sc_signal< sc_lv<2> > phitmp_fu_1010_p2;
    sc_signal< sc_lv<2> > phitmp_reg_1479;
    sc_signal< sc_lv<64> > grp_fu_1023_p2;
    sc_signal< sc_logic > ap_CS_fsm_state226;
    sc_signal< sc_lv<64> > j4_cast4_fu_1029_p1;
    sc_signal< sc_lv<64> > j4_cast4_reg_1489;
    sc_signal< sc_logic > ap_CS_fsm_state227;
    sc_signal< sc_lv<2> > j_6_fu_1040_p2;
    sc_signal< sc_lv<2> > j_6_reg_1497;
    sc_signal< sc_lv<1> > exitcond9_fu_1034_p2;
    sc_signal< sc_logic > ap_CS_fsm_state228;
    sc_signal< sc_lv<64> > i_28_fu_1078_p2;
    sc_signal< sc_lv<64> > i_28_reg_1520;
    sc_signal< sc_logic > ap_CS_fsm_state231;
    sc_signal< sc_lv<13> > tmp_15_fu_1163_p2;
    sc_signal< sc_lv<13> > tmp_15_reg_1525;
    sc_signal< sc_lv<1> > tmp_14_fu_1073_p2;
    sc_signal< sc_lv<20> > tmp_16_fu_1084_p2;
    sc_signal< sc_lv<20> > tmp_16_reg_1530;
    sc_signal< sc_lv<20> > tmp_35_fu_1089_p1;
    sc_signal< sc_lv<20> > tmp_35_reg_1535;
    sc_signal< sc_logic > ap_CS_fsm_state232;
    sc_signal< sc_lv<64> > j_7_fu_1102_p2;
    sc_signal< sc_lv<64> > j_7_reg_1543;
    sc_signal< sc_lv<12> > C_array_addr_reg_1548;
    sc_signal< sc_lv<1> > tmp_17_fu_1097_p2;
    sc_signal< sc_lv<64> > k_2_fu_1127_p2;
    sc_signal< sc_lv<64> > k_2_reg_1556;
    sc_signal< sc_logic > ap_CS_fsm_state233;
    sc_signal< sc_lv<1> > exitcond_fu_1122_p2;
    sc_signal< sc_lv<32> > tmp_21_fu_688_p2;
    sc_signal< sc_logic > ap_CS_fsm_state234;
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
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_679_ap_start;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_679_ap_done;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_679_ap_idle;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_679_ap_ready;
    sc_signal< sc_lv<3> > grp_k2c_sub2idx_fu_679_sub_address0;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_679_sub_ce0;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_679_sub_q0;
    sc_signal< sc_lv<3> > grp_k2c_sub2idx_fu_679_shape_address0;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_679_shape_ce0;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_679_shape_q0;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_679_ndim;
    sc_signal< sc_lv<64> > grp_k2c_sub2idx_fu_679_ap_return;
    sc_signal< sc_lv<64> > i_reg_458;
    sc_signal< sc_lv<1> > exitcond6_fu_709_p2;
    sc_signal< sc_lv<2> > i_1_reg_470;
    sc_signal< sc_lv<3> > i_4_reg_482;
    sc_signal< sc_logic > ap_CS_fsm_state73;
    sc_signal< sc_lv<3> > i_5_reg_493;
    sc_signal< sc_lv<2> > i_7_reg_502;
    sc_signal< sc_logic > ap_CS_fsm_state76;
    sc_signal< sc_lv<1> > j_1_reg_513;
    sc_signal< sc_lv<3> > i_8_reg_524;
    sc_signal< sc_logic > ap_CS_fsm_state79;
    sc_signal< sc_lv<2> > i_9_reg_535;
    sc_signal< sc_logic > ap_CS_fsm_state82;
    sc_signal< sc_lv<64> > idx2_5_reg_546;
    sc_signal< sc_logic > ap_CS_fsm_state156;
    sc_signal< sc_lv<64> > idx2_i_reg_559;
    sc_signal< sc_lv<32> > i_0_in_i_reg_570;
    sc_signal< sc_lv<3> > j3_reg_579;
    sc_signal< sc_logic > ap_CS_fsm_state155;
    sc_signal< sc_lv<19> > idx2_6_reg_590;
    sc_signal< sc_logic > ap_CS_fsm_state230;
    sc_signal< sc_lv<64> > idx2_i1_reg_601;
    sc_signal< sc_lv<1> > exitcond4_fu_981_p2;
    sc_signal< sc_lv<2> > i_26_reg_611;
    sc_signal< sc_lv<2> > j4_reg_622;
    sc_signal< sc_logic > ap_CS_fsm_state229;
    sc_signal< sc_lv<64> > i_s_reg_633;
    sc_signal< sc_lv<64> > j9_reg_644;
    sc_signal< sc_lv<32> > storemerge_reg_655;
    sc_signal< sc_lv<64> > k_reg_668;
    sc_signal< sc_logic > grp_k2c_sub2idx_fu_679_ap_start_reg;
    sc_signal< sc_lv<1> > tmp_13_fu_720_p2;
    sc_signal< sc_lv<1> > tmp_fu_757_p2;
    sc_signal< sc_lv<64> > i_5_cast_fu_831_p1;
    sc_signal< sc_lv<64> > j_1_cast1_fu_857_p1;
    sc_signal< sc_lv<64> > extLd_fu_910_p1;
    sc_signal< sc_lv<64> > extLd1_fu_1046_p1;
    sc_signal< sc_lv<64> > sum9_cast_fu_1060_p1;
    sc_signal< sc_lv<64> > tmp_18_cast_fu_1113_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_1138_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_1158_p1;
    sc_signal< sc_lv<64> > count_fu_70;
    sc_signal< sc_lv<64> > count_4_fu_729_p2;
    sc_signal< sc_lv<64> > count_2_fu_106;
    sc_signal< sc_lv<64> > count_5_fu_767_p2;
    sc_signal< sc_lv<64> > grp_fu_948_p2;
    sc_signal< sc_lv<64> > grp_fu_1016_p2;
    sc_signal< sc_lv<32> > tmp_20_fu_693_p2;
    sc_signal< sc_lv<22> > grp_fu_787_p0;
    sc_signal< sc_lv<3> > tmp_28_fu_801_p1;
    sc_signal< sc_lv<32> > i_26_cast_fu_993_p1;
    sc_signal< sc_lv<20> > tmp_37_fu_1051_p1;
    sc_signal< sc_lv<20> > sum9_fu_1055_p2;
    sc_signal< sc_lv<20> > tmp_32_fu_1065_p1;
    sc_signal< sc_lv<13> > tmp_36_fu_1093_p1;
    sc_signal< sc_lv<13> > tmp_18_fu_1108_p2;
    sc_signal< sc_lv<20> > tmp_38_fu_1118_p1;
    sc_signal< sc_lv<20> > sum_fu_1133_p2;
    sc_signal< sc_lv<20> > tmp_19_fu_1143_p2;
    sc_signal< sc_lv<20> > tmp1_fu_1148_p2;
    sc_signal< sc_lv<20> > sum2_fu_1153_p2;
    sc_signal< sc_lv<13> > tmp_15_fu_1163_p0;
    sc_signal< sc_logic > grp_fu_782_ap_start;
    sc_signal< sc_logic > grp_fu_782_ap_done;
    sc_signal< sc_logic > grp_fu_787_ap_start;
    sc_signal< sc_logic > grp_fu_787_ap_done;
    sc_signal< sc_logic > grp_fu_948_ap_start;
    sc_signal< sc_logic > grp_fu_948_ap_done;
    sc_signal< sc_logic > grp_fu_955_ap_start;
    sc_signal< sc_logic > grp_fu_955_ap_done;
    sc_signal< sc_logic > grp_fu_1016_ap_start;
    sc_signal< sc_logic > grp_fu_1016_ap_done;
    sc_signal< sc_logic > grp_fu_1023_ap_start;
    sc_signal< sc_logic > grp_fu_1023_ap_done;
    sc_signal< sc_lv<234> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<234> ap_ST_fsm_state1;
    static const sc_lv<234> ap_ST_fsm_state2;
    static const sc_lv<234> ap_ST_fsm_state3;
    static const sc_lv<234> ap_ST_fsm_state4;
    static const sc_lv<234> ap_ST_fsm_state5;
    static const sc_lv<234> ap_ST_fsm_state6;
    static const sc_lv<234> ap_ST_fsm_state7;
    static const sc_lv<234> ap_ST_fsm_state8;
    static const sc_lv<234> ap_ST_fsm_state9;
    static const sc_lv<234> ap_ST_fsm_state10;
    static const sc_lv<234> ap_ST_fsm_state11;
    static const sc_lv<234> ap_ST_fsm_state12;
    static const sc_lv<234> ap_ST_fsm_state13;
    static const sc_lv<234> ap_ST_fsm_state14;
    static const sc_lv<234> ap_ST_fsm_state15;
    static const sc_lv<234> ap_ST_fsm_state16;
    static const sc_lv<234> ap_ST_fsm_state17;
    static const sc_lv<234> ap_ST_fsm_state18;
    static const sc_lv<234> ap_ST_fsm_state19;
    static const sc_lv<234> ap_ST_fsm_state20;
    static const sc_lv<234> ap_ST_fsm_state21;
    static const sc_lv<234> ap_ST_fsm_state22;
    static const sc_lv<234> ap_ST_fsm_state23;
    static const sc_lv<234> ap_ST_fsm_state24;
    static const sc_lv<234> ap_ST_fsm_state25;
    static const sc_lv<234> ap_ST_fsm_state26;
    static const sc_lv<234> ap_ST_fsm_state27;
    static const sc_lv<234> ap_ST_fsm_state28;
    static const sc_lv<234> ap_ST_fsm_state29;
    static const sc_lv<234> ap_ST_fsm_state30;
    static const sc_lv<234> ap_ST_fsm_state31;
    static const sc_lv<234> ap_ST_fsm_state32;
    static const sc_lv<234> ap_ST_fsm_state33;
    static const sc_lv<234> ap_ST_fsm_state34;
    static const sc_lv<234> ap_ST_fsm_state35;
    static const sc_lv<234> ap_ST_fsm_state36;
    static const sc_lv<234> ap_ST_fsm_state37;
    static const sc_lv<234> ap_ST_fsm_state38;
    static const sc_lv<234> ap_ST_fsm_state39;
    static const sc_lv<234> ap_ST_fsm_state40;
    static const sc_lv<234> ap_ST_fsm_state41;
    static const sc_lv<234> ap_ST_fsm_state42;
    static const sc_lv<234> ap_ST_fsm_state43;
    static const sc_lv<234> ap_ST_fsm_state44;
    static const sc_lv<234> ap_ST_fsm_state45;
    static const sc_lv<234> ap_ST_fsm_state46;
    static const sc_lv<234> ap_ST_fsm_state47;
    static const sc_lv<234> ap_ST_fsm_state48;
    static const sc_lv<234> ap_ST_fsm_state49;
    static const sc_lv<234> ap_ST_fsm_state50;
    static const sc_lv<234> ap_ST_fsm_state51;
    static const sc_lv<234> ap_ST_fsm_state52;
    static const sc_lv<234> ap_ST_fsm_state53;
    static const sc_lv<234> ap_ST_fsm_state54;
    static const sc_lv<234> ap_ST_fsm_state55;
    static const sc_lv<234> ap_ST_fsm_state56;
    static const sc_lv<234> ap_ST_fsm_state57;
    static const sc_lv<234> ap_ST_fsm_state58;
    static const sc_lv<234> ap_ST_fsm_state59;
    static const sc_lv<234> ap_ST_fsm_state60;
    static const sc_lv<234> ap_ST_fsm_state61;
    static const sc_lv<234> ap_ST_fsm_state62;
    static const sc_lv<234> ap_ST_fsm_state63;
    static const sc_lv<234> ap_ST_fsm_state64;
    static const sc_lv<234> ap_ST_fsm_state65;
    static const sc_lv<234> ap_ST_fsm_state66;
    static const sc_lv<234> ap_ST_fsm_state67;
    static const sc_lv<234> ap_ST_fsm_state68;
    static const sc_lv<234> ap_ST_fsm_state69;
    static const sc_lv<234> ap_ST_fsm_state70;
    static const sc_lv<234> ap_ST_fsm_state71;
    static const sc_lv<234> ap_ST_fsm_state72;
    static const sc_lv<234> ap_ST_fsm_state73;
    static const sc_lv<234> ap_ST_fsm_state74;
    static const sc_lv<234> ap_ST_fsm_state75;
    static const sc_lv<234> ap_ST_fsm_state76;
    static const sc_lv<234> ap_ST_fsm_state77;
    static const sc_lv<234> ap_ST_fsm_state78;
    static const sc_lv<234> ap_ST_fsm_state79;
    static const sc_lv<234> ap_ST_fsm_state80;
    static const sc_lv<234> ap_ST_fsm_state81;
    static const sc_lv<234> ap_ST_fsm_state82;
    static const sc_lv<234> ap_ST_fsm_state83;
    static const sc_lv<234> ap_ST_fsm_state84;
    static const sc_lv<234> ap_ST_fsm_state85;
    static const sc_lv<234> ap_ST_fsm_state86;
    static const sc_lv<234> ap_ST_fsm_state87;
    static const sc_lv<234> ap_ST_fsm_state88;
    static const sc_lv<234> ap_ST_fsm_state89;
    static const sc_lv<234> ap_ST_fsm_state90;
    static const sc_lv<234> ap_ST_fsm_state91;
    static const sc_lv<234> ap_ST_fsm_state92;
    static const sc_lv<234> ap_ST_fsm_state93;
    static const sc_lv<234> ap_ST_fsm_state94;
    static const sc_lv<234> ap_ST_fsm_state95;
    static const sc_lv<234> ap_ST_fsm_state96;
    static const sc_lv<234> ap_ST_fsm_state97;
    static const sc_lv<234> ap_ST_fsm_state98;
    static const sc_lv<234> ap_ST_fsm_state99;
    static const sc_lv<234> ap_ST_fsm_state100;
    static const sc_lv<234> ap_ST_fsm_state101;
    static const sc_lv<234> ap_ST_fsm_state102;
    static const sc_lv<234> ap_ST_fsm_state103;
    static const sc_lv<234> ap_ST_fsm_state104;
    static const sc_lv<234> ap_ST_fsm_state105;
    static const sc_lv<234> ap_ST_fsm_state106;
    static const sc_lv<234> ap_ST_fsm_state107;
    static const sc_lv<234> ap_ST_fsm_state108;
    static const sc_lv<234> ap_ST_fsm_state109;
    static const sc_lv<234> ap_ST_fsm_state110;
    static const sc_lv<234> ap_ST_fsm_state111;
    static const sc_lv<234> ap_ST_fsm_state112;
    static const sc_lv<234> ap_ST_fsm_state113;
    static const sc_lv<234> ap_ST_fsm_state114;
    static const sc_lv<234> ap_ST_fsm_state115;
    static const sc_lv<234> ap_ST_fsm_state116;
    static const sc_lv<234> ap_ST_fsm_state117;
    static const sc_lv<234> ap_ST_fsm_state118;
    static const sc_lv<234> ap_ST_fsm_state119;
    static const sc_lv<234> ap_ST_fsm_state120;
    static const sc_lv<234> ap_ST_fsm_state121;
    static const sc_lv<234> ap_ST_fsm_state122;
    static const sc_lv<234> ap_ST_fsm_state123;
    static const sc_lv<234> ap_ST_fsm_state124;
    static const sc_lv<234> ap_ST_fsm_state125;
    static const sc_lv<234> ap_ST_fsm_state126;
    static const sc_lv<234> ap_ST_fsm_state127;
    static const sc_lv<234> ap_ST_fsm_state128;
    static const sc_lv<234> ap_ST_fsm_state129;
    static const sc_lv<234> ap_ST_fsm_state130;
    static const sc_lv<234> ap_ST_fsm_state131;
    static const sc_lv<234> ap_ST_fsm_state132;
    static const sc_lv<234> ap_ST_fsm_state133;
    static const sc_lv<234> ap_ST_fsm_state134;
    static const sc_lv<234> ap_ST_fsm_state135;
    static const sc_lv<234> ap_ST_fsm_state136;
    static const sc_lv<234> ap_ST_fsm_state137;
    static const sc_lv<234> ap_ST_fsm_state138;
    static const sc_lv<234> ap_ST_fsm_state139;
    static const sc_lv<234> ap_ST_fsm_state140;
    static const sc_lv<234> ap_ST_fsm_state141;
    static const sc_lv<234> ap_ST_fsm_state142;
    static const sc_lv<234> ap_ST_fsm_state143;
    static const sc_lv<234> ap_ST_fsm_state144;
    static const sc_lv<234> ap_ST_fsm_state145;
    static const sc_lv<234> ap_ST_fsm_state146;
    static const sc_lv<234> ap_ST_fsm_state147;
    static const sc_lv<234> ap_ST_fsm_state148;
    static const sc_lv<234> ap_ST_fsm_state149;
    static const sc_lv<234> ap_ST_fsm_state150;
    static const sc_lv<234> ap_ST_fsm_state151;
    static const sc_lv<234> ap_ST_fsm_state152;
    static const sc_lv<234> ap_ST_fsm_state153;
    static const sc_lv<234> ap_ST_fsm_state154;
    static const sc_lv<234> ap_ST_fsm_state155;
    static const sc_lv<234> ap_ST_fsm_state156;
    static const sc_lv<234> ap_ST_fsm_state157;
    static const sc_lv<234> ap_ST_fsm_state158;
    static const sc_lv<234> ap_ST_fsm_state159;
    static const sc_lv<234> ap_ST_fsm_state160;
    static const sc_lv<234> ap_ST_fsm_state161;
    static const sc_lv<234> ap_ST_fsm_state162;
    static const sc_lv<234> ap_ST_fsm_state163;
    static const sc_lv<234> ap_ST_fsm_state164;
    static const sc_lv<234> ap_ST_fsm_state165;
    static const sc_lv<234> ap_ST_fsm_state166;
    static const sc_lv<234> ap_ST_fsm_state167;
    static const sc_lv<234> ap_ST_fsm_state168;
    static const sc_lv<234> ap_ST_fsm_state169;
    static const sc_lv<234> ap_ST_fsm_state170;
    static const sc_lv<234> ap_ST_fsm_state171;
    static const sc_lv<234> ap_ST_fsm_state172;
    static const sc_lv<234> ap_ST_fsm_state173;
    static const sc_lv<234> ap_ST_fsm_state174;
    static const sc_lv<234> ap_ST_fsm_state175;
    static const sc_lv<234> ap_ST_fsm_state176;
    static const sc_lv<234> ap_ST_fsm_state177;
    static const sc_lv<234> ap_ST_fsm_state178;
    static const sc_lv<234> ap_ST_fsm_state179;
    static const sc_lv<234> ap_ST_fsm_state180;
    static const sc_lv<234> ap_ST_fsm_state181;
    static const sc_lv<234> ap_ST_fsm_state182;
    static const sc_lv<234> ap_ST_fsm_state183;
    static const sc_lv<234> ap_ST_fsm_state184;
    static const sc_lv<234> ap_ST_fsm_state185;
    static const sc_lv<234> ap_ST_fsm_state186;
    static const sc_lv<234> ap_ST_fsm_state187;
    static const sc_lv<234> ap_ST_fsm_state188;
    static const sc_lv<234> ap_ST_fsm_state189;
    static const sc_lv<234> ap_ST_fsm_state190;
    static const sc_lv<234> ap_ST_fsm_state191;
    static const sc_lv<234> ap_ST_fsm_state192;
    static const sc_lv<234> ap_ST_fsm_state193;
    static const sc_lv<234> ap_ST_fsm_state194;
    static const sc_lv<234> ap_ST_fsm_state195;
    static const sc_lv<234> ap_ST_fsm_state196;
    static const sc_lv<234> ap_ST_fsm_state197;
    static const sc_lv<234> ap_ST_fsm_state198;
    static const sc_lv<234> ap_ST_fsm_state199;
    static const sc_lv<234> ap_ST_fsm_state200;
    static const sc_lv<234> ap_ST_fsm_state201;
    static const sc_lv<234> ap_ST_fsm_state202;
    static const sc_lv<234> ap_ST_fsm_state203;
    static const sc_lv<234> ap_ST_fsm_state204;
    static const sc_lv<234> ap_ST_fsm_state205;
    static const sc_lv<234> ap_ST_fsm_state206;
    static const sc_lv<234> ap_ST_fsm_state207;
    static const sc_lv<234> ap_ST_fsm_state208;
    static const sc_lv<234> ap_ST_fsm_state209;
    static const sc_lv<234> ap_ST_fsm_state210;
    static const sc_lv<234> ap_ST_fsm_state211;
    static const sc_lv<234> ap_ST_fsm_state212;
    static const sc_lv<234> ap_ST_fsm_state213;
    static const sc_lv<234> ap_ST_fsm_state214;
    static const sc_lv<234> ap_ST_fsm_state215;
    static const sc_lv<234> ap_ST_fsm_state216;
    static const sc_lv<234> ap_ST_fsm_state217;
    static const sc_lv<234> ap_ST_fsm_state218;
    static const sc_lv<234> ap_ST_fsm_state219;
    static const sc_lv<234> ap_ST_fsm_state220;
    static const sc_lv<234> ap_ST_fsm_state221;
    static const sc_lv<234> ap_ST_fsm_state222;
    static const sc_lv<234> ap_ST_fsm_state223;
    static const sc_lv<234> ap_ST_fsm_state224;
    static const sc_lv<234> ap_ST_fsm_state225;
    static const sc_lv<234> ap_ST_fsm_state226;
    static const sc_lv<234> ap_ST_fsm_state227;
    static const sc_lv<234> ap_ST_fsm_state228;
    static const sc_lv<234> ap_ST_fsm_state229;
    static const sc_lv<234> ap_ST_fsm_state230;
    static const sc_lv<234> ap_ST_fsm_state231;
    static const sc_lv<234> ap_ST_fsm_state232;
    static const sc_lv<234> ap_ST_fsm_state233;
    static const sc_lv<234> ap_ST_fsm_state234;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_9E;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_46;
    static const sc_lv<32> ap_const_lv32_47;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_49;
    static const sc_lv<32> ap_const_lv32_4A;
    static const sc_lv<32> ap_const_lv32_4C;
    static const sc_lv<32> ap_const_lv32_4D;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<32> ap_const_lv32_50;
    static const sc_lv<32> ap_const_lv32_52;
    static const sc_lv<32> ap_const_lv32_53;
    static const sc_lv<32> ap_const_lv32_54;
    static const sc_lv<32> ap_const_lv32_97;
    static const sc_lv<32> ap_const_lv32_98;
    static const sc_lv<32> ap_const_lv32_99;
    static const sc_lv<32> ap_const_lv32_9C;
    static const sc_lv<32> ap_const_lv32_9D;
    static const sc_lv<32> ap_const_lv32_E1;
    static const sc_lv<32> ap_const_lv32_E2;
    static const sc_lv<32> ap_const_lv32_E3;
    static const sc_lv<32> ap_const_lv32_E6;
    static const sc_lv<32> ap_const_lv32_E7;
    static const sc_lv<32> ap_const_lv32_E8;
    static const sc_lv<32> ap_const_lv32_E9;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_48;
    static const sc_lv<32> ap_const_lv32_4B;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_4E;
    static const sc_lv<32> ap_const_lv32_51;
    static const sc_lv<32> ap_const_lv32_9B;
    static const sc_lv<32> ap_const_lv32_9A;
    static const sc_lv<32> ap_const_lv32_E5;
    static const sc_lv<19> ap_const_lv19_0;
    static const sc_lv<32> ap_const_lv32_E4;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<64> ap_const_lv64_40038;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<19> ap_const_lv19_40038;
    static const sc_lv<19> ap_const_lv19_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const bool ap_const_boolean_1;
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
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state152();
    void thread_ap_CS_fsm_state153();
    void thread_ap_CS_fsm_state154();
    void thread_ap_CS_fsm_state155();
    void thread_ap_CS_fsm_state156();
    void thread_ap_CS_fsm_state157();
    void thread_ap_CS_fsm_state158();
    void thread_ap_CS_fsm_state159();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state226();
    void thread_ap_CS_fsm_state227();
    void thread_ap_CS_fsm_state228();
    void thread_ap_CS_fsm_state229();
    void thread_ap_CS_fsm_state230();
    void thread_ap_CS_fsm_state231();
    void thread_ap_CS_fsm_state232();
    void thread_ap_CS_fsm_state233();
    void thread_ap_CS_fsm_state234();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state71();
    void thread_ap_CS_fsm_state72();
    void thread_ap_CS_fsm_state73();
    void thread_ap_CS_fsm_state74();
    void thread_ap_CS_fsm_state75();
    void thread_ap_CS_fsm_state76();
    void thread_ap_CS_fsm_state77();
    void thread_ap_CS_fsm_state78();
    void thread_ap_CS_fsm_state79();
    void thread_ap_CS_fsm_state80();
    void thread_ap_CS_fsm_state81();
    void thread_ap_CS_fsm_state82();
    void thread_ap_CS_fsm_state83();
    void thread_ap_CS_fsm_state84();
    void thread_ap_CS_fsm_state85();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_count_4_fu_729_p2();
    void thread_count_5_fu_767_p2();
    void thread_exitcond10_fu_966_p2();
    void thread_exitcond1_fu_851_p2();
    void thread_exitcond2_fu_879_p2();
    void thread_exitcond3_fu_895_p2();
    void thread_exitcond4_fu_981_p2();
    void thread_exitcond5_fu_915_p2();
    void thread_exitcond6_fu_709_p2();
    void thread_exitcond7_fu_745_p2();
    void thread_exitcond8_fu_820_p2();
    void thread_exitcond9_fu_1034_p2();
    void thread_exitcond_fu_1122_p2();
    void thread_extLd1_fu_1046_p1();
    void thread_extLd_fu_910_p1();
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
    void thread_grp_fu_1016_ap_start();
    void thread_grp_fu_1023_ap_start();
    void thread_grp_fu_782_ap_start();
    void thread_grp_fu_787_ap_start();
    void thread_grp_fu_787_p0();
    void thread_grp_fu_948_ap_start();
    void thread_grp_fu_955_ap_start();
    void thread_grp_k2c_sub2idx_fu_679_ap_start();
    void thread_grp_k2c_sub2idx_fu_679_ndim();
    void thread_grp_k2c_sub2idx_fu_679_shape_q0();
    void thread_grp_k2c_sub2idx_fu_679_sub_q0();
    void thread_i_17_cast_fu_809_p2();
    void thread_i_17_fu_804_p2();
    void thread_i_18_fu_714_p2();
    void thread_i_19_fu_825_p2();
    void thread_i_20_fu_751_p2();
    void thread_i_21_fu_841_p2();
    void thread_i_22_fu_862_p2();
    void thread_i_23_fu_884_p2();
    void thread_i_24_fu_901_p2();
    void thread_i_25_fu_929_p2();
    void thread_i_26_cast_fu_993_p1();
    void thread_i_27_fu_920_p2();
    void thread_i_28_fu_1078_p2();
    void thread_i_29_fu_987_p2();
    void thread_i_4_cast_fu_815_p1();
    void thread_i_5_cast_fu_831_p1();
    void thread_i_7_cast7_fu_847_p1();
    void thread_i_8_cast_fu_874_p1();
    void thread_i_9_cast6_fu_890_p1();
    void thread_idx2_6_cast5_fu_977_p1();
    void thread_j3_cast_fu_961_p1();
    void thread_j4_cast4_fu_1029_p1();
    void thread_j_1_cast1_fu_857_p1();
    void thread_j_5_fu_971_p2();
    void thread_j_6_fu_1040_p2();
    void thread_j_7_fu_1102_p2();
    void thread_j_fu_868_p2();
    void thread_k_2_fu_1127_p2();
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
    void thread_phitmp_fu_1010_p2();
    void thread_sum2_cast_fu_1158_p1();
    void thread_sum2_fu_1153_p2();
    void thread_sum9_cast_fu_1060_p1();
    void thread_sum9_fu_1055_p2();
    void thread_sum_cast_fu_1138_p1();
    void thread_sum_fu_1133_p2();
    void thread_tmp1_fu_1148_p2();
    void thread_tmp_13_fu_720_p2();
    void thread_tmp_14_fu_1073_p2();
    void thread_tmp_15_fu_1163_p0();
    void thread_tmp_16_fu_1084_p2();
    void thread_tmp_17_fu_1097_p2();
    void thread_tmp_18_cast_fu_1113_p1();
    void thread_tmp_18_fu_1108_p2();
    void thread_tmp_19_fu_1143_p2();
    void thread_tmp_25_fu_778_p1();
    void thread_tmp_26_fu_793_p1();
    void thread_tmp_27_fu_797_p1();
    void thread_tmp_28_fu_801_p1();
    void thread_tmp_29_fu_907_p1();
    void thread_tmp_30_fu_926_p1();
    void thread_tmp_31_fu_935_p3();
    void thread_tmp_32_fu_1065_p1();
    void thread_tmp_34_fu_997_p3();
    void thread_tmp_35_fu_1089_p1();
    void thread_tmp_36_fu_1093_p1();
    void thread_tmp_37_fu_1051_p1();
    void thread_tmp_38_fu_1118_p1();
    void thread_tmp_5_i5_fu_1005_p1();
    void thread_tmp_5_i_fu_943_p1();
    void thread_tmp_fu_757_p2();
    void thread_tmp_s_fu_836_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
