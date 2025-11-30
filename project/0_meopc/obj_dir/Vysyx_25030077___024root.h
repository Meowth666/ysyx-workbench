// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25030077.h for the primary calling header

#ifndef VERILATED_VYSYX_25030077___024ROOT_H_
#define VERILATED_VYSYX_25030077___024ROOT_H_  // guard

#include "verilated.h"


class Vysyx_25030077__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25030077___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_interrupt,0,0);
        VL_IN8(io_master_awready,0,0);
        VL_OUT8(io_master_awvalid,0,0);
        VL_OUT8(io_master_awid,3,0);
        VL_OUT8(io_master_awlen,7,0);
        VL_OUT8(io_master_awsize,2,0);
        VL_OUT8(io_master_awburst,1,0);
        VL_IN8(io_master_wready,0,0);
        VL_OUT8(io_master_wvalid,0,0);
        VL_OUT8(io_master_wstrb,3,0);
        VL_OUT8(io_master_wlast,0,0);
        VL_OUT8(io_master_bready,0,0);
        VL_IN8(io_master_bvalid,0,0);
        VL_IN8(io_master_bid,3,0);
        VL_IN8(io_master_bresp,1,0);
        VL_IN8(io_master_arready,0,0);
        VL_OUT8(io_master_arvalid,0,0);
        VL_OUT8(io_master_arid,3,0);
        VL_OUT8(io_master_arlen,7,0);
        VL_OUT8(io_master_arsize,2,0);
        VL_OUT8(io_master_arburst,1,0);
        VL_OUT8(io_master_rready,0,0);
        VL_IN8(io_master_rvalid,0,0);
        VL_IN8(io_master_rid,3,0);
        VL_IN8(io_master_rlast,0,0);
        VL_IN8(io_master_rresp,1,0);
        VL_OUT8(io_master_arlock,0,0);
        VL_OUT8(io_master_arcache,3,0);
        VL_OUT8(io_master_arprot,2,0);
        VL_OUT8(io_master_arqos,3,0);
        VL_OUT8(io_master_awlock,0,0);
        VL_OUT8(io_master_awcache,3,0);
        VL_OUT8(io_master_awprot,2,0);
        VL_OUT8(io_master_awqos,3,0);
        VL_IN8(io_slave_arlock,0,0);
        VL_IN8(io_slave_arcache,3,0);
        VL_IN8(io_slave_arprot,2,0);
        VL_IN8(io_slave_arqos,3,0);
        VL_IN8(io_slave_awlock,0,0);
        VL_IN8(io_slave_awcache,3,0);
        VL_IN8(io_slave_awprot,2,0);
        VL_IN8(io_slave_awqos,3,0);
        VL_OUT8(io_slave_awready,0,0);
        VL_IN8(io_slave_awvalid,0,0);
        VL_IN8(io_slave_awid,3,0);
        VL_IN8(io_slave_awlen,7,0);
        VL_IN8(io_slave_awsize,2,0);
        VL_IN8(io_slave_awburst,1,0);
        VL_OUT8(io_slave_wready,0,0);
        VL_IN8(io_slave_wvalid,0,0);
        VL_IN8(io_slave_wstrb,3,0);
        VL_IN8(io_slave_wlast,0,0);
        VL_IN8(io_slave_bready,0,0);
        VL_OUT8(io_slave_bvalid,0,0);
        VL_OUT8(io_slave_bid,3,0);
        VL_OUT8(io_slave_bresp,1,0);
        VL_OUT8(io_slave_arready,0,0);
        VL_IN8(io_slave_arvalid,0,0);
        VL_IN8(io_slave_arid,3,0);
        VL_IN8(io_slave_arlen,7,0);
        VL_IN8(io_slave_arsize,2,0);
        VL_IN8(io_slave_arburst,1,0);
    };
    struct {
        VL_IN8(io_slave_rready,0,0);
        VL_OUT8(io_slave_rvalid,0,0);
        VL_OUT8(io_slave_rid,3,0);
        VL_OUT8(io_slave_rlast,0,0);
        VL_OUT8(io_slave_rresp,1,0);
        CData/*2:0*/ ysyx_25030077__DOT__c_arbiter_io_r_mask;
        CData/*2:0*/ ysyx_25030077__DOT__c_arbiter_io_w_mask;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter_io_r_valid_lsu;
        CData/*2:0*/ ysyx_25030077__DOT__d_idu_io_imm_type;
        CData/*4:0*/ ysyx_25030077__DOT__d_idu_io_rs1;
        CData/*4:0*/ ysyx_25030077__DOT__d_idu_io_rs2;
        CData/*4:0*/ ysyx_25030077__DOT__d_idu_io_rd;
        CData/*2:0*/ ysyx_25030077__DOT__d_idu_io_data_control;
        CData/*3:0*/ ysyx_25030077__DOT__d_idu_io_ALU_ctrl;
        CData/*3:0*/ ysyx_25030077__DOT__d_idu_io_pc_next_type;
        CData/*0:0*/ ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en;
        CData/*0:0*/ ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full;
        CData/*0:0*/ ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__do_deq;
        CData/*1:0*/ ysyx_25030077__DOT__c_arbiter__DOT__state_reg;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__validReg_aw1;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar0;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar1;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__validReg_gpr;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__validReg_w1;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___validReg_ar0_T_1;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___validReg_ar1_T;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___validReg_ar1_T_1;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___validReg_aw1_T_1;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___validReg_w1_T_1;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__is_clint;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___validReg_gpr_T_8;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___io_axi_ar_addr_T;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___state_reg_T;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___state_reg_T_5;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___io_axi_aw_valid_T_2;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___io_axi_ar_valid_T_3;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_1;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_2;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_3;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_4;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_5;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_6;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_7;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_8;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_9;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_10;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_11;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_12;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_13;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_14;
        CData/*0:0*/ ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_15;
        CData/*0:0*/ ysyx_25030077__DOT__f_gpr__DOT__validReg;
        CData/*0:0*/ ysyx_25030077__DOT__f_gpr__DOT___validReg_T;
        CData/*0:0*/ ysyx_25030077__DOT__f_gpr__DOT___validReg_T_1;
        CData/*0:0*/ ysyx_25030077__DOT__j_pc_next__DOT__is_eql;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2;
        SData/*15:0*/ ysyx_25030077__DOT__d_idu__DOT___issrai_T_3;
        VL_OUT(io_master_awaddr,31,0);
    };
    struct {
        VL_OUT(io_master_wdata,31,0);
        VL_OUT(io_master_araddr,31,0);
        VL_IN(io_master_rdata,31,0);
        VL_IN(io_slave_awaddr,31,0);
        VL_IN(io_slave_wdata,31,0);
        VL_IN(io_slave_araddr,31,0);
        VL_OUT(io_slave_rdata,31,0);
        IData/*31:0*/ ysyx_25030077__DOT__c_arbiter_io_rs1_data;
        IData/*31:0*/ ysyx_25030077__DOT__c_arbiter_io_rs2_data;
        IData/*31:0*/ ysyx_25030077__DOT__c_arbiter_io_imm;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr_io_pc_next;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr_io_wdata_rd;
        IData/*31:0*/ ysyx_25030077__DOT__h_data_control_io_data_1;
        IData/*31:0*/ ysyx_25030077__DOT__h_data_control_io_data_2;
        IData/*31:0*/ ysyx_25030077__DOT__c_arbiter__DOT__inst_reg;
        IData/*31:0*/ ysyx_25030077__DOT__c_arbiter__DOT__rdata_reg;
        IData/*31:0*/ ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_29;
        IData/*31:0*/ ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_57;
        IData/*31:0*/ ysyx_25030077__DOT__c_arbiter__DOT__rdata_sram;
        IData/*16:0*/ ysyx_25030077__DOT__d_idu__DOT___isadd_T_3;
        IData/*31:0*/ ysyx_25030077__DOT__e_imm__DOT__Imm_type1;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_0;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_1;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_2;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_3;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_4;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_5;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_6;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_7;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_8;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_9;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_10;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_11;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_12;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_13;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_14;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_15;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_16;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_17;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_18;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_19;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_20;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_21;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_22;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_23;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_24;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_25;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_26;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_27;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_28;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_29;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_30;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__regs_31;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg;
        IData/*31:0*/ ysyx_25030077__DOT__f_gpr__DOT___GEN_94;
        IData/*31:0*/ ysyx_25030077__DOT__i_alu__DOT__csr_data;
        IData/*31:0*/ ysyx_25030077__DOT__j_pc_next__DOT__ecall_dnpc;
        IData/*31:0*/ ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9;
        IData/*31:0*/ __Vfunc_ysyx_25030077__DOT__i_alu__DOT__csr_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_25030077__DOT__j_pc_next__DOT__ecall_read__1__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_25030077__DOT__c_arbiter__DOT__clint_reg;
        QData/*32:0*/ ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T;
        QData/*63:0*/ ysyx_25030077__DOT__c_arbiter__DOT___clint_reg_T_1;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 1> ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25030077__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25030077___024root(Vysyx_25030077__Syms* symsp, const char* v__name);
    ~Vysyx_25030077___024root();
    VL_UNCOPYABLE(Vysyx_25030077___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
