// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vrupcountertb__Syms.h"


void Vrupcountertb___024root__trace_chg_0_sub_0(Vrupcountertb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrupcountertb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root__trace_chg_0\n"); );
    // Body
    Vrupcountertb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrupcountertb___024root*>(voidSelf);
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vrupcountertb___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vrupcountertb___024root__trace_chg_0_sub_0(Vrupcountertb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root__trace_chg_0_sub_0\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.rupcountertb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rupcountertb__DOT__reset));
    bufp->chgCData(oldp+2,(vlSelfRef.rupcountertb__DOT__uut__DOT__q),4);
    bufp->chgBit(oldp+3,(vlSelfRef.rupcountertb__DOT__uut__DOT__tff0__DOT__q));
    bufp->chgBit(oldp+4,(vlSelfRef.rupcountertb__DOT__uut__DOT__tff1__DOT__q));
    bufp->chgBit(oldp+5,(vlSelfRef.rupcountertb__DOT__uut__DOT__tff2__DOT__q));
    bufp->chgBit(oldp+6,(vlSelfRef.rupcountertb__DOT__uut__DOT__tff3__DOT__q));
    bufp->chgBit(oldp+7,((1U & (~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff0__DOT__q)))));
    bufp->chgBit(oldp+8,((1U & (~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff1__DOT__q)))));
    bufp->chgBit(oldp+9,((1U & (~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff2__DOT__q)))));
}

void Vrupcountertb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root__trace_cleanup\n"); );
    // Locals
    ::VlUnpacked<::CData/*0:0*/, 1> __VtraceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __VtraceActivity[__Vi0] = 0;
    }
    // Body
    Vrupcountertb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrupcountertb___024root*>(voidSelf);
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __VtraceActivity[0U] = 0U;
}
