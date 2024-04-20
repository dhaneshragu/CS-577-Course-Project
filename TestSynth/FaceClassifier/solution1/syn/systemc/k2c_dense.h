// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_dense_HH_
#define _k2c_dense_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "k2c_dot_1.h"
#include "k2c_bias_add.h"
#include "face_classifier_cdEe.h"
#include "face_classifier_ceOg.h"
#include "face_classifier_chbi.h"
#include "face_classifier_cibs.h"

namespace ap_rtl {

struct k2c_dense : public sc_module {
    // Port declarations 44
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
    sc_out< sc_lv<3> > kernel_shape_address0;
    sc_out< sc_logic > kernel_shape_ce0;
    sc_in< sc_lv<64> > kernel_shape_q0;
    sc_out< sc_lv<3> > kernel_shape_address1;
    sc_out< sc_logic > kernel_shape_ce1;
    sc_in< sc_lv<64> > kernel_shape_q1;
    sc_out< sc_lv<12> > bias_array_address0;
    sc_out< sc_logic > bias_array_ce0;
    sc_in< sc_lv<32> > bias_array_q0;
    sc_out< sc_lv<19> > fwork_address0;
    sc_out< sc_logic > fwork_ce0;
    sc_out< sc_logic > fwork_we0;
    sc_out< sc_lv<32> > fwork_d0;
    sc_in< sc_lv<32> > fwork_q0;
    sc_out< sc_lv<19> > fwork_address1;
    sc_out< sc_logic > fwork_ce1;
    sc_in< sc_lv<32> > fwork_q1;
    sc_out< sc_lv<1> > axesA_address0;
    sc_out< sc_logic > axesA_ce0;
    sc_out< sc_logic > axesA_we0;
    sc_out< sc_lv<64> > axesA_d0;
    sc_in< sc_lv<64> > axesA_q0;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<64> > ap_var_for_const0;


    // Module declarations
    k2c_dense(sc_module_name name);
    SC_HAS_PROCESS(k2c_dense);

    ~k2c_dense();

    sc_trace_file* mVcdFile;

    k2c_dot_1* grp_k2c_dot_1_fu_235;
    k2c_bias_add* grp_k2c_bias_add_fu_255;
    face_classifier_cdEe<1,4,32,32,32>* face_classifier_cdEe_U38;
    face_classifier_ceOg<1,2,32,32,32>* face_classifier_ceOg_U39;
    face_classifier_chbi<1,1,13,13,13,13>* face_classifier_chbi_U40;
    face_classifier_cibs<1,1,13,13,13>* face_classifier_cibs_U41;
    sc_signal< sc_lv<13> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > tmp_45_reg_214;
    sc_signal< sc_lv<64> > k_reg_224;
    sc_signal< sc_lv<1> > tmp_fu_277_p2;
    sc_signal< sc_lv<1> > tmp_reg_466;
    sc_signal< sc_lv<1> > icmp_fu_300_p2;
    sc_signal< sc_lv<1> > icmp_reg_470;
    sc_signal< sc_lv<64> > outcols_reg_490;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<20> > tmp_67_fu_313_p1;
    sc_signal< sc_lv<20> > tmp_67_reg_495;
    sc_signal< sc_lv<13> > tmp_68_fu_317_p1;
    sc_signal< sc_lv<13> > tmp_68_reg_500;
    sc_signal< sc_lv<64> > innerdim_reg_505;
    sc_signal< sc_lv<13> > tmp_69_fu_321_p1;
    sc_signal< sc_lv<13> > tmp_69_reg_510;
    sc_signal< sc_lv<128> > bound_fu_333_p2;
    sc_signal< sc_lv<128> > bound_reg_515;
    sc_signal< sc_lv<128> > indvar_flatten_next_fu_344_p2;
    sc_signal< sc_lv<128> > indvar_flatten_next_reg_523;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<64> > j_mid2_fu_355_p3;
    sc_signal< sc_lv<64> > j_mid2_reg_528;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_339_p2;
    sc_signal< sc_lv<64> > outrowidx_mid2_v_v_fu_370_p3;
    sc_signal< sc_lv<64> > outrowidx_mid2_v_v_reg_533;
    sc_signal< sc_lv<13> > inneridx_mid2_fu_451_p2;
    sc_signal< sc_lv<13> > inneridx_mid2_reg_538;
    sc_signal< sc_lv<20> > tmp_71_fu_382_p1;
    sc_signal< sc_lv<20> > tmp_71_reg_543;
    sc_signal< sc_lv<12> > output_array_addr_reg_553;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > exitcond_fu_394_p2;
    sc_signal< sc_lv<1> > exitcond_reg_563;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_reg_563_pp0_iter1_reg;
    sc_signal< sc_lv<64> > k_4_fu_399_p2;
    sc_signal< sc_lv<64> > k_4_reg_567;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > input_array_load_reg_582;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state10_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state14_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<32> > kernel_array_load_reg_587;
    sc_signal< sc_lv<32> > grp_fu_273_p2;
    sc_signal< sc_lv<32> > tmp_49_reg_592;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_state12_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state16_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_lv<32> > grp_fu_267_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<64> > j_17_fu_438_p2;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state9;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_ap_start;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_ap_done;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_ap_idle;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_ap_ready;
    sc_signal< sc_lv<12> > grp_k2c_dot_1_fu_235_C_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_C_array_ce0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_C_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_1_fu_235_C_array_d0;
    sc_signal< sc_lv<12> > grp_k2c_dot_1_fu_235_Ar_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_Ar_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dot_1_fu_235_Ar_shape_address0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_Ar_shape_ce0;
    sc_signal< sc_lv<19> > grp_k2c_dot_1_fu_235_B_array_address0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_B_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dot_1_fu_235_B_shape_address0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_B_shape_ce0;
    sc_signal< sc_lv<1> > grp_k2c_dot_1_fu_235_axesA_address0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_axesA_ce0;
    sc_signal< sc_lv<19> > grp_k2c_dot_1_fu_235_fwork_address0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_fwork_ce0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_fwork_we0;
    sc_signal< sc_lv<32> > grp_k2c_dot_1_fu_235_fwork_d0;
    sc_signal< sc_lv<19> > grp_k2c_dot_1_fu_235_fwork_address1;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_fwork_ce1;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_255_ap_start;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_255_ap_done;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_255_ap_idle;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_255_ap_ready;
    sc_signal< sc_lv<12> > grp_k2c_bias_add_fu_255_A_array_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_255_A_array_ce0;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_255_A_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_bias_add_fu_255_A_array_d0;
    sc_signal< sc_lv<12> > grp_k2c_bias_add_fu_255_b_array_address0;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_255_b_array_ce0;
    sc_signal< sc_lv<128> > indvar_flatten_reg_181;
    sc_signal< sc_lv<64> > i_reg_192;
    sc_signal< sc_lv<64> > j_reg_203;
    sc_signal< sc_lv<64> > ap_phi_mux_k_phi_fu_228_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > grp_k2c_dot_1_fu_235_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > grp_k2c_bias_add_fu_255_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > tmp_44_cast_fu_390_p1;
    sc_signal< sc_lv<64> > tmp_46_cast_fu_418_p1;
    sc_signal< sc_lv<64> > tmp_48_cast_fu_433_p1;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_lv<63> > tmp_66_fu_290_p4;
    sc_signal< sc_lv<64> > outrows2_fu_306_p3;
    sc_signal< sc_lv<64> > bound_fu_333_p0;
    sc_signal< sc_lv<64> > bound_fu_333_p1;
    sc_signal< sc_lv<1> > exitcond14_fu_350_p2;
    sc_signal< sc_lv<64> > i_s_fu_364_p2;
    sc_signal< sc_lv<13> > grp_fu_443_p3;
    sc_signal< sc_lv<13> > tmp_74_fu_409_p1;
    sc_signal< sc_lv<13> > tmp_46_fu_413_p2;
    sc_signal< sc_lv<20> > tmp_73_fu_405_p1;
    sc_signal< sc_lv<20> > tmp_47_fu_423_p2;
    sc_signal< sc_lv<20> > tmp_48_fu_428_p2;
    sc_signal< sc_lv<13> > tmp_70_fu_378_p1;
    sc_signal< sc_lv<13> > grp_fu_443_p2;
    sc_signal< bool > ap_block_state5_on_subcall_done;
    sc_signal< sc_lv<13> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_state11_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state15_pp0_stage2_iter1;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<128> > bound_fu_333_p00;
    sc_signal< sc_lv<128> > bound_fu_333_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<13> ap_ST_fsm_state1;
    static const sc_lv<13> ap_ST_fsm_state2;
    static const sc_lv<13> ap_ST_fsm_state3;
    static const sc_lv<13> ap_ST_fsm_state4;
    static const sc_lv<13> ap_ST_fsm_state5;
    static const sc_lv<13> ap_ST_fsm_state6;
    static const sc_lv<13> ap_ST_fsm_state7;
    static const sc_lv<13> ap_ST_fsm_state8;
    static const sc_lv<13> ap_ST_fsm_pp0_stage0;
    static const sc_lv<13> ap_ST_fsm_pp0_stage1;
    static const sc_lv<13> ap_ST_fsm_pp0_stage2;
    static const sc_lv<13> ap_ST_fsm_pp0_stage3;
    static const sc_lv<13> ap_ST_fsm_state17;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<128> ap_const_lv128_lc_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<64> ap_const_lv64_64;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_FFFFFFFFFFFFFFFF;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<128> ap_const_lv128_lc_2;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
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
    void thread_ap_block_state10_pp0_stage1_iter0();
    void thread_ap_block_state11_pp0_stage2_iter0();
    void thread_ap_block_state12_pp0_stage3_iter0();
    void thread_ap_block_state13_pp0_stage0_iter1();
    void thread_ap_block_state14_pp0_stage1_iter1();
    void thread_ap_block_state15_pp0_stage2_iter1();
    void thread_ap_block_state16_pp0_stage3_iter1();
    void thread_ap_block_state5_on_subcall_done();
    void thread_ap_block_state9_pp0_stage0_iter0();
    void thread_ap_condition_pp0_exit_iter0_state9();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_k_phi_fu_228_p4();
    void thread_ap_ready();
    void thread_axesA_address0();
    void thread_axesA_ce0();
    void thread_axesA_d0();
    void thread_axesA_we0();
    void thread_bias_array_address0();
    void thread_bias_array_ce0();
    void thread_bound_fu_333_p0();
    void thread_bound_fu_333_p00();
    void thread_bound_fu_333_p1();
    void thread_bound_fu_333_p10();
    void thread_bound_fu_333_p2();
    void thread_exitcond14_fu_350_p2();
    void thread_exitcond_flatten_fu_339_p2();
    void thread_exitcond_fu_394_p2();
    void thread_fwork_address0();
    void thread_fwork_address1();
    void thread_fwork_ce0();
    void thread_fwork_ce1();
    void thread_fwork_d0();
    void thread_fwork_we0();
    void thread_grp_fu_443_p2();
    void thread_grp_k2c_bias_add_fu_255_ap_start();
    void thread_grp_k2c_dot_1_fu_235_ap_start();
    void thread_i_s_fu_364_p2();
    void thread_icmp_fu_300_p2();
    void thread_indvar_flatten_next_fu_344_p2();
    void thread_input_array_address0();
    void thread_input_array_ce0();
    void thread_input_shape_address0();
    void thread_input_shape_ce0();
    void thread_j_17_fu_438_p2();
    void thread_j_mid2_fu_355_p3();
    void thread_k_4_fu_399_p2();
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
    void thread_outrowidx_mid2_v_v_fu_370_p3();
    void thread_outrows2_fu_306_p3();
    void thread_tmp_44_cast_fu_390_p1();
    void thread_tmp_46_cast_fu_418_p1();
    void thread_tmp_46_fu_413_p2();
    void thread_tmp_47_fu_423_p2();
    void thread_tmp_48_cast_fu_433_p1();
    void thread_tmp_48_fu_428_p2();
    void thread_tmp_66_fu_290_p4();
    void thread_tmp_67_fu_313_p1();
    void thread_tmp_68_fu_317_p1();
    void thread_tmp_69_fu_321_p1();
    void thread_tmp_70_fu_378_p1();
    void thread_tmp_71_fu_382_p1();
    void thread_tmp_73_fu_405_p1();
    void thread_tmp_74_fu_409_p1();
    void thread_tmp_fu_277_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
