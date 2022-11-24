// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+21,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+27,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+21,"a0", false,-1, 31,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBus(c+4,"rs1", false,-1, 15,0);
    tracep->declBus(c+5,"rs2", false,-1, 15,0);
    tracep->declBus(c+6,"rd", false,-1, 15,0);
    tracep->declBit(c+10,"RegWrite", false,-1);
    tracep->declBit(c+11,"ALUctrl", false,-1);
    tracep->declBit(c+12,"ALUsrc", false,-1);
    tracep->declBit(c+13,"ImmSrc", false,-1);
    tracep->declBit(c+14,"PCsrc", false,-1);
    tracep->declBus(c+7,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+15,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+22,"regOp2", false,-1, 31,0);
    tracep->declBus(c+16,"ALUout", false,-1, 31,0);
    tracep->declBit(c+17,"EQ", false,-1);
    tracep->declBus(c+18,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+23,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"ALUctrl", false,-1);
    tracep->declBus(c+7,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+15,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+16,"SUM", false,-1, 31,0);
    tracep->declBit(c+17,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit_instance ");
    tracep->declBit(c+17,"EQ", false,-1);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBit(c+10,"RegWrite", false,-1);
    tracep->declBit(c+11,"ALUctrl", false,-1);
    tracep->declBit(c+12,"ALUsrc", false,-1);
    tracep->declBit(c+13,"ImmSrc", false,-1);
    tracep->declBit(c+14,"PCsrc", false,-1);
    tracep->declBus(c+8,"op", false,-1, 6,0);
    tracep->declBus(c+9,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem_instance ");
    tracep->declBus(c+28,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+23,"A", false,-1, 31,0);
    tracep->declBus(c+3,"RD", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"array", true,(i+-1), 7,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_top_instance ");
    tracep->declBus(c+28,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBit(c+14,"PCsrc", false,-1);
    tracep->declBus(c+18,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+23,"PC", false,-1, 31,0);
    tracep->declBus(c+24,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+25,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+26,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("ProgramCounter ");
    tracep->declBus(c+28,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBit(c+20,"rst", false,-1);
    tracep->declBus(c+26,"next_PC", false,-1, 31,0);
    tracep->declBus(c+23,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_file_instance ");
    tracep->declBus(c+27,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBus(c+4,"AD1", false,-1, 15,0);
    tracep->declBus(c+5,"AD2", false,-1, 15,0);
    tracep->declBus(c+6,"AD3", false,-1, 15,0);
    tracep->declBit(c+10,"WE3", false,-1);
    tracep->declBus(c+16,"WD3", false,-1, 31,0);
    tracep->declBus(c+7,"RD1", false,-1, 31,0);
    tracep->declBus(c+22,"RD2", false,-1, 31,0);
    tracep->declBus(c+21,"a0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sign_extend_instance ");
    tracep->declBit(c+13,"ImmSrc", false,-1);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->declBus(c+18,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__instr_mem_instance__DOT__array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__instr_mem_instance__DOT__array[1]),8);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__instr),32);
    bufp->fullSData(oldp+4,((0x1fU & (vlSelf->top__DOT__instr 
                                      >> 0xfU))),16);
    bufp->fullSData(oldp+5,((0x1fU & (vlSelf->top__DOT__instr 
                                      >> 0x14U))),16);
    bufp->fullSData(oldp+6,((0x1fU & (vlSelf->top__DOT__instr 
                                      >> 7U))),16);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__ALUop1),32);
    bufp->fullCData(oldp+8,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+9,((7U & (vlSelf->top__DOT__instr 
                                   >> 0xcU))),3);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__ALUctrl));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__ALUsrc));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__ImmSrc));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__PCsrc));
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ALUop2),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__ALUout),32);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__EQ));
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullBit(oldp+19,(vlSelf->clk));
    bufp->fullBit(oldp+20,(vlSelf->rst));
    bufp->fullIData(oldp+21,(vlSelf->a0),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__reg_file_instance__DOT__regfile_array
                             [(0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+24,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+25,((vlSelf->top__DOT__PC 
                              + vlSelf->top__DOT__ImmOp)),32);
    bufp->fullIData(oldp+26,(((IData)(vlSelf->top__DOT__PCsrc)
                               ? (vlSelf->top__DOT__PC 
                                  + vlSelf->top__DOT__ImmOp)
                               : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
    bufp->fullIData(oldp+27,(0x10U),32);
    bufp->fullIData(oldp+28,(0x20U),32);
    bufp->fullIData(oldp+29,(8U),32);
}
