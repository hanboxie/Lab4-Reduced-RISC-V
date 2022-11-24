// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__pc_top_instance__DOT__next_PC);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ __Vdlyvdim0__top__DOT__reg_file_instance__DOT__regfile_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__reg_file_instance__DOT__regfile_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__reg_file_instance__DOT__regfile_array__v0;
    // Body
    __Vdlyvset__top__DOT__reg_file_instance__DOT__regfile_array__v0 = 0U;
    if (vlSelf->top__DOT__RegWrite) {
        __Vdlyvval__top__DOT__reg_file_instance__DOT__regfile_array__v0 
            = vlSelf->top__DOT__ALUout;
        __Vdlyvset__top__DOT__reg_file_instance__DOT__regfile_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__reg_file_instance__DOT__regfile_array__v0 
            = (0x1fU & (vlSelf->top__DOT__instr >> 7U));
    }
    if (__Vdlyvset__top__DOT__reg_file_instance__DOT__regfile_array__v0) {
        vlSelf->top__DOT__reg_file_instance__DOT__regfile_array[__Vdlyvdim0__top__DOT__reg_file_instance__DOT__regfile_array__v0] 
            = __Vdlyvval__top__DOT__reg_file_instance__DOT__regfile_array__v0;
    }
    vlSelf->a0 = vlSelf->top__DOT__reg_file_instance__DOT__regfile_array
        [0xaU];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
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
    if (((IData)(vlSelf->top__DOT__control_unit_instance__DOT__Branch) 
         & (~ (IData)(vlSelf->top__DOT__EQ)))) {
        vlSelf->top__DOT__PCsrc = 1U;
    } else if (((IData)(vlSelf->top__DOT__control_unit_instance__DOT__Branch) 
                & (~ (IData)(vlSelf->top__DOT__EQ)))) {
        vlSelf->top__DOT__PCsrc = 0U;
    }
    vlSelf->top__DOT__pc_top_instance__DOT__next_PC 
        = ((IData)(vlSelf->top__DOT__PCsrc) ? (vlSelf->top__DOT__PC 
                                               + vlSelf->top__DOT__ImmOp)
            : ((IData)(4U) + vlSelf->top__DOT__PC));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
