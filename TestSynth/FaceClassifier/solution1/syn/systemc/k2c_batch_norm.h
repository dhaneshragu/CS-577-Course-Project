// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_batch_norm_HH_
#define _k2c_batch_norm_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "face_classifier_cjbC.h"
#include "face_classifier_cdEe.h"
#include "face_classifier_ceOg.h"
#include "face_classifier_ckbM.h"
#include "face_classifier_clbW.h"

namespace ap_rtl {

struct k2c_batch_norm : public sc_module {
    // Port declarations 29
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<12> > outputs_array_address0;
    sc_out< sc_logic > outputs_array_ce0;
    sc_out< sc_logic > outputs_array_we0;
    sc_out< sc_lv<32> > outputs_array_d0;
    sc_out< sc_lv<12> > inputs_array_address0;
    sc_out< sc_logic > inputs_array_ce0;
    sc_in< sc_lv<32> > inputs_array_q0;
    sc_in< sc_lv<64> > inputs_numel_read;
    sc_out< sc_lv<3> > inputs_shape_address0;
    sc_out< sc_logic > inputs_shape_ce0;
    sc_in< sc_lv<64> > inputs_shape_q0;
    sc_out< sc_lv<12> > mean_array_address0;
    sc_out< sc_logic > mean_array_ce0;
    sc_in< sc_lv<32> > mean_array_q0;
    sc_out< sc_lv<12> > stdev_array_address0;
    sc_out< sc_logic > stdev_array_ce0;
    sc_in< sc_lv<32> > stdev_array_q0;
    sc_out< sc_lv<12> > gamma_array_address0;
    sc_out< sc_logic > gamma_array_ce0;
    sc_in< sc_lv<32> > gamma_array_q0;
    sc_out< sc_lv<12> > beta_array_address0;
    sc_out< sc_logic > beta_array_ce0;
    sc_in< sc_lv<32> > beta_array_q0;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_batch_norm(sc_module_name name);
    SC_HAS_PROCESS(k2c_batch_norm);

    ~k2c_batch_norm();

    sc_trace_file* mVcdFile;

    face_classifier_cjbC<1,4,32,32,32>* face_classifier_cjbC_U53;
    face_classifier_cdEe<1,4,32,32,32>* face_classifier_cdEe_U54;
    face_classifier_ceOg<1,2,32,32,32>* face_classifier_ceOg_U55;
    face_classifier_ckbM<1,8,32,32,32>* face_classifier_ckbM_U56;
    face_classifier_clbW<1,16,12,64,64>* face_classifier_clbW_U57;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<12> > i_reg_144;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > step_reg_205;
    sc_signal< sc_lv<64> > i_cast_fu_174_p1;
    sc_signal< sc_lv<64> > i_cast_reg_210;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter16;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter17;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter18;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter19;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter20;
    sc_signal< bool > ap_block_state24_pp0_stage0_iter21;
    sc_signal< bool > ap_block_state25_pp0_stage0_iter22;
    sc_signal< bool > ap_block_state26_pp0_stage0_iter23;
    sc_signal< bool > ap_block_state27_pp0_stage0_iter24;
    sc_signal< bool > ap_block_state28_pp0_stage0_iter25;
    sc_signal< bool > ap_block_state29_pp0_stage0_iter26;
    sc_signal< bool > ap_block_state30_pp0_stage0_iter27;
    sc_signal< bool > ap_block_state31_pp0_stage0_iter28;
    sc_signal< bool > ap_block_state32_pp0_stage0_iter29;
    sc_signal< bool > ap_block_state33_pp0_stage0_iter30;
    sc_signal< bool > ap_block_state34_pp0_stage0_iter31;
    sc_signal< bool > ap_block_state35_pp0_stage0_iter32;
    sc_signal< bool > ap_block_state36_pp0_stage0_iter33;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter1_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter2_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter3_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter4_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter5_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter6_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter7_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter8_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter9_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter10_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter11_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter12_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter13_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter14_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter15_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter16_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter17_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter18_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter19_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter20_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter21_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter22_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter23_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter24_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter25_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter26_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter27_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter28_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter29_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter30_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter31_reg;
    sc_signal< sc_lv<64> > i_cast_reg_210_pp0_iter32_reg;
    sc_signal< sc_lv<1> > exitcond_fu_178_p2;
    sc_signal< sc_lv<1> > exitcond_reg_217;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter1_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter2_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter3_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter4_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter5_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter6_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter7_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter8_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter9_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter10_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter11_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter12_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter13_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter14_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter15_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter16_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter17_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter18_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter19_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter20_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter21_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter22_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter23_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter24_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter25_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter26_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter27_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter28_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter29_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter30_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter31_reg;
    sc_signal< sc_lv<1> > exitcond_reg_217_pp0_iter32_reg;
    sc_signal< sc_lv<12> > i_39_fu_183_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > grp_fu_189_p2;
    sc_signal< sc_lv<64> > idx_reg_226;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter16_reg;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter17_reg;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter18_reg;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter19_reg;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter20_reg;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter21_reg;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter22_reg;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter23_reg;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter24_reg;
    sc_signal< sc_lv<64> > idx_reg_226_pp0_iter25_reg;
    sc_signal< sc_lv<32> > grp_fu_155_p2;
    sc_signal< sc_lv<32> > tmp_reg_258;
    sc_signal< sc_lv<32> > stdev_array_load_reg_263;
    sc_signal< sc_lv<32> > grp_fu_170_p2;
    sc_signal< sc_lv<32> > temp_reg_278;
    sc_signal< sc_lv<32> > gamma_array_load_reg_283;
    sc_signal< sc_lv<32> > beta_array_load_reg_288;
    sc_signal< sc_lv<32> > beta_array_load_reg_288_pp0_iter28_reg;
    sc_signal< sc_lv<32> > beta_array_load_reg_288_pp0_iter29_reg;
    sc_signal< sc_lv<32> > grp_fu_166_p2;
    sc_signal< sc_lv<32> > tmp_s_reg_293;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
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
    sc_signal< sc_logic > ap_enable_reg_pp0_iter33;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<32> > grp_fu_161_p2;
    sc_signal< sc_lv<12> > grp_fu_189_p0;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state37;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<32> ap_const_lv32_3;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state37();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter7();
    void thread_ap_block_state11_pp0_stage0_iter8();
    void thread_ap_block_state12_pp0_stage0_iter9();
    void thread_ap_block_state13_pp0_stage0_iter10();
    void thread_ap_block_state14_pp0_stage0_iter11();
    void thread_ap_block_state15_pp0_stage0_iter12();
    void thread_ap_block_state16_pp0_stage0_iter13();
    void thread_ap_block_state17_pp0_stage0_iter14();
    void thread_ap_block_state18_pp0_stage0_iter15();
    void thread_ap_block_state19_pp0_stage0_iter16();
    void thread_ap_block_state20_pp0_stage0_iter17();
    void thread_ap_block_state21_pp0_stage0_iter18();
    void thread_ap_block_state22_pp0_stage0_iter19();
    void thread_ap_block_state23_pp0_stage0_iter20();
    void thread_ap_block_state24_pp0_stage0_iter21();
    void thread_ap_block_state25_pp0_stage0_iter22();
    void thread_ap_block_state26_pp0_stage0_iter23();
    void thread_ap_block_state27_pp0_stage0_iter24();
    void thread_ap_block_state28_pp0_stage0_iter25();
    void thread_ap_block_state29_pp0_stage0_iter26();
    void thread_ap_block_state30_pp0_stage0_iter27();
    void thread_ap_block_state31_pp0_stage0_iter28();
    void thread_ap_block_state32_pp0_stage0_iter29();
    void thread_ap_block_state33_pp0_stage0_iter30();
    void thread_ap_block_state34_pp0_stage0_iter31();
    void thread_ap_block_state35_pp0_stage0_iter32();
    void thread_ap_block_state36_pp0_stage0_iter33();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage0_iter2();
    void thread_ap_block_state6_pp0_stage0_iter3();
    void thread_ap_block_state7_pp0_stage0_iter4();
    void thread_ap_block_state8_pp0_stage0_iter5();
    void thread_ap_block_state9_pp0_stage0_iter6();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_beta_array_address0();
    void thread_beta_array_ce0();
    void thread_exitcond_fu_178_p2();
    void thread_gamma_array_address0();
    void thread_gamma_array_ce0();
    void thread_grp_fu_189_p0();
    void thread_i_39_fu_183_p2();
    void thread_i_cast_fu_174_p1();
    void thread_inputs_array_address0();
    void thread_inputs_array_ce0();
    void thread_inputs_shape_address0();
    void thread_inputs_shape_ce0();
    void thread_mean_array_address0();
    void thread_mean_array_ce0();
    void thread_outputs_array_address0();
    void thread_outputs_array_ce0();
    void thread_outputs_array_d0();
    void thread_outputs_array_we0();
    void thread_stdev_array_address0();
    void thread_stdev_array_ce0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
