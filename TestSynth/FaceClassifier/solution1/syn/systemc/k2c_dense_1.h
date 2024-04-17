// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_dense_1_HH_
#define _k2c_dense_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "k2c_dot.h"
#include "k2c_bias_add.h"
#include "face_classifier_cdEe.h"
#include "face_classifier_ceOg.h"
#include "face_classifier_chbi.h"
#include "face_classifier_cibs.h"

namespace ap_rtl {

struct k2c_dense_1 : public sc_module {
    // Port declarations 43
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<12> > output_array_address0;
    sc_out< sc_logic > output_array_ce0;
    sc_out< sc_logic > output_array_we0;
    sc_out< sc_lv<32> > output_array_d0;
    sc_in< sc_lv<32> > output_array_q0;
    sc_in< sc_lv<64> > output_numel_read;
    sc_out< sc_lv<12> > input_array_address0;
    sc_out< sc_logic > input_array_ce0;
    sc_in< sc_lv<32> > input_array_q0;
    sc_in< sc_lv<64> > input_ndim_read;
    sc_in< sc_lv<64> > input_numel_read;
    sc_out< sc_lv<3> > input_shape_address0;
    sc_out< sc_logic > input_shape_ce0;
    sc_in< sc_lv<64> > input_shape_q0;
    sc_out< sc_lv<19> > kernel_array_address0;
    sc_out< sc_logic > kernel_array_ce0;
    sc_in< sc_lv<32> > kernel_array_q0;
    sc_in< sc_lv<64> > kernel_ndim_read;
    sc_in< sc_lv<64> > kernel_numel_read;
    sc_out< sc_lv<3> > kernel_shape_address0;
    sc_out< sc_logic > kernel_shape_ce0;
    sc_in< sc_lv<64> > kernel_shape_q0;
    sc_out< sc_lv<3> > kernel_shape_address1;
    sc_out< sc_logic > kernel_shape_ce1;
    sc_in< sc_lv<64> > kernel_shape_q1;
    sc_out< sc_lv<12> > bias_array_address0;
    sc_out< sc_logic > bias_array_ce0;
    sc_in< sc_lv<32> > bias_array_q0;
    sc_in< sc_lv<64> > bias_numel_read;
    sc_out< sc_lv<11> > fwork_address0;
    sc_out< sc_logic > fwork_ce0;
    sc_out< sc_logic > fwork_we0;
    sc_out< sc_lv<32> > fwork_d0;
    sc_in< sc_lv<32> > fwork_q0;
    sc_out< sc_lv<11> > fwork_address1;
    sc_out< sc_logic > fwork_ce1;
    sc_in< sc_lv<32> > fwork_q1;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_dense_1(sc_module_name name);
    SC_HAS_PROCESS(k2c_dense_1);

    ~k2c_dense_1();

    sc_trace_file* mVcdFile;

    k2c_dot* grp_k2c_dot_fu_255;
    k2c_bias_add* grp_k2c_bias_add_fu_279;
    face_classifier_cdEe<1,4,32,32,32>* face_classifier_cdEe_U111;
    face_classifier_ceOg<1,2,32,32,32>* face_classifier_ceOg_U112;
    face_classifier_chbi<1,1,13,13,13,13>* face_classifier_chbi_U113;
    face_classifier_cibs<1,1,13,13,13>* face_classifier_cibs_U114;
    sc_signal< sc_lv<12> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > tmp_43_reg_234;
    sc_signal< sc_lv<64> > k_reg_244;
    sc_signal< sc_lv<1> > tmp_fu_299_p2;
    sc_signal< sc_lv<1> > tmp_reg_508;
    sc_signal< sc_lv<64> > tmp_s_fu_305_p2;
    sc_signal< sc_lv<64> > tmp_s_reg_512;
    sc_signal< sc_lv<12> > tmp_60_fu_312_p1;
    sc_signal< sc_lv<12> > tmp_60_reg_517;
    sc_signal< sc_lv<1> > icmp_fu_327_p2;
    sc_signal< sc_lv<1> > icmp_reg_522;
    sc_signal< sc_lv<64> > outcols_reg_542;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<20> > tmp_57_fu_340_p1;
    sc_signal< sc_lv<20> > tmp_57_reg_547;
    sc_signal< sc_lv<13> > tmp_58_fu_344_p1;
    sc_signal< sc_lv<13> > tmp_58_reg_552;
    sc_signal< sc_lv<64> > innerdim_reg_557;
    sc_signal< sc_lv<13> > tmp_59_fu_348_p1;
    sc_signal< sc_lv<13> > tmp_59_reg_562;
    sc_signal< sc_lv<128> > bound_fu_360_p2;
    sc_signal< sc_lv<128> > bound_reg_567;
    sc_signal< sc_lv<128> > indvar_flatten_next_fu_371_p2;
    sc_signal< sc_lv<128> > indvar_flatten_next_reg_575;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > j_mid2_fu_382_p3;
    sc_signal< sc_lv<64> > j_mid2_reg_580;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_366_p2;
    sc_signal< sc_lv<64> > outrowidx_mid2_v_v_fu_397_p3;
    sc_signal< sc_lv<64> > outrowidx_mid2_v_v_reg_585;
    sc_signal< sc_lv<13> > inneridx_mid2_fu_478_p2;
    sc_signal< sc_lv<13> > inneridx_mid2_reg_590;
    sc_signal< sc_lv<20> > tmp_62_fu_409_p1;
    sc_signal< sc_lv<20> > tmp_62_reg_595;
    sc_signal< sc_lv<12> > output_array_addr_reg_605;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > exitcond_fu_421_p2;
    sc_signal< sc_lv<1> > exitcond_reg_615;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_reg_615_pp0_iter1_reg;
    sc_signal< sc_lv<64> > k_4_fu_426_p2;
    sc_signal< sc_lv<64> > k_4_reg_619;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > input_array_load_reg_634;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state9_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state13_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<32> > kernel_array_load_reg_639;
    sc_signal< sc_lv<32> > grp_fu_295_p2;
    sc_signal< sc_lv<32> > tmp_48_reg_644;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_state11_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state15_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_lv<32> > grp_fu_289_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<64> > j_12_fu_465_p2;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state8;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_ap_start;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_ap_done;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_ap_idle;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_ap_ready;
    sc_signal< sc_lv<12> > grp_k2c_dot_fu_255_C_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_C_array_ce0;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_C_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_fu_255_C_array_d0;
    sc_signal< sc_lv<12> > grp_k2c_dot_fu_255_Ar_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_Ar_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dot_fu_255_Ar_shape_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_Ar_shape_ce0;
    sc_signal< sc_lv<19> > grp_k2c_dot_fu_255_B_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_B_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dot_fu_255_B_shape_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_B_shape_ce0;
    sc_signal< sc_lv<11> > grp_k2c_dot_fu_255_fwork_address0;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_fwork_ce0;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_fwork_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_fu_255_fwork_d0;
    sc_signal< sc_lv<11> > grp_k2c_dot_fu_255_fwork_address1;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_fwork_ce1;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_279_ap_start;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_279_ap_done;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_279_ap_idle;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_279_ap_ready;
    sc_signal< sc_lv<12> > grp_k2c_bias_add_fu_279_A_array_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_279_A_array_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_279_A_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_fu_279_A_array_d0;
    sc_signal< sc_lv<12> > grp_k2c_bias_add_fu_279_b_array_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_279_b_array_ce0;
    sc_signal< sc_lv<128> > indvar_flatten_reg_201;
    sc_signal< sc_lv<64> > i_reg_212;
    sc_signal< sc_lv<64> > j_reg_223;
    sc_signal< sc_lv<64> > ap_phi_mux_k_phi_fu_248_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > grp_k2c_dot_fu_255_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_279_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > tmp_43_cast_fu_417_p1;
    sc_signal< sc_lv<64> > tmp_45_cast_fu_445_p1;
    sc_signal< sc_lv<64> > tmp_47_cast_fu_460_p1;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_lv<63> > tmp_56_fu_317_p4;
    sc_signal< sc_lv<64> > outrows2_fu_333_p3;
    sc_signal< sc_lv<64> > bound_fu_360_p0;
    sc_signal< sc_lv<64> > bound_fu_360_p1;
    sc_signal< sc_lv<1> > exitcond14_fu_377_p2;
    sc_signal< sc_lv<64> > i_s_fu_391_p2;
    sc_signal< sc_lv<13> > grp_fu_470_p3;
    sc_signal< sc_lv<13> > tmp_65_fu_436_p1;
    sc_signal< sc_lv<13> > tmp_45_fu_440_p2;
    sc_signal< sc_lv<20> > tmp_64_fu_432_p1;
    sc_signal< sc_lv<20> > tmp_46_fu_450_p2;
    sc_signal< sc_lv<20> > tmp_47_fu_455_p2;
    sc_signal< sc_lv<13> > tmp_61_fu_405_p1;
    sc_signal< sc_lv<13> > grp_fu_470_p2;
    sc_signal< bool > ap_block_state4_on_subcall_done;
    sc_signal< sc_lv<12> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_state10_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state14_pp0_stage2_iter1;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<128> > bound_fu_360_p00;
    sc_signal< sc_lv<128> > bound_fu_360_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<12> ap_ST_fsm_state1;
    static const sc_lv<12> ap_ST_fsm_state2;
    static const sc_lv<12> ap_ST_fsm_state3;
    static const sc_lv<12> ap_ST_fsm_state4;
    static const sc_lv<12> ap_ST_fsm_state5;
    static const sc_lv<12> ap_ST_fsm_state6;
    static const sc_lv<12> ap_ST_fsm_state7;
    static const sc_lv<12> ap_ST_fsm_pp0_stage0;
    static const sc_lv<12> ap_ST_fsm_pp0_stage1;
    static const sc_lv<12> ap_ST_fsm_pp0_stage2;
    static const sc_lv<12> ap_ST_fsm_pp0_stage3;
    static const sc_lv<12> ap_ST_fsm_state16;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<128> ap_const_lv128_lc_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<128> ap_const_lv128_lc_2;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_state10_pp0_stage2_iter0();
    void thread_ap_block_state11_pp0_stage3_iter0();
    void thread_ap_block_state12_pp0_stage0_iter1();
    void thread_ap_block_state13_pp0_stage1_iter1();
    void thread_ap_block_state14_pp0_stage2_iter1();
    void thread_ap_block_state15_pp0_stage3_iter1();
    void thread_ap_block_state4_on_subcall_done();
    void thread_ap_block_state8_pp0_stage0_iter0();
    void thread_ap_block_state9_pp0_stage1_iter0();
    void thread_ap_condition_pp0_exit_iter0_state8();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_k_phi_fu_248_p4();
    void thread_ap_ready();
    void thread_bias_array_address0();
    void thread_bias_array_ce0();
    void thread_bound_fu_360_p0();
    void thread_bound_fu_360_p00();
    void thread_bound_fu_360_p1();
    void thread_bound_fu_360_p10();
    void thread_bound_fu_360_p2();
    void thread_exitcond14_fu_377_p2();
    void thread_exitcond_flatten_fu_366_p2();
    void thread_exitcond_fu_421_p2();
    void thread_fwork_address0();
    void thread_fwork_address1();
    void thread_fwork_ce0();
    void thread_fwork_ce1();
    void thread_fwork_d0();
    void thread_fwork_we0();
    void thread_grp_fu_470_p2();
    void thread_grp_k2c_bias_add_fu_279_ap_start();
    void thread_grp_k2c_dot_fu_255_ap_start();
    void thread_i_s_fu_391_p2();
    void thread_icmp_fu_327_p2();
    void thread_indvar_flatten_next_fu_371_p2();
    void thread_input_array_address0();
    void thread_input_array_ce0();
    void thread_input_shape_address0();
    void thread_input_shape_ce0();
    void thread_j_12_fu_465_p2();
    void thread_j_mid2_fu_382_p3();
    void thread_k_4_fu_426_p2();
    void thread_kernel_array_address0();
    void thread_kernel_array_ce0();
    void thread_kernel_shape_address0();
    void thread_kernel_shape_address1();
    void thread_kernel_shape_ce0();
    void thread_kernel_shape_ce1();
    void thread_output_array_address0();
    void thread_output_array_ce0();
    void thread_output_array_d0();
    void thread_output_array_we0();
    void thread_outrowidx_mid2_v_v_fu_397_p3();
    void thread_outrows2_fu_333_p3();
    void thread_tmp_43_cast_fu_417_p1();
    void thread_tmp_45_cast_fu_445_p1();
    void thread_tmp_45_fu_440_p2();
    void thread_tmp_46_fu_450_p2();
    void thread_tmp_47_cast_fu_460_p1();
    void thread_tmp_47_fu_455_p2();
    void thread_tmp_56_fu_317_p4();
    void thread_tmp_57_fu_340_p1();
    void thread_tmp_58_fu_344_p1();
    void thread_tmp_59_fu_348_p1();
    void thread_tmp_60_fu_312_p1();
    void thread_tmp_61_fu_405_p1();
    void thread_tmp_62_fu_409_p1();
    void thread_tmp_64_fu_432_p1();
    void thread_tmp_65_fu_436_p1();
    void thread_tmp_fu_299_p2();
    void thread_tmp_s_fu_305_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
