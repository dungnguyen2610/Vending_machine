// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"nickel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"dime_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"quarter_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"soda_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"change_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+4,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"nickel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"dime_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"quarter_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"soda_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"change_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+4,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"nickel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"dime_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"quarter_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"change_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+8,"soda_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    {
        const char* __VenumItemNames[]
        = {"S0", "S1", "S2", "S3", "S4", "S5", "S6", 
                                "S7", "S8"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(1, "vending_machine.state_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+1,"current_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,"next_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,"out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,"soda",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__dut__DOT__current_state),4);
    bufp->fullCData(oldp+2,(((5U == (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                              ? 1U : ((6U == (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                       ? 2U : ((7U 
                                                == (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                                ? 3U
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                                    ? 4U
                                                    : 0U))))),3);
    bufp->fullBit(oldp+3,(((0U != (IData)(vlSelf->top__DOT__dut__DOT__current_state)) 
                           & ((1U != (IData)(vlSelf->top__DOT__dut__DOT__current_state)) 
                              & ((2U != (IData)(vlSelf->top__DOT__dut__DOT__current_state)) 
                                 & (3U != (IData)(vlSelf->top__DOT__dut__DOT__current_state)))))));
    bufp->fullBit(oldp+4,(vlSelf->clk_i));
    bufp->fullBit(oldp+5,(vlSelf->nickel_i));
    bufp->fullBit(oldp+6,(vlSelf->dime_i));
    bufp->fullBit(oldp+7,(vlSelf->quarter_i));
    bufp->fullBit(oldp+8,(vlSelf->soda_o));
    bufp->fullCData(oldp+9,(vlSelf->change_o),3);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__dut__DOT__next_state),4);
}
