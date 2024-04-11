// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _exp_generic_double_s_HH_
#define _exp_generic_double_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "face_classifier_cocq.h"
#include "exp_generic_doubllbW.h"
#include "exp_generic_doublmb6.h"
#include "exp_generic_doublncg.h"

namespace ap_rtl {

struct exp_generic_double_s : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<64> > x;
    sc_out< sc_lv<64> > ap_return;


    // Module declarations
    exp_generic_double_s(sc_module_name name);
    SC_HAS_PROCESS(exp_generic_double_s);

    ~exp_generic_double_s();

    sc_trace_file* mVcdFile;

    exp_generic_doubllbW* table_exp_Z1_array_s_U;
    exp_generic_doublmb6* table_f_Z3_array_V_U;
    exp_generic_doublncg* table_f_Z2_array_V_U;
    face_classifier_cocq<1,1,16,16,19,31>* face_classifier_cocq_U61;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<8> > table_exp_Z1_array_s_address0;
    sc_signal< sc_logic > table_exp_Z1_array_s_ce0;
    sc_signal< sc_lv<58> > table_exp_Z1_array_s_q0;
    sc_signal< sc_lv<8> > table_f_Z3_array_V_address0;
    sc_signal< sc_logic > table_f_Z3_array_V_ce0;
    sc_signal< sc_lv<26> > table_f_Z3_array_V_q0;
    sc_signal< sc_lv<8> > table_f_Z3_array_V_address1;
    sc_signal< sc_logic > table_f_Z3_array_V_ce1;
    sc_signal< sc_lv<26> > table_f_Z3_array_V_q1;
    sc_signal< sc_lv<8> > table_f_Z2_array_V_address0;
    sc_signal< sc_logic > table_f_Z2_array_V_ce0;
    sc_signal< sc_lv<42> > table_f_Z2_array_V_q0;
    sc_signal< sc_lv<1> > p_Result_s_fu_263_p3;
    sc_signal< sc_lv<1> > p_Result_s_reg_1200;
    sc_signal< sc_lv<1> > not_demorgan_fu_297_p2;
    sc_signal< sc_lv<1> > not_demorgan_reg_1207;
    sc_signal< sc_lv<1> > tmp_57_i_fu_309_p2;
    sc_signal< sc_lv<1> > tmp_57_i_reg_1213;
    sc_signal< sc_lv<13> > r_exp_V_3_fu_520_p3;
    sc_signal< sc_lv<13> > r_exp_V_3_reg_1220;
    sc_signal< sc_lv<8> > p_Val2_22_fu_601_p4;
    sc_signal< sc_lv<8> > p_Val2_22_reg_1231;
    sc_signal< sc_lv<8> > p_Val2_17_fu_611_p4;
    sc_signal< sc_lv<8> > p_Val2_17_reg_1237;
    sc_signal< sc_lv<35> > p_Val2_11_fu_621_p1;
    sc_signal< sc_lv<35> > p_Val2_11_reg_1242;
    sc_signal< sc_lv<1> > tmp_115_fu_650_p2;
    sc_signal< sc_lv<1> > tmp_115_reg_1262;
    sc_signal< sc_lv<1> > tmp_116_fu_656_p2;
    sc_signal< sc_lv<1> > tmp_116_reg_1270;
    sc_signal< sc_lv<1> > tmp_127_reg_1275;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_lv<64> > tmp_111_fu_596_p1;
    sc_signal< sc_lv<64> > tmp_124_i_fu_635_p1;
    sc_signal< sc_lv<64> > tmp_127_i_fu_640_p1;
    sc_signal< sc_lv<64> > tmp_129_i_fu_645_p1;
    sc_signal< sc_lv<64> > p_Val2_s_fu_259_p1;
    sc_signal< sc_lv<11> > loc_V_fu_271_p4;
    sc_signal< sc_lv<52> > loc_V_3_fu_281_p1;
    sc_signal< sc_lv<1> > tmp_i_fu_285_p2;
    sc_signal< sc_lv<1> > tmp_i_112_fu_291_p2;
    sc_signal< sc_lv<1> > tmp_i1_fu_303_p2;
    sc_signal< sc_lv<12> > tmp_i1_cast_fu_315_p1;
    sc_signal< sc_lv<54> > p_Result_18_fu_325_p3;
    sc_signal< sc_lv<54> > p_Val2_s_113_fu_333_p2;
    sc_signal< sc_lv<54> > p_Val2_1_fu_339_p3;
    sc_signal< sc_lv<61> > p_Val2_2_fu_347_p3;
    sc_signal< sc_lv<12> > m_exp_fu_319_p2;
    sc_signal< sc_lv<11> > tmp_s_fu_367_p2;
    sc_signal< sc_lv<1> > isNeg_fu_359_p3;
    sc_signal< sc_lv<12> > tmp_114_cast_fu_373_p1;
    sc_signal< sc_lv<12> > sh_assign_1_fu_377_p3;
    sc_signal< sc_lv<32> > sh_assign_1_cast_fu_385_p1;
    sc_signal< sc_lv<61> > tmp_115_cast_fu_393_p1;
    sc_signal< sc_lv<61> > tmp_99_fu_397_p2;
    sc_signal< sc_lv<71> > p_Val2_2_cast_fu_355_p1;
    sc_signal< sc_lv<71> > tmp_98_fu_389_p1;
    sc_signal< sc_lv<71> > tmp_116_cast_fu_403_p1;
    sc_signal< sc_lv<71> > tmp_100_fu_407_p2;
    sc_signal< sc_lv<71> > p_Val2_3_fu_413_p3;
    sc_signal< sc_lv<64> > tmp_101_fu_421_p4;
    sc_signal< sc_lv<64> > tmp_102_fu_431_p1;
    sc_signal< sc_lv<16> > tmp_105_fu_447_p4;
    sc_signal< sc_lv<1> > tmp_121_fu_457_p3;
    sc_signal< sc_lv<19> > tmp_106_fu_469_p3;
    sc_signal< sc_lv<31> > grp_fu_1189_p3;
    sc_signal< sc_lv<18> > tmp_123_fu_497_p1;
    sc_signal< sc_lv<13> > tmp_20_fu_481_p4;
    sc_signal< sc_lv<1> > tmp_107_fu_500_p2;
    sc_signal< sc_lv<13> > tmp_21_fu_506_p2;
    sc_signal< sc_lv<1> > tmp_122_fu_490_p3;
    sc_signal< sc_lv<13> > tmp_22_fu_512_p3;
    sc_signal< sc_lv<13> > p_Val2_9_fu_532_p1;
    sc_signal< sc_lv<64> > tmp_103_fu_435_p2;
    sc_signal< sc_lv<64> > tmp_104_fu_441_p2;
    sc_signal< sc_lv<64> > tmp_1_fu_538_p3;
    sc_signal< sc_lv<84> > p_Val2_9_fu_532_p2;
    sc_signal< sc_lv<71> > tmp_2_fu_558_p4;
    sc_signal< sc_lv<72> > tmp_110_fu_568_p3;
    sc_signal< sc_lv<73> > tmp_109_fu_554_p1;
    sc_signal< sc_lv<73> > tmp_135_cast_fu_576_p1;
    sc_signal< sc_lv<73> > p_Val2_7_fu_580_p2;
    sc_signal< sc_lv<8> > m_diff_hi_V_fu_586_p4;
    sc_signal< sc_lv<8> > Z4_ind_V_fu_625_p4;
    sc_signal< sc_lv<71> > tmp_108_fu_546_p3;
    sc_signal< sc_lv<10> > p_Val2_15_fu_679_p4;
    sc_signal< sc_lv<36> > tmp_126_i_fu_692_p1;
    sc_signal< sc_lv<36> > tmp_125_i_fu_689_p1;
    sc_signal< sc_lv<43> > tmp_55_i_fu_702_p4;
    sc_signal< sc_lv<36> > r_V_1_fu_696_p2;
    sc_signal< sc_lv<36> > p_Val2_18_fu_719_p0;
    sc_signal< sc_lv<43> > p_Val2_18_fu_719_p1;
    sc_signal< sc_lv<79> > p_Val2_18_fu_719_p2;
    sc_signal< sc_lv<20> > tmp_3_fu_725_p4;
    sc_signal< sc_lv<36> > tmp_59_i_cast_fu_739_p1;
    sc_signal< sc_lv<36> > tmp_fu_743_p2;
    sc_signal< sc_lv<44> > tmp_57_i1_fu_735_p1;
    sc_signal< sc_lv<44> > tmp_cast_fu_749_p1;
    sc_signal< sc_lv<40> > tmp_4_fu_759_p4;
    sc_signal< sc_lv<49> > tmp_130_i_fu_769_p4;
    sc_signal< sc_lv<44> > p_Val2_20_fu_753_p2;
    sc_signal< sc_lv<44> > p_Val2_23_fu_786_p0;
    sc_signal< sc_lv<49> > p_Val2_23_fu_786_p1;
    sc_signal< sc_lv<93> > p_Val2_23_fu_786_p2;
    sc_signal< sc_lv<51> > tmp_133_i_fu_802_p5;
    sc_signal< sc_lv<36> > tmp_5_fu_792_p4;
    sc_signal< sc_lv<44> > tmp_135_i_cast_fu_817_p1;
    sc_signal< sc_lv<44> > tmp6_fu_821_p2;
    sc_signal< sc_lv<52> > tmp_133_i_cast_fu_813_p1;
    sc_signal< sc_lv<52> > tmp51_cast_fu_827_p1;
    sc_signal< sc_lv<52> > p_Val2_24_fu_831_p2;
    sc_signal< sc_lv<59> > tmp_113_fu_857_p1;
    sc_signal< sc_lv<50> > tmp_112_fu_847_p4;
    sc_signal< sc_lv<50> > exp_Z1P_m_1_V_fu_837_p4;
    sc_signal< sc_lv<50> > p_Val2_13_fu_875_p0;
    sc_signal< sc_lv<50> > p_Val2_13_fu_875_p1;
    sc_signal< sc_lv<59> > p_Val2_12_fu_861_p2;
    sc_signal< sc_lv<100> > p_Val2_13_fu_875_p2;
    sc_signal< sc_lv<108> > tmp_142_cast_fu_889_p1;
    sc_signal< sc_lv<108> > tmp_114_fu_881_p3;
    sc_signal< sc_lv<108> > p_Val2_14_fu_893_p2;
    sc_signal< sc_lv<1> > tmp_125_fu_899_p3;
    sc_signal< sc_lv<13> > r_exp_V_fu_907_p2;
    sc_signal< sc_lv<13> > r_exp_V_2_fu_912_p3;
    sc_signal< sc_lv<3> > tmp_126_fu_919_p4;
    sc_signal< sc_lv<1> > icmp_fu_929_p2;
    sc_signal< sc_lv<52> > tmp_25_fu_946_p4;
    sc_signal< sc_lv<52> > tmp_26_fu_956_p4;
    sc_signal< sc_lv<11> > tmp_128_fu_974_p1;
    sc_signal< sc_lv<11> > out_exp_V_fu_978_p2;
    sc_signal< sc_lv<52> > loc_V_4_fu_966_p3;
    sc_signal< sc_lv<1> > not_Result_i4_fu_670_p2;
    sc_signal< sc_lv<1> > sel_tmp1_fu_994_p2;
    sc_signal< sc_lv<1> > tmp7_fu_999_p2;
    sc_signal< sc_lv<1> > x_is_ninf_fu_675_p2;
    sc_signal< sc_lv<1> > tmp_57_i_not_fu_1016_p2;
    sc_signal< sc_lv<1> > sel_tmp3_fu_1026_p2;
    sc_signal< sc_lv<1> > tmp8_fu_1032_p2;
    sc_signal< sc_lv<1> > sel_tmp_fu_1021_p2;
    sc_signal< sc_lv<1> > or_cond_fu_935_p2;
    sc_signal< sc_lv<1> > sel_tmp8_fu_1054_p2;
    sc_signal< sc_lv<1> > sel_tmp6_fu_1049_p2;
    sc_signal< sc_lv<1> > sel_tmp9_fu_1059_p2;
    sc_signal< sc_lv<1> > sel_tmp10_fu_1065_p2;
    sc_signal< sc_lv<1> > sel_tmp5_fu_1044_p2;
    sc_signal< sc_lv<1> > tmp9_fu_1071_p2;
    sc_signal< sc_lv<1> > sel_tmp4_fu_1038_p2;
    sc_signal< sc_lv<1> > sel_tmp12_fu_1088_p2;
    sc_signal< sc_lv<1> > sel_tmp44_demorgan_fu_1099_p2;
    sc_signal< sc_lv<1> > sel_tmp13_fu_1094_p2;
    sc_signal< sc_lv<1> > sel_tmp14_fu_1104_p2;
    sc_signal< sc_lv<1> > tmp_117_fu_940_p2;
    sc_signal< sc_lv<1> > sel_tmp15_fu_1110_p2;
    sc_signal< sc_lv<64> > p_Result_19_fu_984_p4;
    sc_signal< sc_lv<1> > sel_tmp2_fu_1005_p2;
    sc_signal< sc_lv<1> > tmp_35_fu_1134_p2;
    sc_signal< sc_lv<64> > tmp_34_fu_1126_p3;
    sc_signal< sc_lv<64> > tmp_33_fu_1122_p1;
    sc_signal< sc_lv<1> > sel_tmp11_fu_1077_p2;
    sc_signal< sc_lv<1> > sel_tmp7_fu_1010_p2;
    sc_signal< sc_lv<1> > tmp_38_fu_1155_p2;
    sc_signal< sc_lv<64> > tmp_37_fu_1147_p3;
    sc_signal< sc_lv<64> > tmp_36_fu_1139_p3;
    sc_signal< sc_lv<1> > tmp11_fu_1116_p2;
    sc_signal< sc_lv<1> > tmp10_fu_1083_p2;
    sc_signal< sc_lv<1> > sel_tmp16_fu_1169_p2;
    sc_signal< sc_lv<1> > tmp_40_fu_1175_p2;
    sc_signal< sc_lv<64> > tmp_39_fu_1161_p3;
    sc_signal< sc_lv<16> > grp_fu_1189_p0;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to0;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<100> > p_Val2_13_fu_875_p00;
    sc_signal< sc_lv<100> > p_Val2_13_fu_875_p10;
    sc_signal< sc_lv<79> > p_Val2_18_fu_719_p00;
    sc_signal< sc_lv<79> > p_Val2_18_fu_719_p10;
    sc_signal< sc_lv<93> > p_Val2_23_fu_786_p00;
    sc_signal< sc_lv<93> > p_Val2_23_fu_786_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_pp0_stage0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<11> ap_const_lv11_7FF;
    static const sc_lv<52> ap_const_lv52_0;
    static const sc_lv<12> ap_const_lv12_C01;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<54> ap_const_lv54_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<11> ap_const_lv11_3FF;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_46;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<18> ap_const_lv18_20000;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<18> ap_const_lv18_0;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<84> ap_const_lv84_58B90BFBE8E7BCD5E4;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_53;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<32> ap_const_lv32_3A;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<32> ap_const_lv32_4E;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<32> ap_const_lv32_5C;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<59> ap_const_lv59_10;
    static const sc_lv<49> ap_const_lv49_0;
    static const sc_lv<32> ap_const_lv32_6A;
    static const sc_lv<13> ap_const_lv13_1FFF;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<13> ap_const_lv13_1C02;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_69;
    static const sc_lv<32> ap_const_lv32_68;
    static const sc_lv<64> ap_const_lv64_7FF0000000000000;
    static const sc_lv<64> ap_const_lv64_7FFFFFFFFFFFFFFF;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<31> ap_const_lv31_5C55;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_Z4_ind_V_fu_625_p4();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to0();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_return();
    void thread_exp_Z1P_m_1_V_fu_837_p4();
    void thread_grp_fu_1189_p0();
    void thread_icmp_fu_929_p2();
    void thread_isNeg_fu_359_p3();
    void thread_loc_V_3_fu_281_p1();
    void thread_loc_V_4_fu_966_p3();
    void thread_loc_V_fu_271_p4();
    void thread_m_diff_hi_V_fu_586_p4();
    void thread_m_exp_fu_319_p2();
    void thread_not_Result_i4_fu_670_p2();
    void thread_not_demorgan_fu_297_p2();
    void thread_or_cond_fu_935_p2();
    void thread_out_exp_V_fu_978_p2();
    void thread_p_Result_18_fu_325_p3();
    void thread_p_Result_19_fu_984_p4();
    void thread_p_Result_s_fu_263_p3();
    void thread_p_Val2_11_fu_621_p1();
    void thread_p_Val2_12_fu_861_p2();
    void thread_p_Val2_13_fu_875_p0();
    void thread_p_Val2_13_fu_875_p00();
    void thread_p_Val2_13_fu_875_p1();
    void thread_p_Val2_13_fu_875_p10();
    void thread_p_Val2_13_fu_875_p2();
    void thread_p_Val2_14_fu_893_p2();
    void thread_p_Val2_15_fu_679_p4();
    void thread_p_Val2_17_fu_611_p4();
    void thread_p_Val2_18_fu_719_p0();
    void thread_p_Val2_18_fu_719_p00();
    void thread_p_Val2_18_fu_719_p1();
    void thread_p_Val2_18_fu_719_p10();
    void thread_p_Val2_18_fu_719_p2();
    void thread_p_Val2_1_fu_339_p3();
    void thread_p_Val2_20_fu_753_p2();
    void thread_p_Val2_22_fu_601_p4();
    void thread_p_Val2_23_fu_786_p0();
    void thread_p_Val2_23_fu_786_p00();
    void thread_p_Val2_23_fu_786_p1();
    void thread_p_Val2_23_fu_786_p10();
    void thread_p_Val2_23_fu_786_p2();
    void thread_p_Val2_24_fu_831_p2();
    void thread_p_Val2_2_cast_fu_355_p1();
    void thread_p_Val2_2_fu_347_p3();
    void thread_p_Val2_3_fu_413_p3();
    void thread_p_Val2_7_fu_580_p2();
    void thread_p_Val2_9_fu_532_p1();
    void thread_p_Val2_9_fu_532_p2();
    void thread_p_Val2_s_113_fu_333_p2();
    void thread_p_Val2_s_fu_259_p1();
    void thread_r_V_1_fu_696_p2();
    void thread_r_exp_V_2_fu_912_p3();
    void thread_r_exp_V_3_fu_520_p3();
    void thread_r_exp_V_fu_907_p2();
    void thread_sel_tmp10_fu_1065_p2();
    void thread_sel_tmp11_fu_1077_p2();
    void thread_sel_tmp12_fu_1088_p2();
    void thread_sel_tmp13_fu_1094_p2();
    void thread_sel_tmp14_fu_1104_p2();
    void thread_sel_tmp15_fu_1110_p2();
    void thread_sel_tmp16_fu_1169_p2();
    void thread_sel_tmp1_fu_994_p2();
    void thread_sel_tmp2_fu_1005_p2();
    void thread_sel_tmp3_fu_1026_p2();
    void thread_sel_tmp44_demorgan_fu_1099_p2();
    void thread_sel_tmp4_fu_1038_p2();
    void thread_sel_tmp5_fu_1044_p2();
    void thread_sel_tmp6_fu_1049_p2();
    void thread_sel_tmp7_fu_1010_p2();
    void thread_sel_tmp8_fu_1054_p2();
    void thread_sel_tmp9_fu_1059_p2();
    void thread_sel_tmp_fu_1021_p2();
    void thread_sh_assign_1_cast_fu_385_p1();
    void thread_sh_assign_1_fu_377_p3();
    void thread_table_exp_Z1_array_s_address0();
    void thread_table_exp_Z1_array_s_ce0();
    void thread_table_f_Z2_array_V_address0();
    void thread_table_f_Z2_array_V_ce0();
    void thread_table_f_Z3_array_V_address0();
    void thread_table_f_Z3_array_V_address1();
    void thread_table_f_Z3_array_V_ce0();
    void thread_table_f_Z3_array_V_ce1();
    void thread_tmp10_fu_1083_p2();
    void thread_tmp11_fu_1116_p2();
    void thread_tmp51_cast_fu_827_p1();
    void thread_tmp6_fu_821_p2();
    void thread_tmp7_fu_999_p2();
    void thread_tmp8_fu_1032_p2();
    void thread_tmp9_fu_1071_p2();
    void thread_tmp_100_fu_407_p2();
    void thread_tmp_101_fu_421_p4();
    void thread_tmp_102_fu_431_p1();
    void thread_tmp_103_fu_435_p2();
    void thread_tmp_104_fu_441_p2();
    void thread_tmp_105_fu_447_p4();
    void thread_tmp_106_fu_469_p3();
    void thread_tmp_107_fu_500_p2();
    void thread_tmp_108_fu_546_p3();
    void thread_tmp_109_fu_554_p1();
    void thread_tmp_110_fu_568_p3();
    void thread_tmp_111_fu_596_p1();
    void thread_tmp_112_fu_847_p4();
    void thread_tmp_113_fu_857_p1();
    void thread_tmp_114_cast_fu_373_p1();
    void thread_tmp_114_fu_881_p3();
    void thread_tmp_115_cast_fu_393_p1();
    void thread_tmp_115_fu_650_p2();
    void thread_tmp_116_cast_fu_403_p1();
    void thread_tmp_116_fu_656_p2();
    void thread_tmp_117_fu_940_p2();
    void thread_tmp_121_fu_457_p3();
    void thread_tmp_122_fu_490_p3();
    void thread_tmp_123_fu_497_p1();
    void thread_tmp_124_i_fu_635_p1();
    void thread_tmp_125_fu_899_p3();
    void thread_tmp_125_i_fu_689_p1();
    void thread_tmp_126_fu_919_p4();
    void thread_tmp_126_i_fu_692_p1();
    void thread_tmp_127_i_fu_640_p1();
    void thread_tmp_128_fu_974_p1();
    void thread_tmp_129_i_fu_645_p1();
    void thread_tmp_130_i_fu_769_p4();
    void thread_tmp_133_i_cast_fu_813_p1();
    void thread_tmp_133_i_fu_802_p5();
    void thread_tmp_135_cast_fu_576_p1();
    void thread_tmp_135_i_cast_fu_817_p1();
    void thread_tmp_142_cast_fu_889_p1();
    void thread_tmp_1_fu_538_p3();
    void thread_tmp_20_fu_481_p4();
    void thread_tmp_21_fu_506_p2();
    void thread_tmp_22_fu_512_p3();
    void thread_tmp_25_fu_946_p4();
    void thread_tmp_26_fu_956_p4();
    void thread_tmp_2_fu_558_p4();
    void thread_tmp_33_fu_1122_p1();
    void thread_tmp_34_fu_1126_p3();
    void thread_tmp_35_fu_1134_p2();
    void thread_tmp_36_fu_1139_p3();
    void thread_tmp_37_fu_1147_p3();
    void thread_tmp_38_fu_1155_p2();
    void thread_tmp_39_fu_1161_p3();
    void thread_tmp_3_fu_725_p4();
    void thread_tmp_40_fu_1175_p2();
    void thread_tmp_4_fu_759_p4();
    void thread_tmp_55_i_fu_702_p4();
    void thread_tmp_57_i1_fu_735_p1();
    void thread_tmp_57_i_fu_309_p2();
    void thread_tmp_57_i_not_fu_1016_p2();
    void thread_tmp_59_i_cast_fu_739_p1();
    void thread_tmp_5_fu_792_p4();
    void thread_tmp_98_fu_389_p1();
    void thread_tmp_99_fu_397_p2();
    void thread_tmp_cast_fu_749_p1();
    void thread_tmp_fu_743_p2();
    void thread_tmp_i1_cast_fu_315_p1();
    void thread_tmp_i1_fu_303_p2();
    void thread_tmp_i_112_fu_291_p2();
    void thread_tmp_i_fu_285_p2();
    void thread_tmp_s_fu_367_p2();
    void thread_x_is_ninf_fu_675_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
