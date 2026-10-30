// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vrupcounter_tb__Syms.h"


void Vrupcounter_tb___024root__trace_chg_0_sub_0(Vrupcounter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrupcounter_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root__trace_chg_0\n"); );
    // Body
    Vrupcounter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrupcounter_tb___024root*>(voidSelf);
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vrupcounter_tb___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vrupcounter_tb___024root__trace_chg_0_sub_0(Vrupcounter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root__trace_chg_0_sub_0\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.rupcounter_tb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rupcounter_tb__DOT__reset));
    bufp->chgCData(oldp+2,(vlSelfRef.rupcounter_tb__DOT__uut__DOT__q),4);
    bufp->chgBit(oldp+3,(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff0__DOT__q));
    bufp->chgBit(oldp+4,(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff1__DOT__q));
    bufp->chgBit(oldp+5,(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff2__DOT__q));
    bufp->chgBit(oldp+6,(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff3__DOT__q));
    bufp->chgBit(oldp+7,((1U & (~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff0__DOT__q)))));
    bufp->chgBit(oldp+8,((1U & (~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff1__DOT__q)))));
    bufp->chgBit(oldp+9,((1U & (~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff2__DOT__q)))));
}

void Vrupcounter_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root__trace_cleanup\n"); );
    // Locals
    ::VlUnpacked<::CData/*0:0*/, 1> __VtraceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __VtraceActivity[__Vi0] = 0;
    }
    // Body
    Vrupcounter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrupcounter_tb___024root*>(voidSelf);
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __VtraceActivity[0U] = 0U;
}
