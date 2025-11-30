// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25030077.h for the primary calling header

#include "Vysyx_25030077__pch.h"
#include "Vysyx_25030077___024root.h"

VL_ATTR_COLD void Vysyx_25030077___024root___eval_static(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___eval_static\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vysyx_25030077___024root___eval_initial__TOP(Vysyx_25030077___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25030077___024root___eval_initial(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___eval_initial\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25030077___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vysyx_25030077___024root___eval_initial__TOP(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___eval_initial__TOP\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_master_awid = 0U;
    vlSelfRef.io_master_awlen = 0U;
    vlSelfRef.io_master_awburst = 0U;
    vlSelfRef.io_master_wlast = 1U;
    vlSelfRef.io_master_arid = 0U;
    vlSelfRef.io_master_arlen = 0U;
    vlSelfRef.io_master_arburst = 0U;
    vlSelfRef.io_master_arlock = 0U;
    vlSelfRef.io_master_arcache = 0U;
    vlSelfRef.io_master_arprot = 0U;
    vlSelfRef.io_master_arqos = 0U;
    vlSelfRef.io_master_awlock = 0U;
    vlSelfRef.io_master_awcache = 0U;
    vlSelfRef.io_master_awprot = 0U;
    vlSelfRef.io_master_awqos = 0U;
    vlSelfRef.io_slave_awready = 0U;
    vlSelfRef.io_slave_wready = 0U;
    vlSelfRef.io_slave_bvalid = 0U;
    vlSelfRef.io_slave_bid = 0U;
    vlSelfRef.io_slave_bresp = 0U;
    vlSelfRef.io_slave_arready = 0U;
    vlSelfRef.io_slave_rvalid = 0U;
    vlSelfRef.io_slave_rdata = 0U;
    vlSelfRef.io_slave_rid = 0U;
    vlSelfRef.io_slave_rlast = 0U;
    vlSelfRef.io_slave_rresp = 0U;
}

VL_ATTR_COLD void Vysyx_25030077___024root___eval_final(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___eval_final\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030077___024root___dump_triggers__stl(Vysyx_25030077___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25030077___024root___eval_phase__stl(Vysyx_25030077___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25030077___024root___eval_settle(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___eval_settle\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25030077___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25030077.v", 1881, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_25030077___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030077___024root___dump_triggers__stl(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___dump_triggers__stl\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25030077___024root___stl_sequent__TOP__0(Vysyx_25030077___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25030077___024root____Vm_traceActivitySetAll(Vysyx_25030077___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25030077___024root___eval_stl(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___eval_stl\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_25030077___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_25030077___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void Vysyx_25030077___024root____Vdpiimwrap_ysyx_25030077__DOT__j_pc_next__DOT__ecall_read_TOP(IData/*31:0*/ pc, CData/*3:0*/ type_p, IData/*31:0*/ &ecall_read__Vfuncrtn);
void Vysyx_25030077___024root____Vdpiimwrap_ysyx_25030077__DOT__i_alu__DOT__csr_read_TOP(IData/*31:0*/ rs1, IData/*31:0*/ imm, CData/*3:0*/ sw, IData/*31:0*/ &csr_read__Vfuncrtn);

VL_ATTR_COLD void Vysyx_25030077___024root___stl_sequent__TOP__0(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___stl_sequent__TOP__0\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_axi_ar_addr_T 
        = (1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg));
    vlSelfRef.io_master_bready = vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0;
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___state_reg_T 
        = (0U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg));
    vlSelfRef.io_master_rready = vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0;
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___validReg_gpr_T_8 
        = (2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___clint_reg_T_1 
        = (1ULL + vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__clint_reg);
    vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT___validReg_T 
        = ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg)) 
           & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_gpr));
    vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full)) 
           & (IData)(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__validReg));
    vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__do_deq 
        = ((IData)(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full) 
           & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___validReg_ar0_T_1 
        = ((~ (IData)(vlSelfRef.io_master_arready)) 
           & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar0));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___validReg_ar1_T 
        = ((IData)(vlSelfRef.io_master_rvalid) & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___validReg_ar1_T_1 
        = ((~ (IData)(vlSelfRef.io_master_arready)) 
           & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar1));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___validReg_aw1_T_1 
        = ((~ (IData)(vlSelfRef.io_master_awready)) 
           & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_aw1));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___validReg_w1_T_1 
        = ((~ (IData)(vlSelfRef.io_master_wready)) 
           & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_w1));
    vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT___validReg_T_1 
        = ((IData)(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full) 
           & (IData)(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__validReg));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_29 
        = ((((0x8000U & vlSelfRef.io_master_rdata) ? 0xffffU
              : 0U) << 0x10U) | (0xffffU & vlSelfRef.io_master_rdata));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_57 
        = ((((0x80U & vlSelfRef.io_master_rdata) ? 0xffffffU
              : 0U) << 8U) | (0xffU & vlSelfRef.io_master_rdata));
    vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9 
        = (vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg 
           + ((((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                 >> 0x1fU) ? 0x7ffffU : 0U) << 0xdU) 
              | (((0x1000U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                              >> 0x13U)) | (0x800U 
                                            & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                               << 4U))) 
                 | ((0x7e0U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                               >> 0x14U)) | (0x1eU 
                                             & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                >> 7U))))));
    vlSelfRef.ysyx_25030077__DOT__e_imm__DOT__Imm_type1 
        = ((((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
              >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) | 
           (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
            >> 0x14U));
    vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2 
        = ((0x380U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 5U)) | (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask 
        = ((0x103U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
            ? 1U : ((0x83U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                     ? 3U : ((0x283U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                              ? 4U : ((0x203U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                       ? 2U : ((3U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                ? 5U
                                                : 0U)))));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_valid_lsu 
        = ((0x103U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2)) 
           | ((0x83U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2)) 
              | ((0x283U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2)) 
                 | ((0x203U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2)) 
                    | (3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))))));
    vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3 
        = ((0x1fc00U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU)) | (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2));
    vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3 
        = ((0xfc00U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                       >> 0x10U)) | (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2));
    if ((0x123U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask = 1U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
    } else if ((0x23U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask = 3U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
    } else if ((0xa3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask = 2U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0x14U));
    } else {
        vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask = 0U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2 
            = (0x1fU & ((0x33U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                         ? (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                            >> 0x14U) : ((0x3b3U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                          ? (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                             >> 0x14U)
                                          : ((0xb3U 
                                              == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                              ? (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                 >> 0x14U)
                                              : ((0x42b3U 
                                                  == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                  ? 
                                                 (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0x14U)
                                                  : 
                                                 ((0x2b3U 
                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                   ? 
                                                  (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0x14U)
                                                   : 
                                                  ((0x233U 
                                                    == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                    ? 
                                                   (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 0x14U)
                                                    : 
                                                   ((0x333U 
                                                     == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                     ? 
                                                    (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 0x14U)
                                                     : 
                                                    ((0x8033U 
                                                      == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                      ? 
                                                     (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0x14U)
                                                      : 
                                                     ((0x63U 
                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 
                                                      (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 0x14U)
                                                       : 
                                                      ((0x2e3U 
                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 
                                                       (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x263U 
                                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 
                                                        (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x363U 
                                                          == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                          ? 
                                                         (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 0x14U)
                                                          : 
                                                         ((0x3e3U 
                                                           == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                           ? 
                                                          (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 0x14U)
                                                           : 
                                                          ((0xe3U 
                                                            == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 
                                                           (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                            >> 0x14U)
                                                            : 
                                                           ((0x1b3U 
                                                             == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                             ? 
                                                            (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 0x14U)
                                                             : 
                                                            ((0x133U 
                                                              == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                              ? 
                                                             (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                              >> 0x14U)
                                                              : 0U)))))))))))))))));
    }
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_axi_ar_valid_T_3 
        = ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg)) 
           & (0U != (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_axi_aw_valid_T_2 
        = ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg)) 
           & (0U != (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask)));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___state_reg_T_5 
        = ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_valid_lsu) 
           & (0U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask)));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1 
        = ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_valid_lsu) 
           & (2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg)));
    if ((0x13U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x213U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 4U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x313U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 3U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x393U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 6U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0xf3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0xbU;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 6U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x173U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0xcU;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 6U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x4293U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 5U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 5U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x293U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 9U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 5U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x93U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 8U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 5U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x193U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 2U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else if ((0x113U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0xaU;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd = 
            (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                      >> 7U));
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                        >> 0xfU));
    } else {
        if ((0x37U == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))) {
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd 
                = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                            >> 7U));
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 2U;
        } else if ((0x17U == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))) {
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd 
                = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                            >> 7U));
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 2U;
        } else if ((0x6fU == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))) {
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd 
                = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                            >> 7U));
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 3U;
        } else if ((0x67U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd 
                = (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                            >> 7U));
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 3U;
        } else {
            if ((0x123U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 4U;
            } else if ((0x23U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 4U;
            } else if ((0xa3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 4U;
            } else if ((0x103U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
            } else if ((0x83U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
            } else if ((0x283U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
            } else if ((0x203U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
            } else if ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))) {
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl = 0U;
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 1U;
            } else {
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl 
                    = ((0x33U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                        ? 0U : ((0x3b3U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                 ? 6U : ((0xb3U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                          ? 8U : ((0x42b3U 
                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                   ? 5U
                                                   : 
                                                  ((0x2b3U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                    ? 9U
                                                    : 
                                                   ((0x233U 
                                                     == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                     ? 4U
                                                     : 
                                                    ((0x333U 
                                                      == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                      ? 3U
                                                      : 
                                                     ((0x8033U 
                                                       == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                       ? 1U
                                                       : 
                                                      ((0x63U 
                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 0U
                                                        : 
                                                       ((0x2e3U 
                                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 0U
                                                         : 
                                                        ((0x263U 
                                                          == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                          ? 0U
                                                          : 
                                                         ((0x363U 
                                                           == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                           ? 0U
                                                           : 
                                                          ((0x3e3U 
                                                            == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 0U
                                                            : 
                                                           ((0xe3U 
                                                             == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 0U
                                                             : 
                                                            ((0x133U 
                                                              == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                              ? 0xaU
                                                              : 
                                                             ((0x1b3U 
                                                               == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                               ? 2U
                                                               : 0U))))))))))))))));
                vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type = 0U;
            }
            vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd 
                = (0x1fU & ((0x103U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                             ? (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                >> 7U) : ((0x83U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                           ? (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                              >> 7U)
                                           : ((0x283U 
                                               == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                               ? (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 7U)
                                               : ((0x203U 
                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 
                                                  (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 7U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 
                                                   (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 7U)
                                                    : 
                                                   ((0x33U 
                                                     == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                     ? 
                                                    (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 7U)
                                                     : 
                                                    ((0x3b3U 
                                                      == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                      ? 
                                                     (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 7U)
                                                      : 
                                                     ((0xb3U 
                                                       == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                       ? 
                                                      (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 7U)
                                                       : 
                                                      ((0x42b3U 
                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                        ? 
                                                       (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 7U)
                                                        : 
                                                       ((0x2b3U 
                                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                         ? 
                                                        (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                         >> 7U)
                                                         : 
                                                        ((0x233U 
                                                          == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                          ? 
                                                         (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 7U)
                                                          : 
                                                         ((0x333U 
                                                           == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                           ? 
                                                          (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 7U)
                                                           : 
                                                          ((0x8033U 
                                                            == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                            ? 
                                                           (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                            >> 7U)
                                                            : 
                                                           ((0x1b3U 
                                                             == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                             ? 
                                                            (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 7U)
                                                             : 
                                                            ((0x133U 
                                                              == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                              ? 
                                                             (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                              >> 7U)
                                                              : 0U))))))))))))))));
        }
        vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1 
            = (0x1fU & ((0x67U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                         ? (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                            >> 0xfU) : ((0x123U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                         ? (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                            >> 0xfU)
                                         : ((0x23U 
                                             == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                             ? (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                >> 0xfU)
                                             : ((0xa3U 
                                                 == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                 ? 
                                                (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                 >> 0xfU)
                                                 : 
                                                ((0x103U 
                                                  == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                  ? 
                                                 (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0xfU)
                                                  : 
                                                 ((0x83U 
                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                   ? 
                                                  (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0xfU)
                                                   : 
                                                  ((0x283U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 
                                                   (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x203U 
                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 
                                                    (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 0xfU)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 
                                                     (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x33U 
                                                       == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                       ? 
                                                      (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x3b3U 
                                                        == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                        ? 
                                                       (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                        >> 0xfU)
                                                        : 
                                                       ((0xb3U 
                                                         == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                         ? 
                                                        (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                         >> 0xfU)
                                                         : 
                                                        ((0x42b3U 
                                                          == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                          ? 
                                                         (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                          >> 0xfU)
                                                          : 
                                                         ((0x2b3U 
                                                           == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                           ? 
                                                          (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                           >> 0xfU)
                                                           : 
                                                          ((0x233U 
                                                            == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                            ? 
                                                           (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                            >> 0xfU)
                                                            : 
                                                           ((0x333U 
                                                             == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                             ? 
                                                            (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                             >> 0xfU)
                                                             : 
                                                            ((0x8033U 
                                                              == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                              ? 
                                                             (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                              >> 0xfU)
                                                              : 
                                                             ((0x63U 
                                                               == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                               ? 
                                                              (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                               >> 0xfU)
                                                               : 
                                                              ((0x2e3U 
                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                ? 
                                                               (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                                >> 0xfU)
                                                                : 
                                                               ((0x263U 
                                                                 == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                 ? 
                                                                (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                                 >> 0xfU)
                                                                 : 
                                                                ((0x363U 
                                                                  == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                  ? 
                                                                 (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                                  >> 0xfU)
                                                                  : 
                                                                 ((0x3e3U 
                                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                   ? 
                                                                  (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                                   >> 0xfU)
                                                                   : 
                                                                  ((0xe3U 
                                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                    ? 
                                                                   (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                                    >> 0xfU)
                                                                    : 
                                                                   ((0x1b3U 
                                                                     == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                     ? 
                                                                    (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                                     >> 0xfU)
                                                                     : 
                                                                    ((0x133U 
                                                                      == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                      ? 
                                                                     (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                                      >> 0xfU)
                                                                      : 0U))))))))))))))))))))))))));
    }
    vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type 
        = ((0x6fU == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))
            ? 1U : ((0x67U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                     ? 2U : ((0x17U == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))
                              ? 0U : ((0x37U == (0x7fU 
                                                 & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))
                                       ? 0U : ((0x13U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                ? 0U
                                                : (
                                                   (0x213U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 0U
                                                    : 
                                                   ((0x313U 
                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 0U
                                                     : 
                                                    ((0x393U 
                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 0U
                                                      : 
                                                     ((0xf3U 
                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 0U
                                                       : 
                                                      ((0x173U 
                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 0U
                                                        : 
                                                       ((0x4293U 
                                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                         ? 0U
                                                         : 
                                                        ((0x293U 
                                                          == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                          ? 0U
                                                          : 
                                                         ((0x93U 
                                                           == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                           ? 0U
                                                           : 
                                                          ((0x123U 
                                                            == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                            ? 0U
                                                            : 
                                                           ((0x23U 
                                                             == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                             ? 0U
                                                             : 
                                                            ((0xa3U 
                                                              == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                              ? 0U
                                                              : 
                                                             ((0x100073U 
                                                               == vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)
                                                               ? 4U
                                                               : 
                                                              ((0x73U 
                                                                == vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)
                                                                ? 0xbU
                                                                : 
                                                               ((0x30200073U 
                                                                 == vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)
                                                                 ? 0xcU
                                                                 : 
                                                                ((0x103U 
                                                                  == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x83U 
                                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x283U 
                                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x203U 
                                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                     ? 0U
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                      ? 0U
                                                                      : 
                                                                     ((0x33U 
                                                                       == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                       ? 0U
                                                                       : 
                                                                      ((0x3b3U 
                                                                        == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                        ? 0U
                                                                        : 
                                                                       ((0xb3U 
                                                                         == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                         ? 0U
                                                                         : 
                                                                        ((0x42b3U 
                                                                          == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                                          ? 0U
                                                                          : 
                                                                         ((0x2b3U 
                                                                           == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                                           ? 0U
                                                                           : 
                                                                          ((0x233U 
                                                                            == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                            ? 0U
                                                                            : 
                                                                           ((0x333U 
                                                                             == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                             ? 0U
                                                                             : 
                                                                            ((0x8033U 
                                                                              == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                              ? 0U
                                                                              : 
                                                                             ((0x63U 
                                                                               == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                               ? 6U
                                                                               : 
                                                                              ((0x2e3U 
                                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                                ? 7U
                                                                                : 
                                                                               ((0x263U 
                                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x363U 
                                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0x3e3U 
                                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0xe3U 
                                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x1b3U 
                                                                                == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x133U 
                                                                                == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x193U 
                                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x113U 
                                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                                 ? 0U
                                                                                 : 3U))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control 
        = ((0x17U == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))
            ? 1U : ((0x6fU == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))
                     ? 1U : ((0x67U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                              ? 1U : ((0x123U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                       ? 0U : ((0x23U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                ? 0U
                                                : (
                                                   (0xa3U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                    ? 0U
                                                    : 
                                                   ((0x103U 
                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                     ? 2U
                                                     : 
                                                    ((0x83U 
                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                      ? 2U
                                                      : 
                                                     ((0x283U 
                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                       ? 2U
                                                       : 
                                                      ((0x203U 
                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                        ? 2U
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                         ? 2U
                                                         : 
                                                        ((0x33U 
                                                          == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                          ? 3U
                                                          : 
                                                         ((0x3b3U 
                                                           == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                           ? 3U
                                                           : 
                                                          ((0xb3U 
                                                            == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                            ? 3U
                                                            : 
                                                           ((0x42b3U 
                                                             == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0x2b3U 
                                                              == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0x233U 
                                                               == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                               ? 3U
                                                               : 
                                                              ((0x333U 
                                                                == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                ? 3U
                                                                : 
                                                               ((0x8033U 
                                                                 == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                 ? 3U
                                                                 : 
                                                                ((0x63U 
                                                                  == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x2e3U 
                                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                   ? 0U
                                                                   : 
                                                                  ((0x263U 
                                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                    ? 0U
                                                                    : 
                                                                   ((0x363U 
                                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                     ? 0U
                                                                     : 
                                                                    ((0x3e3U 
                                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                      ? 0U
                                                                      : 
                                                                     ((0xe3U 
                                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))
                                                                       ? 0U
                                                                       : 
                                                                      ((0x133U 
                                                                        == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                        ? 3U
                                                                        : 
                                                                       ((0x1b3U 
                                                                         == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)
                                                                         ? 3U
                                                                         : 0U)))))))))))))))))))))))))));
    vlSelfRef.io_master_awvalid = ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_axi_aw_valid_T_2) 
                                   & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_aw1));
    vlSelfRef.io_master_wvalid = ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_axi_aw_valid_T_2) 
                                  & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_w1));
    vlSelfRef.io_master_awsize = ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg))
                                   ? ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                       ? 2U : (2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask)))
                                   : 0U);
    vlSelfRef.io_master_arsize = ((0U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg))
                                   ? 2U : ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_axi_ar_valid_T_3)
                                            ? ((1U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                                ? 2U
                                                : (
                                                   (2U 
                                                    != (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)) 
                                                   & ((3U 
                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)) 
                                                      | (4U 
                                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)))))
                                            : 0U));
    Vysyx_25030077___024root____Vdpiimwrap_ysyx_25030077__DOT__j_pc_next__DOT__ecall_read_TOP(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg, (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type), vlSelfRef.__Vfunc_ysyx_25030077__DOT__j_pc_next__DOT__ecall_read__1__Vfuncout);
    vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__ecall_dnpc 
        = vlSelfRef.__Vfunc_ysyx_25030077__DOT__j_pc_next__DOT__ecall_read__1__Vfuncout;
    vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT___GEN_94 
        = ((0x1eU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_30
            : ((0x1dU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_29
                : ((0x1cU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_28
                    : ((0x1bU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_27
                        : ((0x1aU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_26
                            : ((0x19U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_25
                                : ((0x18U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_24
                                    : ((0x17U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_23
                                        : ((0x16U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_22
                                            : ((0x15U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_21
                                                : (
                                                   (0x14U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_20
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                     ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_19
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                      ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_18
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                       ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_17
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_16
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                         ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_15
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                          ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_14
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                           ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_13
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_12
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                             ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_11
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                              ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_10
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                               ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_9
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_8
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                                 ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_7
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                                  ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_6
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                                   ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_5
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_4
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                                     ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_3
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                                      ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_2
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd))
                                                                       ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_1
                                                                       : vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_0))))))))))))))))))))))))))))));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data 
        = ((0x1fU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_31
            : ((0x1eU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_30
                : ((0x1dU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_29
                    : ((0x1cU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_28
                        : ((0x1bU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_27
                            : ((0x1aU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_26
                                : ((0x19U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_25
                                    : ((0x18U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_24
                                        : ((0x17U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_23
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_22
                                                : (
                                                   (0x15U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_21
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                     ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_20
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                      ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_19
                                                      : 
                                                     ((0x12U 
                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                       ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_18
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_17
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                         ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_16
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                          ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_15
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                           ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_14
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_13
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                             ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_12
                                                             : 
                                                            ((0xbU 
                                                              == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                              ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_11
                                                              : 
                                                             ((0xaU 
                                                               == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                               ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_10
                                                               : 
                                                              ((9U 
                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_9
                                                                : 
                                                               ((8U 
                                                                 == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                                 ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_8
                                                                 : 
                                                                ((7U 
                                                                  == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                                  ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_7
                                                                  : 
                                                                 ((6U 
                                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                                   ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_6
                                                                   : 
                                                                  ((5U 
                                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_5
                                                                    : 
                                                                   ((4U 
                                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                                     ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_4
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                                      ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_3
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                                       ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_2
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2))
                                                                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_1
                                                                        : vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_0)))))))))))))))))))))))))))))));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_imm 
        = ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))
            ? vlSelfRef.ysyx_25030077__DOT__e_imm__DOT__Imm_type1
            : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))
                ? (0xfffff000U & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)
                : ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))
                    ? 4U : ((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))
                             ? ((((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                   >> 0x1fU) ? 0xfffffU
                                   : 0U) << 0xcU) | 
                                ((0xfe0U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                             >> 7U))))
                             : ((5U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))
                                 ? (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                             >> 0x14U))
                                 : ((6U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))
                                     ? VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg, 0x14U)
                                     : 0U))))));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
        = ((0x1fU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_31
            : ((0x1eU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_30
                : ((0x1dU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_29
                    : ((0x1cU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_28
                        : ((0x1bU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_27
                            : ((0x1aU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_26
                                : ((0x19U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_25
                                    : ((0x18U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_24
                                        : ((0x17U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_23
                                            : ((0x16U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_22
                                                : (
                                                   (0x15U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_21
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                     ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_20
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                      ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_19
                                                      : 
                                                     ((0x12U 
                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                       ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_18
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_17
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                         ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_16
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                          ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_15
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                           ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_14
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_13
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                             ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_12
                                                             : 
                                                            ((0xbU 
                                                              == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                              ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_11
                                                              : 
                                                             ((0xaU 
                                                               == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                               ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_10
                                                               : 
                                                              ((9U 
                                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                                ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_9
                                                                : 
                                                               ((8U 
                                                                 == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                                 ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_8
                                                                 : 
                                                                ((7U 
                                                                  == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                                  ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_7
                                                                  : 
                                                                 ((6U 
                                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                                   ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_6
                                                                   : 
                                                                  ((5U 
                                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                                    ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_5
                                                                    : 
                                                                   ((4U 
                                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                                     ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_4
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                                      ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_3
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                                       ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_2
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1))
                                                                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_1
                                                                        : vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_0)))))))))))))))))))))))))))))));
    vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2 
        = ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))
            ? 0U : ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))
                     ? vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data
                     : vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_imm));
    vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql 
        = (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
           == vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data);
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data)) 
                             + (QData)((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_imm))));
    if ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg))) {
        vlSelfRef.io_master_awaddr = (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T);
        if ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))) {
            vlSelfRef.io_master_wstrb = 0xfU;
            vlSelfRef.io_master_wdata = vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data;
        } else if ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))) {
            if ((1U & (IData)((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                               >> 1U)))) {
                if ((1U & (IData)((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                   >> 1U)))) {
                    vlSelfRef.io_master_wstrb = 0xcU;
                    vlSelfRef.io_master_wdata = VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data, 0x10U);
                } else {
                    vlSelfRef.io_master_wstrb = 0U;
                    vlSelfRef.io_master_wdata = 0U;
                }
            } else {
                vlSelfRef.io_master_wstrb = 3U;
                vlSelfRef.io_master_wdata = (0xffffU 
                                             & vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data);
            }
        } else if ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))) {
            if ((0U == (3U & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))) {
                vlSelfRef.io_master_wstrb = 1U;
                vlSelfRef.io_master_wdata = (0xffU 
                                             & vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data);
            } else if ((1U == (3U & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))) {
                vlSelfRef.io_master_wstrb = 2U;
                vlSelfRef.io_master_wdata = (0xff00U 
                                             & (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data 
                                                << 8U));
            } else if ((2U == (3U & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))) {
                vlSelfRef.io_master_wstrb = 4U;
                vlSelfRef.io_master_wdata = (0xff0000U 
                                             & (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data 
                                                << 0x10U));
            } else if ((3U == (3U & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))) {
                vlSelfRef.io_master_wstrb = 8U;
                vlSelfRef.io_master_wdata = VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data, 0x18U);
            } else {
                vlSelfRef.io_master_wstrb = 0U;
                vlSelfRef.io_master_wdata = 0U;
            }
        } else {
            vlSelfRef.io_master_wstrb = 0U;
            vlSelfRef.io_master_wdata = 0U;
        }
    } else {
        vlSelfRef.io_master_awaddr = 0U;
        vlSelfRef.io_master_wstrb = 0U;
        vlSelfRef.io_master_wdata = 0U;
    }
    vlSelfRef.ysyx_25030077__DOT__f_gpr_io_pc_next 
        = (((0xbU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)) 
            | (0xcU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)))
            ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__ecall_dnpc
            : ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                ? (vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg 
                   + (((((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                          >> 0x1fU) ? 0x7ffU : 0U) 
                        << 0x15U) | (0x100000U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                  >> 0xbU))) 
                      | (((0xff000U & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg) 
                          | (0x800U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                       >> 9U))) | (0x7feU 
                                                   & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 0x14U)))))
                : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                    ? (0xfffffffeU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                      + vlSelfRef.ysyx_25030077__DOT__e_imm__DOT__Imm_type1))
                    : ((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                        ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg
                        : ((6U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                            ? ((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                            : ((5U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                ? ((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                    ? ((IData)(4U) 
                                       + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)
                                    : vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9)
                                : ((7U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                    ? (VL_GTES_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                        ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                    : ((8U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                        ? ((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                            >= vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                            ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                            : ((IData)(4U) 
                                               + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                        : ((9U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                            ? (VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                : ((IData)(4U) 
                                                   + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                            : ((0xaU 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                ? (
                                                   (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                                    < vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                    ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                : ((IData)(4U) 
                                                   + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)))))))))));
    vlSelfRef.io_master_araddr = (((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg)) 
                                   & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_valid_lsu))
                                   ? (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)
                                   : vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr
                                  [0U]);
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__rdata_sram 
        = ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
            ? vlSelfRef.io_master_rdata : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                ? (0xffU 
                                                   & vlSelfRef.io_master_rdata)
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelfRef.io_master_rdata 
                                                       >> 8U))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelfRef.io_master_rdata 
                                                        >> 0x10U))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                      ? 
                                                     VL_SHIFTR_III(32,32,32, vlSelfRef.io_master_rdata, 0x18U)
                                                      : 0U))))
                                            : ((3U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                                >> 1U)))
                                                     ? 
                                                    ((((vlSelfRef.io_master_rdata 
                                                        >> 0x1fU)
                                                        ? 0xffffU
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | (vlSelfRef.io_master_rdata 
                                                        >> 0x10U))
                                                     : 0U)
                                                    : vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_29)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                                >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                                 >> 1U)))
                                                      ? 
                                                     VL_SHIFTR_III(32,32,32, vlSelfRef.io_master_rdata, 0x10U)
                                                      : 0U)
                                                     : 
                                                    (0xffffU 
                                                     & vlSelfRef.io_master_rdata))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                      ? vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_57
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                       ? 
                                                      ((((0x8000U 
                                                          & vlSelfRef.io_master_rdata)
                                                          ? 0xffffffU
                                                          : 0U) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & (vlSelfRef.io_master_rdata 
                                                             >> 8U)))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                        ? 
                                                       ((((0x800000U 
                                                           & vlSelfRef.io_master_rdata)
                                                           ? 0xffffffU
                                                           : 0U) 
                                                         << 8U) 
                                                        | (0xffU 
                                                           & (vlSelfRef.io_master_rdata 
                                                              >> 0x10U)))
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                         ? 
                                                        ((((vlSelfRef.io_master_rdata 
                                                            >> 0x1fU)
                                                            ? 0xffffffU
                                                            : 0U) 
                                                          << 8U) 
                                                         | (vlSelfRef.io_master_rdata 
                                                            >> 0x18U))
                                                         : 0U))))
                                                     : 0U)))));
    vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__is_clint 
        = ((0x2000000U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)) 
           | (0x2000004U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)));
    vlSelfRef.io_master_arvalid = ((0U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg))
                                    ? (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar0)
                                    : (((~ (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__is_clint)) 
                                        & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_axi_ar_valid_T_3)) 
                                       & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar1)));
    vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
        = ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))
            ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg
            : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))
                ? (((~ (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__is_clint)) 
                    & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1))
                    ? vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__rdata_reg
                    : (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1) 
                        & (0x2000000U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                        ? (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__clint_reg)
                        : (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1) 
                            & (0x2000004U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                            ? (IData)((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__clint_reg 
                                       >> 0x20U)) : 0U)))
                : vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data));
    Vysyx_25030077___024root____Vdpiimwrap_ysyx_25030077__DOT__i_alu__DOT__csr_read_TOP(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2, (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl), vlSelfRef.__Vfunc_ysyx_25030077__DOT__i_alu__DOT__csr_read__0__Vfuncout);
    vlSelfRef.ysyx_25030077__DOT__i_alu__DOT__csr_data 
        = vlSelfRef.__Vfunc_ysyx_25030077__DOT__i_alu__DOT__csr_read__0__Vfuncout;
    vlSelfRef.ysyx_25030077__DOT__f_gpr_io_wdata_rd 
        = ((1U & ((((IData)(1U) << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)) 
                   >> 0xbU) | (((IData)(1U) << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)) 
                               >> 0xcU))) ? vlSelfRef.ysyx_25030077__DOT__i_alu__DOT__csr_data
            : ((((IData)((0x1ffffffffULL & ((((((((1U 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                   ? 
                                                  ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                                   + (QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                                   : 0ULL) 
                                                 | ((2U 
                                                     & ((IData)(1U) 
                                                        << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                     ? 
                                                    ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                                     - (QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                                     : 0ULL)) 
                                                | ((4U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                    ? (QData)((IData)(
                                                                      (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                                       < vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                                    : 0ULL)) 
                                               | ((8U 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                   ? (QData)((IData)(
                                                                     (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                                      | vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                                   : 0ULL)) 
                                              | ((0x10U 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                  ? (QData)((IData)(
                                                                    (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                                     ^ vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                                  : 0ULL)) 
                                             | ((0x20U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                 ? (QData)((IData)(
                                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, 
                                                                                (0x1fU 
                                                                                & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))))
                                                 : 0ULL)) 
                                            | ((0x40U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                ? (QData)((IData)(
                                                                  (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                                   & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                                : 0ULL)))) 
                 | (IData)(((0x100U & ((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                             ? (0x7fffffffffffffffULL 
                                & ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                   << (0x1fU & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                             : 0ULL))) | (IData)(((0x200U 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                   ? (QData)((IData)(
                                                                     (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                                      >> 
                                                                      (0x1fU 
                                                                       & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))))
                                                   : 0ULL))) 
               | (IData)(((0x400U & ((IData)(1U) << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                           ? (QData)((IData)(VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                           : 0ULL))));
}

VL_ATTR_COLD void Vysyx_25030077___024root___eval_triggers__stl(Vysyx_25030077___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25030077___024root___eval_phase__stl(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___eval_phase__stl\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25030077___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25030077___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030077___024root___dump_triggers__ico(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___dump_triggers__ico\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030077___024root___dump_triggers__act(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___dump_triggers__act\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25030077___024root___dump_triggers__nba(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___dump_triggers__nba\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25030077___024root____Vm_traceActivitySetAll(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vysyx_25030077___024root___ctor_var_reset(Vysyx_25030077___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root___ctor_var_reset\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 408515240381666009ull);
    vlSelf->io_master_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15918341228068111945ull);
    vlSelf->io_master_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1254038570903178483ull);
    vlSelf->io_master_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5100000641368617149ull);
    vlSelf->io_master_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12987614511039531521ull);
    vlSelf->io_master_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9580548919814266776ull);
    vlSelf->io_master_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13854187349888989176ull);
    vlSelf->io_master_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16970178477346425689ull);
    vlSelf->io_master_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10619170216674498609ull);
    vlSelf->io_master_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1901748201038864800ull);
    vlSelf->io_master_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4508192480944508561ull);
    vlSelf->io_master_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4103275223239596405ull);
    vlSelf->io_master_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3571525934430669283ull);
    vlSelf->io_master_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5636029676147399511ull);
    vlSelf->io_master_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14479403608764655851ull);
    vlSelf->io_master_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1062445100397978765ull);
    vlSelf->io_master_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 252024972192926592ull);
    vlSelf->io_master_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 189821581177370283ull);
    vlSelf->io_master_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17696505626772089272ull);
    vlSelf->io_master_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7705699152724094327ull);
    vlSelf->io_master_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7405609512209415492ull);
    vlSelf->io_master_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12197991585860830104ull);
    vlSelf->io_master_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2926577748560128850ull);
    vlSelf->io_master_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5406036630392025300ull);
    vlSelf->io_master_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14835472978164275174ull);
    vlSelf->io_master_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643816389357758479ull);
    vlSelf->io_master_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13565575050082382344ull);
    vlSelf->io_master_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10731670764913458081ull);
    vlSelf->io_master_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18248460336661176801ull);
    vlSelf->io_master_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17575739218363420612ull);
    vlSelf->io_master_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15602700128759278860ull);
    vlSelf->io_master_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7948976656878235603ull);
    vlSelf->io_master_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11639076702786572454ull);
    vlSelf->io_master_arqos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11299802128552522731ull);
    vlSelf->io_master_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1136657864323076379ull);
    vlSelf->io_master_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6677639489763844444ull);
    vlSelf->io_master_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7577724021127860610ull);
    vlSelf->io_master_awqos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14385807354867597549ull);
    vlSelf->io_slave_arlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11646856397476569505ull);
    vlSelf->io_slave_arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9340527525580874114ull);
    vlSelf->io_slave_arprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17863865611727262307ull);
    vlSelf->io_slave_arqos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14361895463746833044ull);
    vlSelf->io_slave_awlock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18021049207930873233ull);
    vlSelf->io_slave_awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3317472161047497176ull);
    vlSelf->io_slave_awprot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10813380604521337839ull);
    vlSelf->io_slave_awqos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17560335172611452802ull);
    vlSelf->io_slave_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15386364766571949112ull);
    vlSelf->io_slave_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5334601523648441864ull);
    vlSelf->io_slave_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2745451994456866424ull);
    vlSelf->io_slave_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12914048876469032452ull);
    vlSelf->io_slave_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8315638325092922864ull);
    vlSelf->io_slave_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16399205572355175556ull);
    vlSelf->io_slave_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5360184287951858800ull);
    vlSelf->io_slave_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1820984914711112230ull);
    vlSelf->io_slave_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13353078287730269036ull);
    vlSelf->io_slave_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13100422519405067609ull);
    vlSelf->io_slave_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1200568031881101223ull);
    vlSelf->io_slave_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11119378898008568253ull);
    vlSelf->io_slave_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5991839402217458983ull);
    vlSelf->io_slave_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9882747069049294001ull);
    vlSelf->io_slave_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14865370267791099114ull);
    vlSelf->io_slave_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12095680284664615464ull);
    vlSelf->io_slave_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14323104873743723684ull);
    vlSelf->io_slave_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9295917410590269615ull);
    vlSelf->io_slave_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8494381812203753726ull);
    vlSelf->io_slave_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4271623300114428176ull);
    vlSelf->io_slave_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15287740914422975644ull);
    vlSelf->io_slave_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4321564869539443489ull);
    vlSelf->io_slave_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13405440217435810056ull);
    vlSelf->io_slave_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13430075741762723373ull);
    vlSelf->io_slave_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14468517393453990678ull);
    vlSelf->io_slave_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17943950254526375416ull);
    vlSelf->io_slave_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13355305980320080930ull);
    vlSelf->io_slave_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13724252849132544087ull);
    vlSelf->io_slave_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2774376520687953150ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter_io_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7430335884658931424ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter_io_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5933493578009671249ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter_io_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16638658116391781109ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter_io_r_mask = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16010078432056344755ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter_io_w_mask = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2163933524549288236ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter_io_r_valid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9700340553649277518ull);
    vlSelf->ysyx_25030077__DOT__d_idu_io_imm_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18232246191449428580ull);
    vlSelf->ysyx_25030077__DOT__d_idu_io_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9961165321568243328ull);
    vlSelf->ysyx_25030077__DOT__d_idu_io_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17894986801431055258ull);
    vlSelf->ysyx_25030077__DOT__d_idu_io_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6499283637741518723ull);
    vlSelf->ysyx_25030077__DOT__d_idu_io_data_control = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4724541640752655464ull);
    vlSelf->ysyx_25030077__DOT__d_idu_io_ALU_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12620563001403902756ull);
    vlSelf->ysyx_25030077__DOT__d_idu_io_pc_next_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5797957219976552568ull);
    vlSelf->ysyx_25030077__DOT__f_gpr_io_pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 997154477363252106ull);
    vlSelf->ysyx_25030077__DOT__f_gpr_io_wdata_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2213546927129810389ull);
    vlSelf->ysyx_25030077__DOT__h_data_control_io_data_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15807123379015304089ull);
    vlSelf->ysyx_25030077__DOT__h_data_control_io_data_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11690402040395948373ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4732903344065029826ull);
    }
    vlSelf->ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5171848758028634402ull);
    vlSelf->ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16509136621606134466ull);
    vlSelf->ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10655277556380704544ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12687589343646108247ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__inst_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4103501312290369777ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__validReg_aw1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13008404807451530690ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7241915942510006329ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2113990457754456717ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__validReg_gpr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9613246791504717509ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__validReg_w1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2407776103896774616ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13570887973394769149ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__clint_reg = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18246952060275751129ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___validReg_ar0_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18003002295905256711ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___validReg_ar1_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17465439785570149327ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___validReg_ar1_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15966537523284165789ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___validReg_aw1_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15134979436297081193ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___validReg_w1_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7089288286666224310ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5670226353828961697ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__is_clint = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5901495071434065632ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___validReg_gpr_T_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17042645020731477043ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___io_axi_ar_addr_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 488500319960868149ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___state_reg_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16559344374243187423ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___state_reg_T_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 941814288176512609ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___io_axi_aw_valid_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18003774602336055682ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___io_axi_ar_valid_T_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16752748529591400052ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9680704178749093277ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_57 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9054414608648936169ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__rdata_sram = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3251766071523871619ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___clint_reg_T_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16157456656775777323ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15434551112009062858ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5587629061983823439ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7234328712664431860ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7045418390890901959ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11234232438240537432ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12216305088784272378ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6569701712527642593ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13662821319443279415ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8351377978429511200ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9333450628973456706ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9065383432651523392ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14843427474848559198ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17659445378005200145ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11980474466105035232ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14796492369261705815ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1785521043631307156ull);
    vlSelf->ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14553294205440988579ull);
    vlSelf->ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14639575336056634125ull);
    vlSelf->ysyx_25030077__DOT__d_idu__DOT___issrai_T_3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18050888412806817031ull);
    vlSelf->ysyx_25030077__DOT__d_idu__DOT___isadd_T_3 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14507153880085662291ull);
    vlSelf->ysyx_25030077__DOT__e_imm__DOT__Imm_type1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16158054996235109084ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16717815931086342352ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13007563722052566246ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7210582555946134763ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17287874571115896876ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5494551374166674773ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11855855626307070903ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3953768729669652095ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7126245215732832598ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 709974060799252876ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8094887930556116229ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11180054525045566835ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11846746550748051418ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13919340261471907360ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14262145350179555033ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15353854702535523320ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1881550975346023124ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5349844257613756261ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2267753432479879075ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1926101112470295546ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10919106270371912664ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14465348680051306546ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14053089235339439572ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12126024591936348197ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17458065688232168113ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11619903833139368670ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15557058032407251427ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10891885979355337243ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1203633943505849673ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7803727071287283538ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1134249031196612844ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11526466589055553335ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__regs_31 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16492460902053254869ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__validReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2381012566286692184ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10091781436872838327ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT___validReg_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9602894591481313213ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT___validReg_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7871399167207803175ull);
    vlSelf->ysyx_25030077__DOT__f_gpr__DOT___GEN_94 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12364795500168218576ull);
    vlSelf->ysyx_25030077__DOT__i_alu__DOT__csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11327684817476858390ull);
    vlSelf->ysyx_25030077__DOT__j_pc_next__DOT__ecall_dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3228548659994387942ull);
    vlSelf->ysyx_25030077__DOT__j_pc_next__DOT__is_eql = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4074768419297803797ull);
    vlSelf->ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4845100763319410992ull);
    vlSelf->__Vfunc_ysyx_25030077__DOT__i_alu__DOT__csr_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_25030077__DOT__j_pc_next__DOT__ecall_read__1__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
