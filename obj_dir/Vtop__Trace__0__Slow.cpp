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
    tracep->declBit(c+20,"clk", false,-1);
    tracep->declBit(c+21,"rst", false,-1);
    tracep->declBus(c+22,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+28,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+20,"clk", false,-1);
    tracep->declBit(c+21,"rst", false,-1);
    tracep->declBus(c+22,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+2,"rs1", false,-1, 15,0);
    tracep->declBus(c+3,"rs2", false,-1, 15,0);
    tracep->declBus(c+4,"rd", false,-1, 15,0);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBit(c+6,"ALUctrl", false,-1);
    tracep->declBit(c+7,"ALUsrc", false,-1);
    tracep->declBit(c+8,"ImmSrc", false,-1);
    tracep->declBit(c+9,"PCsrc", false,-1);
    tracep->declBus(c+10,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+11,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+23,"regOp2", false,-1, 31,0);
    tracep->declBus(c+12,"ALUout", false,-1, 31,0);
    tracep->declBit(c+13,"EQ", false,-1);
    tracep->declBus(c+14,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+24,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("alu_instance ");
    tracep->declBus(c+29,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"ALUctrl", false,-1);
    tracep->declBus(c+10,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+11,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+12,"SUM", false,-1, 31,0);
    tracep->declBit(c+13,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit_instance ");
    tracep->declBit(c+13,"EQ", false,-1);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBit(c+6,"ALUctrl", false,-1);
    tracep->declBit(c+7,"ALUsrc", false,-1);
    tracep->declBit(c+8,"ImmSrc", false,-1);
    tracep->declBit(c+9,"PCsrc", false,-1);
    tracep->declBus(c+15,"op", false,-1, 6,0);
    tracep->declBus(c+16,"funct3", false,-1, 2,0);
    tracep->declBus(c+17,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+18,"Branch", false,-1);
    tracep->declBus(c+19,"dummyWire", false,-1, 21,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem_instance ");
    tracep->declBus(c+29,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+24,"A", false,-1, 31,0);
    tracep->declBus(c+1,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_top_instance ");
    tracep->declBus(c+29,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+20,"clk", false,-1);
    tracep->declBit(c+21,"rst", false,-1);
    tracep->declBit(c+9,"PCsrc", false,-1);
    tracep->declBus(c+14,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+24,"PC", false,-1, 31,0);
    tracep->declBus(c+25,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+26,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+27,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("ProgramCounter ");
    tracep->declBus(c+29,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+20,"clk", false,-1);
    tracep->declBit(c+21,"rst", false,-1);
    tracep->declBus(c+27,"next_PC", false,-1, 31,0);
    tracep->declBus(c+24,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_file_instance ");
    tracep->declBus(c+28,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+20,"clk", false,-1);
    tracep->declBus(c+2,"AD1", false,-1, 15,0);
    tracep->declBus(c+3,"AD2", false,-1, 15,0);
    tracep->declBus(c+4,"AD3", false,-1, 15,0);
    tracep->declBit(c+5,"WE3", false,-1);
    tracep->declBus(c+12,"WD3", false,-1, 31,0);
    tracep->declBus(c+10,"RD1", false,-1, 31,0);
    tracep->declBus(c+23,"RD2", false,-1, 31,0);
    tracep->declBus(c+22,"a0", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sign_extend_instance ");
    tracep->declBit(c+8,"ImmSrc", false,-1);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+14,"ImmOp", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__instr),32);
    bufp->fullSData(oldp+2,((0x1fU & (vlSelf->top__DOT__instr 
                                      >> 0xfU))),16);
    bufp->fullSData(oldp+3,((0x1fU & (vlSelf->top__DOT__instr 
                                      >> 0x14U))),16);
    bufp->fullSData(oldp+4,((0x1fU & (vlSelf->top__DOT__instr 
                                      >> 7U))),16);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__ALUctrl));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ALUsrc));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__ImmSrc));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__PCsrc));
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__ALUop1),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__ALUop2),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__ALUout),32);
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__EQ));
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullCData(oldp+15,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+16,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__control_unit_instance__DOT__ALUOp),2);
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__control_unit_instance__DOT__Branch));
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__control_unit_instance__DOT__dummyWire),22);
    bufp->fullBit(oldp+20,(vlSelf->clk));
    bufp->fullBit(oldp+21,(vlSelf->rst));
    bufp->fullIData(oldp+22,(vlSelf->a0),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__reg_file_instance__DOT__regfile_array
                             [(0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+25,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+26,((vlSelf->top__DOT__PC 
                              + vlSelf->top__DOT__ImmOp)),32);
    bufp->fullIData(oldp+27,(((IData)(vlSelf->top__DOT__PCsrc)
                               ? (vlSelf->top__DOT__PC 
                                  + vlSelf->top__DOT__ImmOp)
                               : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
    bufp->fullIData(oldp+28,(0x10U),32);
    bufp->fullIData(oldp+29,(0x20U),32);
    bufp->fullIData(oldp+30,(8U),32);
}
