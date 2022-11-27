// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb2b9696e__0;
    // Body
    VL_WRITEF("Loading Instr_Mem.\n");
    __Vtemp_hb2b9696e__0[0U] = 0x2e6d656dU;
    __Vtemp_hb2b9696e__0[1U] = 0x6e746572U;
    __Vtemp_hb2b9696e__0[2U] = 0x636f75U;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hb2b9696e__0)
                 ,  &(vlSelf->top__DOT__instr_mem_instance__DOT__array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->top__DOT__reg_file_instance__DOT__regfile_array
        [0xaU];
    vlSelf->top__DOT__instr = ((vlSelf->top__DOT__instr_mem_instance__DOT__array
                                [(0xffffU & ((IData)(3U) 
                                             + vlSelf->top__DOT__PC))] 
                                << 0x18U) | ((vlSelf->top__DOT__instr_mem_instance__DOT__array
                                              [(0xffffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__instr_mem_instance__DOT__array
                                                 [(0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__instr_mem_instance__DOT__array
                                                [(0xffffU 
                                                  & vlSelf->top__DOT__PC)])));
    if ((0x13U == (0x7fU & vlSelf->top__DOT__instr))) {
        vlSelf->top__DOT__RegWrite = 1U;
        vlSelf->top__DOT__control_unit_instance__DOT__ALUOp = 2U;
        vlSelf->top__DOT__ALUsrc = 1U;
        vlSelf->top__DOT__ImmSrc = 1U;
        vlSelf->top__DOT__control_unit_instance__DOT__Branch = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->top__DOT__instr))) {
        vlSelf->top__DOT__RegWrite = 0U;
        vlSelf->top__DOT__control_unit_instance__DOT__ALUOp = 1U;
        vlSelf->top__DOT__ALUsrc = 0U;
        vlSelf->top__DOT__ImmSrc = 0U;
        vlSelf->top__DOT__control_unit_instance__DOT__Branch = 1U;
    }
    vlSelf->top__DOT__ALUop1 = vlSelf->top__DOT__reg_file_instance__DOT__regfile_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    if ((0U == (IData)(vlSelf->top__DOT__control_unit_instance__DOT__ALUOp))) {
        vlSelf->top__DOT__ALUctrl = 1U;
    } else if ((1U == (IData)(vlSelf->top__DOT__control_unit_instance__DOT__ALUOp))) {
        vlSelf->top__DOT__ALUctrl = 0U;
    } else if ((2U == (IData)(vlSelf->top__DOT__control_unit_instance__DOT__ALUOp))) {
        vlSelf->top__DOT__ALUctrl = (0U == (7U & (vlSelf->top__DOT__instr 
                                                  >> 0xcU)));
    }
    vlSelf->top__DOT__ImmOp = ((IData)(vlSelf->top__DOT__ImmSrc)
                                ? ((vlSelf->top__DOT__instr 
                                    >> 0x1fU) ? (0xfffff000U 
                                                 | (vlSelf->top__DOT__instr 
                                                    >> 0x14U))
                                    : (vlSelf->top__DOT__instr 
                                       >> 0x14U)) : 
                               ((vlSelf->top__DOT__instr 
                                 >> 0x1fU) ? (0xfffff000U 
                                              | ((0x800U 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 0x14U)) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT__instr 
                                                        << 3U)) 
                                                    | ((0x3f0U 
                                                        & (vlSelf->top__DOT__instr 
                                                           >> 0x15U)) 
                                                       | (0xfU 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 8U))))))
                                 : ((0x800U & (vlSelf->top__DOT__instr 
                                               >> 0x14U)) 
                                    | ((0x400U & (vlSelf->top__DOT__instr 
                                                  << 3U)) 
                                       | ((0x3f0U & 
                                           (vlSelf->top__DOT__instr 
                                            >> 0x15U)) 
                                          | (0xfU & 
                                             (vlSelf->top__DOT__instr 
                                              >> 8U)))))));
    vlSelf->top__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                 ? vlSelf->top__DOT__ImmOp
                                 : vlSelf->top__DOT__reg_file_instance__DOT__regfile_array
                                [(0x1fU & (vlSelf->top__DOT__instr 
                                           >> 0x14U))]);
    if (vlSelf->top__DOT__ALUctrl) {
        vlSelf->top__DOT__ALUout = (vlSelf->top__DOT__ALUop1 
                                    + vlSelf->top__DOT__ALUop2);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__ALUctrl)))) {
        vlSelf->top__DOT__EQ = ((~ (IData)(vlSelf->top__DOT__ALUctrl)) 
                                & (0U == (vlSelf->top__DOT__ALUop1 
                                          - vlSelf->top__DOT__ALUop2)));
    }
    if (vlSelf->top__DOT__control_unit_instance__DOT__Branch) {
        vlSelf->top__DOT__PCsrc = (1U & (~ (IData)(vlSelf->top__DOT__EQ)));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__control_unit_instance__DOT__Branch)))) {
        vlSelf->top__DOT__PCsrc = 0U;
    }
    vlSelf->top__DOT__pc_top_instance__DOT__next_PC 
        = ((IData)(vlSelf->top__DOT__PCsrc) ? (vlSelf->top__DOT__PC 
                                               + vlSelf->top__DOT__ImmOp)
            : ((IData)(4U) + vlSelf->top__DOT__PC));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUctrl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc_top_instance__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->top__DOT__instr_mem_instance__DOT__array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__control_unit_instance__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__control_unit_instance__DOT__Branch = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->top__DOT__reg_file_instance__DOT__regfile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
