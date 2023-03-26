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
    vlSelf->top__DOT__dut__DOT__current_state = vlSelf->top__DOT__dut__DOT__next_state;
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vtop__ConstPool__TABLE_hd73f5253_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vtop__ConstPool__TABLE_h53a67f24_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vtop__ConstPool__TABLE_h65c63b4c_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->quarter_i) << 0xaU) 
                    | (((IData)(vlSelf->dime_i) << 9U) 
                       | (((IData)(vlSelf->nickel_i) 
                           << 8U) | (((IData)(vlSelf->top__DOT__dut__DOT__current_state) 
                                      << 4U) | ((((0U 
                                                   != (IData)(vlSelf->top__DOT__dut__DOT__current_state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->top__DOT__dut__DOT__current_state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->top__DOT__dut__DOT__current_state)) 
                                                        & (3U 
                                                           != (IData)(vlSelf->top__DOT__dut__DOT__current_state))))) 
                                                 << 3U) 
                                                | ((5U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                                     ? 2U
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                                       ? 4U
                                                       : 0U)))))))));
    vlSelf->change_o = Vtop__ConstPool__TABLE_hd73f5253_0
        [__Vtableidx1];
    vlSelf->soda_o = Vtop__ConstPool__TABLE_h53a67f24_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__next_state = Vtop__ConstPool__TABLE_h65c63b4c_0
        [__Vtableidx1];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->nickel_i & 0xfeU))) {
        Verilated::overWidthError("nickel_i");}
    if (VL_UNLIKELY((vlSelf->dime_i & 0xfeU))) {
        Verilated::overWidthError("dime_i");}
    if (VL_UNLIKELY((vlSelf->quarter_i & 0xfeU))) {
        Verilated::overWidthError("quarter_i");}
}
#endif  // VL_DEBUG
