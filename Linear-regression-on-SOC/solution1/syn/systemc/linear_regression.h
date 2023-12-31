// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _linear_regression_HH_
#define _linear_regression_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "linear_regressioneOg.h"
#include "linear_regressionfYi.h"
#include "linear_regressiong8j.h"
#include "linear_regressionbkb.h"
#include "linear_regressioncud.h"
#include "linear_regression_y.h"
#include "linear_regression_AXILiteS_s_axi.h"
#include "linear_regression_gmem_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_GMEM_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_GMEM_ID_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_DATA_WIDTH = 32,
         unsigned int C_M_AXI_GMEM_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_BUSER_WIDTH = 1,
         unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 5,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct linear_regression : public sc_module {
    // Port declarations 65
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_logic > m_axi_gmem_AWVALID;
    sc_in< sc_logic > m_axi_gmem_AWREADY;
    sc_out< sc_uint<C_M_AXI_GMEM_ADDR_WIDTH> > m_axi_gmem_AWADDR;
    sc_out< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_AWID;
    sc_out< sc_lv<8> > m_axi_gmem_AWLEN;
    sc_out< sc_lv<3> > m_axi_gmem_AWSIZE;
    sc_out< sc_lv<2> > m_axi_gmem_AWBURST;
    sc_out< sc_lv<2> > m_axi_gmem_AWLOCK;
    sc_out< sc_lv<4> > m_axi_gmem_AWCACHE;
    sc_out< sc_lv<3> > m_axi_gmem_AWPROT;
    sc_out< sc_lv<4> > m_axi_gmem_AWQOS;
    sc_out< sc_lv<4> > m_axi_gmem_AWREGION;
    sc_out< sc_uint<C_M_AXI_GMEM_AWUSER_WIDTH> > m_axi_gmem_AWUSER;
    sc_out< sc_logic > m_axi_gmem_WVALID;
    sc_in< sc_logic > m_axi_gmem_WREADY;
    sc_out< sc_uint<C_M_AXI_GMEM_DATA_WIDTH> > m_axi_gmem_WDATA;
    sc_out< sc_uint<C_M_AXI_GMEM_DATA_WIDTH/8> > m_axi_gmem_WSTRB;
    sc_out< sc_logic > m_axi_gmem_WLAST;
    sc_out< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_WID;
    sc_out< sc_uint<C_M_AXI_GMEM_WUSER_WIDTH> > m_axi_gmem_WUSER;
    sc_out< sc_logic > m_axi_gmem_ARVALID;
    sc_in< sc_logic > m_axi_gmem_ARREADY;
    sc_out< sc_uint<C_M_AXI_GMEM_ADDR_WIDTH> > m_axi_gmem_ARADDR;
    sc_out< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_ARID;
    sc_out< sc_lv<8> > m_axi_gmem_ARLEN;
    sc_out< sc_lv<3> > m_axi_gmem_ARSIZE;
    sc_out< sc_lv<2> > m_axi_gmem_ARBURST;
    sc_out< sc_lv<2> > m_axi_gmem_ARLOCK;
    sc_out< sc_lv<4> > m_axi_gmem_ARCACHE;
    sc_out< sc_lv<3> > m_axi_gmem_ARPROT;
    sc_out< sc_lv<4> > m_axi_gmem_ARQOS;
    sc_out< sc_lv<4> > m_axi_gmem_ARREGION;
    sc_out< sc_uint<C_M_AXI_GMEM_ARUSER_WIDTH> > m_axi_gmem_ARUSER;
    sc_in< sc_logic > m_axi_gmem_RVALID;
    sc_out< sc_logic > m_axi_gmem_RREADY;
    sc_in< sc_uint<C_M_AXI_GMEM_DATA_WIDTH> > m_axi_gmem_RDATA;
    sc_in< sc_logic > m_axi_gmem_RLAST;
    sc_in< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_RID;
    sc_in< sc_uint<C_M_AXI_GMEM_RUSER_WIDTH> > m_axi_gmem_RUSER;
    sc_in< sc_lv<2> > m_axi_gmem_RRESP;
    sc_in< sc_logic > m_axi_gmem_BVALID;
    sc_out< sc_logic > m_axi_gmem_BREADY;
    sc_in< sc_lv<2> > m_axi_gmem_BRESP;
    sc_in< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_BID;
    sc_in< sc_uint<C_M_AXI_GMEM_BUSER_WIDTH> > m_axi_gmem_BUSER;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const7;
    sc_signal< sc_lv<1> > ap_var_for_const1;
    sc_signal< sc_lv<2> > ap_var_for_const4;
    sc_signal< sc_lv<32> > ap_var_for_const2;
    sc_signal< sc_lv<3> > ap_var_for_const3;
    sc_signal< sc_lv<4> > ap_var_for_const5;
    sc_signal< sc_lv<32> > ap_var_for_const6;
    sc_signal< sc_lv<4> > ap_var_for_const8;


    // Module declarations
    linear_regression(sc_module_name name);
    SC_HAS_PROCESS(linear_regression);

    ~linear_regression();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    linear_regression_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* linear_regression_AXILiteS_s_axi_U;
    linear_regression_gmem_m_axi<0,32,32,5,16,16,16,16,C_M_AXI_GMEM_ID_WIDTH,C_M_AXI_GMEM_ADDR_WIDTH,C_M_AXI_GMEM_DATA_WIDTH,C_M_AXI_GMEM_AWUSER_WIDTH,C_M_AXI_GMEM_ARUSER_WIDTH,C_M_AXI_GMEM_WUSER_WIDTH,C_M_AXI_GMEM_RUSER_WIDTH,C_M_AXI_GMEM_BUSER_WIDTH,C_M_AXI_GMEM_USER_VALUE,C_M_AXI_GMEM_PROT_VALUE,C_M_AXI_GMEM_CACHE_VALUE>* linear_regression_gmem_m_axi_U;
    linear_regressionbkb* x_input_U;
    linear_regressioncud* data_U;
    linear_regressioncud* data1_U;
    linear_regression_y* y_U;
    linear_regressioneOg<1,5,32,32,32>* linear_regressioneOg_U1;
    linear_regressioneOg<1,5,32,32,32>* linear_regressioneOg_U2;
    linear_regressionfYi<1,5,32,32,32>* linear_regressionfYi_U3;
    linear_regressionfYi<1,5,32,32,32>* linear_regressionfYi_U4;
    linear_regressiong8j<1,4,32,32,32>* linear_regressiong8j_U5;
    linear_regressiong8j<1,4,32,32,32>* linear_regressiong8j_U6;
    linear_regressiong8j<1,4,32,32,32>* linear_regressiong8j_U7;
    linear_regressiong8j<1,4,32,32,32>* linear_regressiong8j_U8;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<73> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<32> > input_r;
    sc_signal< sc_lv<32> > output_r;
    sc_signal< sc_logic > gmem_blk_n_AW;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<1> > icmp_ln32_fu_988_p2;
    sc_signal< sc_logic > gmem_blk_n_W;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > icmp_ln65_reg_1373;
    sc_signal< sc_logic > gmem_blk_n_B;
    sc_signal< sc_logic > ap_CS_fsm_state76;
    sc_signal< sc_logic > gmem_blk_n_AR;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > gmem_blk_n_R;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln8_reg_1139;
    sc_signal< sc_logic > gmem_AWVALID;
    sc_signal< sc_logic > gmem_AWREADY;
    sc_signal< sc_logic > gmem_WVALID;
    sc_signal< sc_logic > gmem_WREADY;
    sc_signal< sc_logic > gmem_ARVALID;
    sc_signal< sc_logic > gmem_ARREADY;
    sc_signal< sc_lv<32> > gmem_ARADDR;
    sc_signal< sc_logic > gmem_RVALID;
    sc_signal< sc_logic > gmem_RREADY;
    sc_signal< sc_lv<32> > gmem_RDATA;
    sc_signal< sc_logic > gmem_RLAST;
    sc_signal< sc_lv<1> > gmem_RID;
    sc_signal< sc_lv<1> > gmem_RUSER;
    sc_signal< sc_lv<2> > gmem_RRESP;
    sc_signal< sc_logic > gmem_BVALID;
    sc_signal< sc_logic > gmem_BREADY;
    sc_signal< sc_lv<2> > gmem_BRESP;
    sc_signal< sc_lv<1> > gmem_BID;
    sc_signal< sc_lv<1> > gmem_BUSER;
    sc_signal< sc_lv<8> > phi_ln8_reg_376;
    sc_signal< sc_lv<8> > phi_ln8_reg_376_pp0_iter1_reg;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<2> > phi_ln65_reg_628;
    sc_signal< sc_lv<32> > data1_q1;
    sc_signal< sc_lv<32> > reg_693;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_lv<32> > data1_q0;
    sc_signal< sc_lv<32> > reg_699;
    sc_signal< sc_lv<32> > grp_fu_665_p2;
    sc_signal< sc_lv<32> > reg_706;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_logic > ap_CS_fsm_state60;
    sc_signal< sc_logic > ap_CS_fsm_state64;
    sc_signal< sc_lv<32> > grp_fu_669_p2;
    sc_signal< sc_lv<32> > reg_713;
    sc_signal< sc_lv<32> > grp_fu_677_p2;
    sc_signal< sc_lv<32> > reg_720;
    sc_signal< sc_lv<32> > grp_fu_683_p2;
    sc_signal< sc_lv<32> > reg_726;
    sc_signal< sc_lv<32> > grp_fu_639_p2;
    sc_signal< sc_lv<32> > reg_732;
    sc_signal< sc_logic > ap_CS_fsm_state51;
    sc_signal< sc_logic > ap_CS_fsm_state56;
    sc_signal< sc_lv<32> > grp_fu_644_p2;
    sc_signal< sc_lv<32> > reg_738;
    sc_signal< sc_lv<30> > output3_reg_1117;
    sc_signal< sc_lv<30> > input1_reg_1122;
    sc_signal< sc_lv<32> > gmem_addr_reg_1133;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > icmp_ln8_fu_783_p2;
    sc_signal< sc_lv<1> > icmp_ln8_reg_1139_pp0_iter1_reg;
    sc_signal< sc_lv<8> > add_ln8_fu_789_p2;
    sc_signal< sc_lv<8> > add_ln8_reg_1143;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > gmem_addr_1_read_reg_1148;
    sc_signal< sc_lv<1> > xor_ln11_fu_806_p2;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<32> > select_ln11_fu_812_p3;
    sc_signal< sc_lv<32> > select_ln11_reg_1170;
    sc_signal< sc_lv<32> > select_ln11_1_fu_820_p3;
    sc_signal< sc_lv<32> > select_ln11_1_reg_1175;
    sc_signal< sc_lv<7> > add_ln12_fu_838_p2;
    sc_signal< sc_lv<7> > add_ln12_reg_1180;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > xor_ln12_fu_844_p2;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<8> > zext_ln13_fu_869_p1;
    sc_signal< sc_lv<8> > zext_ln13_reg_1193;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<7> > add_ln13_3_fu_873_p2;
    sc_signal< sc_lv<7> > add_ln13_3_reg_1198;
    sc_signal< sc_lv<1> > xor_ln13_fu_879_p2;
    sc_signal< sc_lv<1> > xor_ln13_reg_1203;
    sc_signal< sc_lv<7> > add_ln13_1_fu_885_p2;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<7> > add_ln14_fu_911_p2;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<7> > i_fu_938_p2;
    sc_signal< sc_lv<7> > i_reg_1227;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<64> > zext_ln17_fu_944_p1;
    sc_signal< sc_lv<64> > zext_ln17_reg_1232;
    sc_signal< sc_lv<1> > icmp_ln15_fu_932_p2;
    sc_signal< sc_lv<64> > zext_ln21_fu_955_p1;
    sc_signal< sc_lv<64> > zext_ln21_reg_1238;
    sc_signal< bool > ap_block_state21_io;
    sc_signal< sc_lv<11> > i_2_fu_994_p2;
    sc_signal< sc_lv<11> > i_2_reg_1257;
    sc_signal< sc_lv<7> > i_1_fu_1006_p2;
    sc_signal< sc_lv<7> > i_1_reg_1265;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<1> > icmp_ln35_fu_1000_p2;
    sc_signal< sc_lv<32> > y_q0;
    sc_signal< sc_lv<32> > y_load_reg_1285;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<7> > i_3_fu_1039_p2;
    sc_signal< sc_lv<7> > i_3_reg_1304;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<1> > icmp_ln41_fu_1033_p2;
    sc_signal< sc_lv<32> > data_q1;
    sc_signal< sc_lv<32> > data_load_reg_1329;
    sc_signal< sc_lv<32> > data_q0;
    sc_signal< sc_lv<32> > data_load_1_reg_1335;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< sc_lv<32> > grp_fu_651_p2;
    sc_signal< sc_lv<32> > grp_fu_656_p2;
    sc_signal< sc_logic > ap_CS_fsm_state69;
    sc_signal< sc_lv<1> > icmp_ln65_fu_1093_p2;
    sc_signal< bool > ap_block_state70_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state71_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state71_io;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<2> > add_ln65_fu_1099_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<32> > select_ln65_fu_1109_p3;
    sc_signal< sc_lv<32> > select_ln65_reg_1382;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state70;
    sc_signal< sc_lv<8> > x_input_address0;
    sc_signal< sc_logic > x_input_ce0;
    sc_signal< sc_logic > x_input_we0;
    sc_signal< sc_lv<32> > x_input_q0;
    sc_signal< sc_lv<8> > x_input_address1;
    sc_signal< sc_logic > x_input_ce1;
    sc_signal< sc_lv<32> > x_input_q1;
    sc_signal< sc_lv<8> > data_address0;
    sc_signal< sc_logic > data_ce0;
    sc_signal< sc_logic > data_we0;
    sc_signal< sc_lv<32> > data_d0;
    sc_signal< sc_lv<8> > data_address1;
    sc_signal< sc_logic > data_ce1;
    sc_signal< sc_logic > data_we1;
    sc_signal< sc_lv<8> > data1_address0;
    sc_signal< sc_logic > data1_ce0;
    sc_signal< sc_logic > data1_we0;
    sc_signal< sc_lv<32> > data1_d0;
    sc_signal< sc_lv<8> > data1_address1;
    sc_signal< sc_logic > data1_ce1;
    sc_signal< sc_logic > data1_we1;
    sc_signal< sc_lv<7> > y_address0;
    sc_signal< sc_logic > y_ce0;
    sc_signal< sc_logic > y_we0;
    sc_signal< sc_lv<32> > y_d0;
    sc_signal< sc_lv<8> > ap_phi_mux_phi_ln8_phi_fu_380_p4;
    sc_signal< sc_lv<1> > ap_phi_mux_phi_ln11_phi_fu_392_p4;
    sc_signal< sc_lv<1> > phi_ln11_reg_388;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<7> > phi_ln12_reg_399;
    sc_signal< sc_lv<1> > ap_phi_mux_phi_ln12_1_phi_fu_415_p4;
    sc_signal< sc_lv<1> > icmp_ln12_fu_863_p2;
    sc_signal< sc_lv<1> > phi_ln12_1_reg_411;
    sc_signal< sc_lv<1> > phi_ln13_reg_422;
    sc_signal< sc_lv<1> > icmp_ln13_fu_905_p2;
    sc_signal< sc_lv<7> > phi_mul_reg_434;
    sc_signal< sc_lv<7> > phi_ln13_1_reg_445;
    sc_signal< sc_lv<7> > phi_ln14_reg_456;
    sc_signal< sc_lv<1> > icmp_ln14_fu_922_p2;
    sc_signal< sc_lv<7> > i_0_reg_467;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<32> > theta_1_2_reg_479;
    sc_signal< sc_lv<32> > theta_0_2_reg_489;
    sc_signal< sc_lv<32> > empty_22_reg_499;
    sc_signal< sc_lv<32> > empty_23_reg_511;
    sc_signal< sc_lv<11> > i2_0_reg_523;
    sc_signal< sc_lv<32> > empty_25_reg_534;
    sc_signal< sc_lv<32> > empty_26_reg_546;
    sc_signal< sc_lv<7> > i3_0_reg_558;
    sc_signal< sc_lv<32> > empty_28_reg_569;
    sc_signal< sc_lv<32> > empty_29_reg_581;
    sc_signal< sc_lv<32> > empty_30_reg_593;
    sc_signal< sc_lv<32> > empty_31_reg_605;
    sc_signal< sc_lv<7> > i4_0_reg_617;
    sc_signal< sc_lv<64> > zext_ln8_fu_795_p1;
    sc_signal< sc_lv<64> > zext_ln12_fu_858_p1;
    sc_signal< sc_lv<64> > zext_ln13_2_fu_900_p1;
    sc_signal< sc_lv<64> > zext_ln14_fu_917_p1;
    sc_signal< sc_lv<64> > zext_ln17_1_fu_968_p1;
    sc_signal< sc_lv<64> > tmp_25_fu_979_p3;
    sc_signal< sc_lv<64> > zext_ln37_fu_1012_p1;
    sc_signal< sc_lv<64> > zext_ln38_fu_1028_p1;
    sc_signal< sc_lv<64> > zext_ln43_1_fu_1062_p1;
    sc_signal< sc_lv<64> > tmp_27_fu_1073_p3;
    sc_signal< sc_lv<64> > zext_ln43_fu_1045_p1;
    sc_signal< sc_lv<64> > zext_ln45_fu_1088_p1;
    sc_signal< sc_lv<64> > empty_5_fu_764_p1;
    sc_signal< sc_lv<64> > empty_fu_774_p1;
    sc_signal< bool > ap_block_pp1_stage0_01001;
    sc_signal< sc_lv<32> > theta_0_0_fu_162;
    sc_signal< sc_lv<32> > theta_1_0_fu_166;
    sc_signal< sc_lv<32> > grp_fu_639_p0;
    sc_signal< sc_lv<32> > grp_fu_639_p1;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_logic > ap_CS_fsm_state52;
    sc_signal< sc_logic > ap_CS_fsm_state65;
    sc_signal< sc_lv<32> > grp_fu_644_p0;
    sc_signal< sc_lv<32> > grp_fu_644_p1;
    sc_signal< sc_lv<32> > grp_fu_665_p0;
    sc_signal< sc_lv<32> > grp_fu_665_p1;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_logic > ap_CS_fsm_state57;
    sc_signal< sc_logic > ap_CS_fsm_state61;
    sc_signal< sc_lv<32> > grp_fu_669_p0;
    sc_signal< sc_lv<32> > grp_fu_669_p1;
    sc_signal< sc_lv<32> > grp_fu_677_p0;
    sc_signal< sc_lv<32> > grp_fu_677_p1;
    sc_signal< sc_lv<32> > grp_fu_683_p0;
    sc_signal< sc_lv<32> > grp_fu_683_p1;
    sc_signal< sc_lv<8> > tmp_fu_850_p3;
    sc_signal< sc_lv<8> > zext_ln13_1_fu_891_p1;
    sc_signal< sc_lv<8> > add_ln13_2_fu_895_p2;
    sc_signal< sc_lv<8> > zext_ln15_fu_928_p1;
    sc_signal< sc_lv<8> > add_ln21_fu_949_p2;
    sc_signal< sc_lv<8> > tmp_24_fu_960_p3;
    sc_signal< sc_lv<8> > or_ln18_fu_973_p2;
    sc_signal< sc_lv<8> > zext_ln37_1_fu_1018_p1;
    sc_signal< sc_lv<8> > add_ln38_fu_1022_p2;
    sc_signal< sc_lv<8> > tmp_26_fu_1054_p3;
    sc_signal< sc_lv<8> > or_ln44_fu_1067_p2;
    sc_signal< sc_lv<8> > zext_ln43_2_fu_1050_p1;
    sc_signal< sc_lv<8> > add_ln45_fu_1082_p2;
    sc_signal< sc_lv<1> > trunc_ln65_fu_1105_p1;
    sc_signal< sc_lv<2> > grp_fu_639_opcode;
    sc_signal< sc_lv<2> > grp_fu_644_opcode;
    sc_signal< sc_lv<73> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<73> ap_ST_fsm_state1;
    static const sc_lv<73> ap_ST_fsm_state2;
    static const sc_lv<73> ap_ST_fsm_state3;
    static const sc_lv<73> ap_ST_fsm_state4;
    static const sc_lv<73> ap_ST_fsm_state5;
    static const sc_lv<73> ap_ST_fsm_state6;
    static const sc_lv<73> ap_ST_fsm_state7;
    static const sc_lv<73> ap_ST_fsm_state8;
    static const sc_lv<73> ap_ST_fsm_pp0_stage0;
    static const sc_lv<73> ap_ST_fsm_state12;
    static const sc_lv<73> ap_ST_fsm_state13;
    static const sc_lv<73> ap_ST_fsm_state14;
    static const sc_lv<73> ap_ST_fsm_state15;
    static const sc_lv<73> ap_ST_fsm_state16;
    static const sc_lv<73> ap_ST_fsm_state17;
    static const sc_lv<73> ap_ST_fsm_state18;
    static const sc_lv<73> ap_ST_fsm_state19;
    static const sc_lv<73> ap_ST_fsm_state20;
    static const sc_lv<73> ap_ST_fsm_state21;
    static const sc_lv<73> ap_ST_fsm_state22;
    static const sc_lv<73> ap_ST_fsm_state23;
    static const sc_lv<73> ap_ST_fsm_state24;
    static const sc_lv<73> ap_ST_fsm_state25;
    static const sc_lv<73> ap_ST_fsm_state26;
    static const sc_lv<73> ap_ST_fsm_state27;
    static const sc_lv<73> ap_ST_fsm_state28;
    static const sc_lv<73> ap_ST_fsm_state29;
    static const sc_lv<73> ap_ST_fsm_state30;
    static const sc_lv<73> ap_ST_fsm_state31;
    static const sc_lv<73> ap_ST_fsm_state32;
    static const sc_lv<73> ap_ST_fsm_state33;
    static const sc_lv<73> ap_ST_fsm_state34;
    static const sc_lv<73> ap_ST_fsm_state35;
    static const sc_lv<73> ap_ST_fsm_state36;
    static const sc_lv<73> ap_ST_fsm_state37;
    static const sc_lv<73> ap_ST_fsm_state38;
    static const sc_lv<73> ap_ST_fsm_state39;
    static const sc_lv<73> ap_ST_fsm_state40;
    static const sc_lv<73> ap_ST_fsm_state41;
    static const sc_lv<73> ap_ST_fsm_state42;
    static const sc_lv<73> ap_ST_fsm_state43;
    static const sc_lv<73> ap_ST_fsm_state44;
    static const sc_lv<73> ap_ST_fsm_state45;
    static const sc_lv<73> ap_ST_fsm_state46;
    static const sc_lv<73> ap_ST_fsm_state47;
    static const sc_lv<73> ap_ST_fsm_state48;
    static const sc_lv<73> ap_ST_fsm_state49;
    static const sc_lv<73> ap_ST_fsm_state50;
    static const sc_lv<73> ap_ST_fsm_state51;
    static const sc_lv<73> ap_ST_fsm_state52;
    static const sc_lv<73> ap_ST_fsm_state53;
    static const sc_lv<73> ap_ST_fsm_state54;
    static const sc_lv<73> ap_ST_fsm_state55;
    static const sc_lv<73> ap_ST_fsm_state56;
    static const sc_lv<73> ap_ST_fsm_state57;
    static const sc_lv<73> ap_ST_fsm_state58;
    static const sc_lv<73> ap_ST_fsm_state59;
    static const sc_lv<73> ap_ST_fsm_state60;
    static const sc_lv<73> ap_ST_fsm_state61;
    static const sc_lv<73> ap_ST_fsm_state62;
    static const sc_lv<73> ap_ST_fsm_state63;
    static const sc_lv<73> ap_ST_fsm_state64;
    static const sc_lv<73> ap_ST_fsm_state65;
    static const sc_lv<73> ap_ST_fsm_state66;
    static const sc_lv<73> ap_ST_fsm_state67;
    static const sc_lv<73> ap_ST_fsm_state68;
    static const sc_lv<73> ap_ST_fsm_state69;
    static const sc_lv<73> ap_ST_fsm_pp1_stage0;
    static const sc_lv<73> ap_ST_fsm_state72;
    static const sc_lv<73> ap_ST_fsm_state73;
    static const sc_lv<73> ap_ST_fsm_state74;
    static const sc_lv<73> ap_ST_fsm_state75;
    static const sc_lv<73> ap_ST_fsm_state76;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_43;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_48;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_M_AXI_GMEM_USER_VALUE;
    static const int C_M_AXI_GMEM_PROT_VALUE;
    static const int C_M_AXI_GMEM_CACHE_VALUE;
    static const int C_M_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<32> ap_const_lv32_3D;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_42;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_C2;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<32> ap_const_lv32_3F800000;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<32> ap_const_lv32_3C23D70A;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_3A;
    static const sc_lv<8> ap_const_lv8_C2;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<7> ap_const_lv7_60;
    static const sc_lv<7> ap_const_lv7_61;
    static const sc_lv<8> ap_const_lv8_61;
    static const sc_lv<56> ap_const_lv56_0;
    static const sc_lv<11> ap_const_lv11_5DC;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const7();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const6();
    void thread_ap_var_for_const8();
    void thread_ap_clk_no_reset_();
    void thread_add_ln12_fu_838_p2();
    void thread_add_ln13_1_fu_885_p2();
    void thread_add_ln13_2_fu_895_p2();
    void thread_add_ln13_3_fu_873_p2();
    void thread_add_ln14_fu_911_p2();
    void thread_add_ln21_fu_949_p2();
    void thread_add_ln38_fu_1022_p2();
    void thread_add_ln45_fu_1082_p2();
    void thread_add_ln65_fu_1099_p2();
    void thread_add_ln8_fu_789_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state51();
    void thread_ap_CS_fsm_state52();
    void thread_ap_CS_fsm_state56();
    void thread_ap_CS_fsm_state57();
    void thread_ap_CS_fsm_state60();
    void thread_ap_CS_fsm_state61();
    void thread_ap_CS_fsm_state64();
    void thread_ap_CS_fsm_state65();
    void thread_ap_CS_fsm_state69();
    void thread_ap_CS_fsm_state76();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_01001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter1();
    void thread_ap_block_state11_pp0_stage0_iter2();
    void thread_ap_block_state21_io();
    void thread_ap_block_state70_pp1_stage0_iter0();
    void thread_ap_block_state71_io();
    void thread_ap_block_state71_pp1_stage0_iter1();
    void thread_ap_block_state9_pp0_stage0_iter0();
    void thread_ap_condition_pp0_exit_iter0_state9();
    void thread_ap_condition_pp1_exit_iter0_state70();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_phi_ln11_phi_fu_392_p4();
    void thread_ap_phi_mux_phi_ln12_1_phi_fu_415_p4();
    void thread_ap_phi_mux_phi_ln8_phi_fu_380_p4();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_data1_address0();
    void thread_data1_address1();
    void thread_data1_ce0();
    void thread_data1_ce1();
    void thread_data1_d0();
    void thread_data1_we0();
    void thread_data1_we1();
    void thread_data_address0();
    void thread_data_address1();
    void thread_data_ce0();
    void thread_data_ce1();
    void thread_data_d0();
    void thread_data_we0();
    void thread_data_we1();
    void thread_empty_5_fu_764_p1();
    void thread_empty_fu_774_p1();
    void thread_gmem_ARADDR();
    void thread_gmem_ARVALID();
    void thread_gmem_AWVALID();
    void thread_gmem_BREADY();
    void thread_gmem_RREADY();
    void thread_gmem_WVALID();
    void thread_gmem_blk_n_AR();
    void thread_gmem_blk_n_AW();
    void thread_gmem_blk_n_B();
    void thread_gmem_blk_n_R();
    void thread_gmem_blk_n_W();
    void thread_grp_fu_639_opcode();
    void thread_grp_fu_639_p0();
    void thread_grp_fu_639_p1();
    void thread_grp_fu_644_opcode();
    void thread_grp_fu_644_p0();
    void thread_grp_fu_644_p1();
    void thread_grp_fu_665_p0();
    void thread_grp_fu_665_p1();
    void thread_grp_fu_669_p0();
    void thread_grp_fu_669_p1();
    void thread_grp_fu_677_p0();
    void thread_grp_fu_677_p1();
    void thread_grp_fu_683_p0();
    void thread_grp_fu_683_p1();
    void thread_i_1_fu_1006_p2();
    void thread_i_2_fu_994_p2();
    void thread_i_3_fu_1039_p2();
    void thread_i_fu_938_p2();
    void thread_icmp_ln12_fu_863_p2();
    void thread_icmp_ln13_fu_905_p2();
    void thread_icmp_ln14_fu_922_p2();
    void thread_icmp_ln15_fu_932_p2();
    void thread_icmp_ln32_fu_988_p2();
    void thread_icmp_ln35_fu_1000_p2();
    void thread_icmp_ln41_fu_1033_p2();
    void thread_icmp_ln65_fu_1093_p2();
    void thread_icmp_ln8_fu_783_p2();
    void thread_or_ln18_fu_973_p2();
    void thread_or_ln44_fu_1067_p2();
    void thread_select_ln11_1_fu_820_p3();
    void thread_select_ln11_fu_812_p3();
    void thread_select_ln65_fu_1109_p3();
    void thread_tmp_24_fu_960_p3();
    void thread_tmp_25_fu_979_p3();
    void thread_tmp_26_fu_1054_p3();
    void thread_tmp_27_fu_1073_p3();
    void thread_tmp_fu_850_p3();
    void thread_trunc_ln65_fu_1105_p1();
    void thread_x_input_address0();
    void thread_x_input_address1();
    void thread_x_input_ce0();
    void thread_x_input_ce1();
    void thread_x_input_we0();
    void thread_xor_ln11_fu_806_p2();
    void thread_xor_ln12_fu_844_p2();
    void thread_xor_ln13_fu_879_p2();
    void thread_y_address0();
    void thread_y_ce0();
    void thread_y_d0();
    void thread_y_we0();
    void thread_zext_ln12_fu_858_p1();
    void thread_zext_ln13_1_fu_891_p1();
    void thread_zext_ln13_2_fu_900_p1();
    void thread_zext_ln13_fu_869_p1();
    void thread_zext_ln14_fu_917_p1();
    void thread_zext_ln15_fu_928_p1();
    void thread_zext_ln17_1_fu_968_p1();
    void thread_zext_ln17_fu_944_p1();
    void thread_zext_ln21_fu_955_p1();
    void thread_zext_ln37_1_fu_1018_p1();
    void thread_zext_ln37_fu_1012_p1();
    void thread_zext_ln38_fu_1028_p1();
    void thread_zext_ln43_1_fu_1062_p1();
    void thread_zext_ln43_2_fu_1050_p1();
    void thread_zext_ln43_fu_1045_p1();
    void thread_zext_ln45_fu_1088_p1();
    void thread_zext_ln8_fu_795_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
