// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25030077__Syms.h"


void Vysyx_25030077___024root__trace_chg_0_sub_0(Vysyx_25030077___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_25030077___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25030077___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25030077___024root*>(voidSelf);
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25030077___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25030077___024root__trace_chg_0_sub_0(Vysyx_25030077___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,((1U & (~ (IData)(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full)))));
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__validReg));
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg),32);
        bufp->chgBit(oldp+3,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0));
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full));
        bufp->chgIData(oldp+5,(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr
                               [0U]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data),32);
        bufp->chgIData(oldp+7,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_imm),32);
        bufp->chgCData(oldp+9,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask),3);
        bufp->chgCData(oldp+10,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask),3);
        bufp->chgBit(oldp+11,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT___validReg_T));
        bufp->chgIData(oldp+12,((((~ (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__is_clint)) 
                                  & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1))
                                  ? vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__rdata_reg
                                  : (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1) 
                                      & (0x2000000U 
                                         == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                      ? (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__clint_reg)
                                      : (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___io_gpr_data_T_1) 
                                          & (0x2000004U 
                                             == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                          ? (IData)(
                                                    (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__clint_reg 
                                                     >> 0x20U))
                                          : 0U)))),32);
        bufp->chgIData(oldp+13,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg),32);
        bufp->chgBit(oldp+14,(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_valid_lsu));
        bufp->chgCData(oldp+15,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type),3);
        bufp->chgCData(oldp+16,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs1),5);
        bufp->chgCData(oldp+17,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rs2),5);
        bufp->chgCData(oldp+18,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_rd),5);
        bufp->chgCData(oldp+19,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control),3);
        bufp->chgCData(oldp+20,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl),4);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type),4);
        bufp->chgIData(oldp+22,((((0xbU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)) 
                                  | (0xcU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)))
                                  ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__ecall_dnpc
                                  : ((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                      ? (vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg 
                                         + (((((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                >> 0x1fU)
                                                ? 0x7ffU
                                                : 0U) 
                                              << 0x15U) 
                                             | (0x100000U 
                                                & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                   >> 0xbU))) 
                                            | (((0xff000U 
                                                 & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg) 
                                                | (0x800U 
                                                   & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                     >> 0x14U)))))
                                      : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                          ? (0xfffffffeU 
                                             & (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                                + vlSelfRef.ysyx_25030077__DOT__e_imm__DOT__Imm_type1))
                                          : ((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                              ? vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg
                                              : ((6U 
                                                  == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                  ? 
                                                 ((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                                   ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                   ? 
                                                  ((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)
                                                    : vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                    ? 
                                                   (VL_GTES_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                     ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                     ? 
                                                    ((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                                      >= vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                      ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                      ? 
                                                     (VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                       ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))
                                                       ? 
                                                      ((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                                        < vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                                        ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))
                                                       : 
                                                      ((IData)(4U) 
                                                       + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)))))))))))),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_25030077__DOT__f_gpr_io_wdata_rd),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2),32);
        bufp->chgBit(oldp+26,((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgIData(oldp+27,(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr[0]),32);
        bufp->chgBit(oldp+28,(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__ram_addr_MPORT_en));
        bufp->chgBit(oldp+29,(((IData)(vlSelfRef.ysyx_25030077__DOT__b_ifu__DOT__reqQ__DOT__maybe_full) 
                               & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0))));
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_1));
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_2));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_3));
        bufp->chgBit(oldp+33,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_4));
        bufp->chgBit(oldp+34,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_5));
        bufp->chgBit(oldp+35,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_6));
        bufp->chgBit(oldp+36,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_7));
        bufp->chgBit(oldp+37,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_8));
        bufp->chgBit(oldp+38,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_9));
        bufp->chgBit(oldp+39,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_10));
        bufp->chgBit(oldp+40,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_11));
        bufp->chgBit(oldp+41,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_12));
        bufp->chgBit(oldp+42,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_13));
        bufp->chgBit(oldp+43,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_14));
        bufp->chgBit(oldp+44,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_15));
        bufp->chgCData(oldp+45,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg),2);
        bufp->chgCData(oldp+46,((((((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_7) 
                                    << 7U) | ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_6) 
                                              << 6U)) 
                                  | (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_5) 
                                      << 5U) | ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_4) 
                                                << 4U))) 
                                 | ((((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_3) 
                                      << 3U) | ((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_2) 
                                                << 2U)) 
                                    | (((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_1) 
                                        << 1U) | (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__canAccept_prng__DOT__state_0))))),8);
        bufp->chgBit(oldp+47,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_aw1));
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar0));
        bufp->chgBit(oldp+49,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_ar1));
        bufp->chgBit(oldp+50,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_gpr));
        bufp->chgBit(oldp+51,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__validReg_w1));
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__rdata_reg),32);
        bufp->chgQData(oldp+53,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__clint_reg),64);
        bufp->chgIData(oldp+55,((IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)),32);
        bufp->chgBit(oldp+56,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__is_clint));
        bufp->chgIData(oldp+57,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                  ? vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data
                                  : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                      ? ((1U & (IData)(
                                                       (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                        >> 1U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                            >> 1U)))
                                              ? VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data, 0x10U)
                                              : 0U)
                                          : (0xffffU 
                                             & vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data))
                                      : ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                          ? ((0U == 
                                              (3U & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                              ? (0xffU 
                                                 & vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                  ? 
                                                 (0xff00U 
                                                  & (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data 
                                                     << 8U))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                   ? 
                                                  (0xff0000U 
                                                   & (vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data 
                                                      << 0x10U))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data, 0x18U)
                                                    : 0U))))
                                          : 0U)))),32);
        bufp->chgCData(oldp+58,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                  ? 0xfU : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                            >> 1U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T 
                                                             >> 1U)))
                                                  ? 0xcU
                                                  : 0U)
                                                 : 3U)
                                             : ((3U 
                                                 == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___r_addr1_T)))
                                                     ? 8U
                                                     : 0U))))
                                                 : 0U)))),4);
        bufp->chgCData(oldp+59,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask))
                                  ? 2U : (2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_w_mask)))),2);
        bufp->chgCData(oldp+60,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                  ? 2U : ((2U != (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)) 
                                          & ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)) 
                                             | (4U 
                                                == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask)))))),2);
        bufp->chgCData(oldp+61,((0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+62,((0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                          >> 7U))),5);
        bufp->chgCData(oldp+63,((0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+64,((0x13U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+65,((0x213U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+66,((0x313U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+67,((0x393U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+68,((0x4293U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+69,((0x293U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+70,((0x93U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+71,((0x42b3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+72,((0x2b3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___issrai_T_3))));
        bufp->chgBit(oldp+73,((0x63U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+74,((0xe3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+75,((0x33U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+76,((0x233U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+77,((0x3b3U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+78,((0x333U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+79,((0x8033U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+80,((0x37U == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))));
        bufp->chgBit(oldp+81,((0x17U == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))));
        bufp->chgBit(oldp+82,((0x6fU == (0x7fU & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg))));
        bufp->chgBit(oldp+83,((0x67U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+84,((0x123U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+85,((0x2e3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+86,((0x263U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+87,((0x363U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+88,((0x3e3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+89,((0x23U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+90,((0xa3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+91,((0x203U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+92,((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+93,((0x103U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+94,((0x83U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+95,((0x283U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+96,((0xb3U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+97,((0x133U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+98,((0x1b3U == vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isadd_T_3)));
        bufp->chgBit(oldp+99,((0x193U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+100,((0x113U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+101,((0xf3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+102,((0x173U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu__DOT___isaddi_T_2))));
        bufp->chgBit(oldp+103,((0x100073U == vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)));
        bufp->chgBit(oldp+104,((0x73U == vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)));
        bufp->chgBit(oldp+105,((0x30200073U == vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)));
        bufp->chgIData(oldp+106,(vlSelfRef.ysyx_25030077__DOT__e_imm__DOT__Imm_type1),32);
        bufp->chgIData(oldp+107,((0xfffff000U & vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg)),32);
        bufp->chgIData(oldp+108,(((((vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U) << 0xcU) 
                                  | ((0xfe0U & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                >> 0x14U)) 
                                     | (0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                                 >> 7U))))),32);
        bufp->chgIData(oldp+109,((0x1fU & (vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg 
                                           >> 0x14U))),32);
        bufp->chgIData(oldp+110,(VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__inst_reg, 0x14U)),32);
        bufp->chgBit(oldp+111,((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+112,((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+113,((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+114,((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+115,((5U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
        bufp->chgBit(oldp+116,((6U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_imm_type))));
        bufp->chgIData(oldp+117,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_0),32);
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_1),32);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_2),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_3),32);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_4),32);
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_5),32);
        bufp->chgIData(oldp+123,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_6),32);
        bufp->chgIData(oldp+124,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_7),32);
        bufp->chgIData(oldp+125,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_8),32);
        bufp->chgIData(oldp+126,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_9),32);
        bufp->chgIData(oldp+127,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_10),32);
        bufp->chgIData(oldp+128,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_11),32);
        bufp->chgIData(oldp+129,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_12),32);
        bufp->chgIData(oldp+130,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_13),32);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_14),32);
        bufp->chgIData(oldp+132,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_15),32);
        bufp->chgIData(oldp+133,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_16),32);
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_17),32);
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_18),32);
        bufp->chgIData(oldp+136,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_19),32);
        bufp->chgIData(oldp+137,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_20),32);
        bufp->chgIData(oldp+138,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_21),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_22),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_23),32);
        bufp->chgIData(oldp+141,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_24),32);
        bufp->chgIData(oldp+142,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_25),32);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_26),32);
        bufp->chgIData(oldp+144,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_27),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_28),32);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_29),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_30),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__regs_31),32);
        bufp->chgBit(oldp+149,((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))));
        bufp->chgBit(oldp+150,((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))));
        bufp->chgBit(oldp+151,((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_data_control))));
        bufp->chgIData(oldp+152,(vlSelfRef.ysyx_25030077__DOT__i_alu__DOT__csr_data),32);
        bufp->chgSData(oldp+153,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))),16);
        bufp->chgQData(oldp+154,((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                   + (QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))))),33);
        bufp->chgQData(oldp+156,((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                   - (QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))))),33);
        bufp->chgIData(oldp+158,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                  & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)),32);
        bufp->chgIData(oldp+159,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                  | vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)),32);
        bufp->chgIData(oldp+160,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                  ^ vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)),32);
        bufp->chgIData(oldp+161,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, 
                                                (0x1fU 
                                                 & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))),32);
        bufp->chgIData(oldp+162,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                  >> (0x1fU & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))),32);
        bufp->chgQData(oldp+163,((0x7fffffffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                     << (0x1fU & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))),63);
        bufp->chgBit(oldp+165,((vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                < vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)));
        bufp->chgBit(oldp+166,(VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)));
        bufp->chgQData(oldp+167,(((((0x1ffffffffULL 
                                     & ((((((((1U & 
                                               ((IData)(1U) 
                                                << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                               ? ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
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
                                           | ((8U & 
                                               ((IData)(1U) 
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
                                        | ((0x40U & 
                                            ((IData)(1U) 
                                             << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                            ? (QData)((IData)(
                                                              (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                               & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                            : 0ULL))) 
                                    | ((0x100U & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                        ? (0x7fffffffffffffffULL 
                                           & ((QData)((IData)(vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1)) 
                                              << (0x1fU 
                                                  & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                        : 0ULL)) | 
                                   ((0x200U & ((IData)(1U) 
                                               << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                     ? (QData)((IData)(
                                                       (vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2))))
                                     : 0ULL)) | ((0x400U 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_ALU_ctrl)))
                                                  ? (QData)((IData)(
                                                                    VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_1, vlSelfRef.ysyx_25030077__DOT__h_data_control_io_data_2)))
                                                  : 0ULL))),64);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__ecall_dnpc),32);
        bufp->chgIData(oldp+170,(((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)),32);
        bufp->chgBit(oldp+171,((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+172,((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+173,((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+174,((5U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+175,((6U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+176,((7U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+177,((8U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+178,((9U == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+179,((0xaU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type))));
        bufp->chgBit(oldp+180,(((0xbU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)) 
                                | (0xcU == (IData)(vlSelfRef.ysyx_25030077__DOT__d_idu_io_pc_next_type)))));
        bufp->chgBit(oldp+181,(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql));
        bufp->chgBit(oldp+182,(VL_GTES_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)));
        bufp->chgBit(oldp+183,(VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)));
        bufp->chgBit(oldp+184,((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                >= vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)));
        bufp->chgBit(oldp+185,((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                < vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)));
        bufp->chgIData(oldp+186,(((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                   ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+187,((VL_GTES_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                   ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+188,((VL_LTS_III(32, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data, vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                   ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+189,(((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                   < vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                   ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+190,(((vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs1_data 
                                   >= vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_rs2_data)
                                   ? vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9
                                   : ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg))),32);
        bufp->chgIData(oldp+191,(((IData)(vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT__is_eql)
                                   ? ((IData)(4U) + vlSelfRef.ysyx_25030077__DOT__f_gpr__DOT__pc_next_reg)
                                   : vlSelfRef.ysyx_25030077__DOT__j_pc_next__DOT___beq_result_T_9)),32);
    }
    bufp->chgBit(oldp+192,(vlSelfRef.clock));
    bufp->chgBit(oldp+193,(vlSelfRef.reset));
    bufp->chgBit(oldp+194,(vlSelfRef.io_interrupt));
    bufp->chgBit(oldp+195,(vlSelfRef.io_master_awready));
    bufp->chgBit(oldp+196,(vlSelfRef.io_master_awvalid));
    bufp->chgIData(oldp+197,(vlSelfRef.io_master_awaddr),32);
    bufp->chgCData(oldp+198,(vlSelfRef.io_master_awid),4);
    bufp->chgCData(oldp+199,(vlSelfRef.io_master_awlen),8);
    bufp->chgCData(oldp+200,(vlSelfRef.io_master_awsize),3);
    bufp->chgCData(oldp+201,(vlSelfRef.io_master_awburst),2);
    bufp->chgBit(oldp+202,(vlSelfRef.io_master_wready));
    bufp->chgBit(oldp+203,(vlSelfRef.io_master_wvalid));
    bufp->chgIData(oldp+204,(vlSelfRef.io_master_wdata),32);
    bufp->chgCData(oldp+205,(vlSelfRef.io_master_wstrb),4);
    bufp->chgBit(oldp+206,(vlSelfRef.io_master_wlast));
    bufp->chgBit(oldp+207,(vlSelfRef.io_master_bready));
    bufp->chgBit(oldp+208,(vlSelfRef.io_master_bvalid));
    bufp->chgCData(oldp+209,(vlSelfRef.io_master_bid),4);
    bufp->chgCData(oldp+210,(vlSelfRef.io_master_bresp),2);
    bufp->chgBit(oldp+211,(vlSelfRef.io_master_arready));
    bufp->chgBit(oldp+212,(vlSelfRef.io_master_arvalid));
    bufp->chgIData(oldp+213,(vlSelfRef.io_master_araddr),32);
    bufp->chgCData(oldp+214,(vlSelfRef.io_master_arid),4);
    bufp->chgCData(oldp+215,(vlSelfRef.io_master_arlen),8);
    bufp->chgCData(oldp+216,(vlSelfRef.io_master_arsize),3);
    bufp->chgCData(oldp+217,(vlSelfRef.io_master_arburst),2);
    bufp->chgBit(oldp+218,(vlSelfRef.io_master_rready));
    bufp->chgBit(oldp+219,(vlSelfRef.io_master_rvalid));
    bufp->chgIData(oldp+220,(vlSelfRef.io_master_rdata),32);
    bufp->chgCData(oldp+221,(vlSelfRef.io_master_rid),4);
    bufp->chgBit(oldp+222,(vlSelfRef.io_master_rlast));
    bufp->chgCData(oldp+223,(vlSelfRef.io_master_rresp),2);
    bufp->chgBit(oldp+224,(vlSelfRef.io_master_arlock));
    bufp->chgCData(oldp+225,(vlSelfRef.io_master_arcache),4);
    bufp->chgCData(oldp+226,(vlSelfRef.io_master_arprot),3);
    bufp->chgCData(oldp+227,(vlSelfRef.io_master_arqos),4);
    bufp->chgBit(oldp+228,(vlSelfRef.io_master_awlock));
    bufp->chgCData(oldp+229,(vlSelfRef.io_master_awcache),4);
    bufp->chgCData(oldp+230,(vlSelfRef.io_master_awprot),3);
    bufp->chgCData(oldp+231,(vlSelfRef.io_master_awqos),4);
    bufp->chgBit(oldp+232,(vlSelfRef.io_slave_arlock));
    bufp->chgCData(oldp+233,(vlSelfRef.io_slave_arcache),4);
    bufp->chgCData(oldp+234,(vlSelfRef.io_slave_arprot),3);
    bufp->chgCData(oldp+235,(vlSelfRef.io_slave_arqos),4);
    bufp->chgBit(oldp+236,(vlSelfRef.io_slave_awlock));
    bufp->chgCData(oldp+237,(vlSelfRef.io_slave_awcache),4);
    bufp->chgCData(oldp+238,(vlSelfRef.io_slave_awprot),3);
    bufp->chgCData(oldp+239,(vlSelfRef.io_slave_awqos),4);
    bufp->chgBit(oldp+240,(vlSelfRef.io_slave_awready));
    bufp->chgBit(oldp+241,(vlSelfRef.io_slave_awvalid));
    bufp->chgIData(oldp+242,(vlSelfRef.io_slave_awaddr),32);
    bufp->chgCData(oldp+243,(vlSelfRef.io_slave_awid),4);
    bufp->chgCData(oldp+244,(vlSelfRef.io_slave_awlen),8);
    bufp->chgCData(oldp+245,(vlSelfRef.io_slave_awsize),3);
    bufp->chgCData(oldp+246,(vlSelfRef.io_slave_awburst),2);
    bufp->chgBit(oldp+247,(vlSelfRef.io_slave_wready));
    bufp->chgBit(oldp+248,(vlSelfRef.io_slave_wvalid));
    bufp->chgIData(oldp+249,(vlSelfRef.io_slave_wdata),32);
    bufp->chgCData(oldp+250,(vlSelfRef.io_slave_wstrb),4);
    bufp->chgBit(oldp+251,(vlSelfRef.io_slave_wlast));
    bufp->chgBit(oldp+252,(vlSelfRef.io_slave_bready));
    bufp->chgBit(oldp+253,(vlSelfRef.io_slave_bvalid));
    bufp->chgCData(oldp+254,(vlSelfRef.io_slave_bid),4);
    bufp->chgCData(oldp+255,(vlSelfRef.io_slave_bresp),2);
    bufp->chgBit(oldp+256,(vlSelfRef.io_slave_arready));
    bufp->chgBit(oldp+257,(vlSelfRef.io_slave_arvalid));
    bufp->chgIData(oldp+258,(vlSelfRef.io_slave_araddr),32);
    bufp->chgCData(oldp+259,(vlSelfRef.io_slave_arid),4);
    bufp->chgCData(oldp+260,(vlSelfRef.io_slave_arlen),8);
    bufp->chgCData(oldp+261,(vlSelfRef.io_slave_arsize),3);
    bufp->chgCData(oldp+262,(vlSelfRef.io_slave_arburst),2);
    bufp->chgBit(oldp+263,(vlSelfRef.io_slave_rready));
    bufp->chgBit(oldp+264,(vlSelfRef.io_slave_rvalid));
    bufp->chgIData(oldp+265,(vlSelfRef.io_slave_rdata),32);
    bufp->chgCData(oldp+266,(vlSelfRef.io_slave_rid),4);
    bufp->chgBit(oldp+267,(vlSelfRef.io_slave_rlast));
    bufp->chgCData(oldp+268,(vlSelfRef.io_slave_rresp),2);
    bufp->chgCData(oldp+269,(((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__state_reg))
                               ? (IData)(vlSelfRef.io_master_bresp)
                               : 0U)),2);
    bufp->chgBit(oldp+270,((((0xf000000U <= vlSelfRef.io_master_araddr) 
                             & (0xf001fffU > vlSelfRef.io_master_araddr)) 
                            | (((0x80000000U <= vlSelfRef.io_master_araddr) 
                                & (0x9fffffffU > vlSelfRef.io_master_araddr)) 
                               | (((0xa0000000U <= vlSelfRef.io_master_araddr) 
                                   & (0xbfffffffU > vlSelfRef.io_master_araddr)) 
                                  | (((0x10002000U 
                                       <= vlSelfRef.io_master_araddr) 
                                      & (0x1000200fU 
                                         > vlSelfRef.io_master_araddr)) 
                                     | (((0x10011000U 
                                          <= vlSelfRef.io_master_araddr) 
                                         & (0x10011007U 
                                            > vlSelfRef.io_master_araddr)) 
                                        | (0xc0000000U 
                                           <= vlSelfRef.io_master_araddr))))))));
    bufp->chgIData(oldp+271,(vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT__rdata_sram),32);
    bufp->chgIData(oldp+272,(((1U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                               ? vlSelfRef.io_master_rdata
                               : ((2U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                   ? (0xffU & vlSelfRef.io_master_rdata)
                                   : ((3U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                       ? vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_29
                                       : ((4U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                           ? (0xffffU 
                                              & vlSelfRef.io_master_rdata)
                                           : ((5U == (IData)(vlSelfRef.ysyx_25030077__DOT__c_arbiter_io_r_mask))
                                               ? vlSelfRef.ysyx_25030077__DOT__c_arbiter__DOT___rdata_sram_T_57
                                               : 0U)))))),32);
}

void Vysyx_25030077___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25030077___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25030077___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25030077___024root*>(voidSelf);
    Vysyx_25030077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
