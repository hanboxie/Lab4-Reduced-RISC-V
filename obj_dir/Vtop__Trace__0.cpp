// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__instr),32);
        bufp->chgSData(oldp+1,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 0xfU))),16);
        bufp->chgSData(oldp+2,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 0x14U))),16);
        bufp->chgSData(oldp+3,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 7U))),16);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__RegWrite));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__ALUctrl));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__ALUsrc));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__ImmSrc));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__PCsrc));
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__ALUop1),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__ALUop2),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__ALUout),32);
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__EQ));
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ImmOp),32);
        bufp->chgCData(oldp+14,((0x7fU & vlSelf->top__DOT__instr)),7);
        bufp->chgCData(oldp+15,((7U & (vlSelf->top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__control_unit_instance__DOT__ALUOp),2);
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__control_unit_instance__DOT__Branch));
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__control_unit_instance__DOT__dummyWire),22);
    }
    bufp->chgBit(oldp+19,(vlSelf->clk));
    bufp->chgBit(oldp+20,(vlSelf->rst));
    bufp->chgIData(oldp+21,(vlSelf->a0),32);
    bufp->chgIData(oldp+22,(vlSelf->top__DOT__reg_file_instance__DOT__regfile_array
                            [(0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))]),32);
    bufp->chgIData(oldp+23,(vlSelf->top__DOT__PC),32);
    bufp->chgIData(oldp+24,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->chgIData(oldp+25,((vlSelf->top__DOT__PC + vlSelf->top__DOT__ImmOp)),32);
    bufp->chgIData(oldp+26,(((IData)(vlSelf->top__DOT__PCsrc)
                              ? (vlSelf->top__DOT__PC 
                                 + vlSelf->top__DOT__ImmOp)
                              : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
