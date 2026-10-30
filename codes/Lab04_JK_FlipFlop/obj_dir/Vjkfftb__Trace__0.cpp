// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vjkfftb__Syms.h"


void Vjkfftb___024root__trace_chg_0_sub_0(Vjkfftb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vjkfftb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root__trace_chg_0\n"); );
    // Body
    Vjkfftb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjkfftb___024root*>(voidSelf);
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vjkfftb___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vjkfftb___024root__trace_chg_0_sub_0(Vjkfftb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root__trace_chg_0_sub_0\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.jkfftb__DOT__preset));
    bufp->chgBit(oldp+1,(vlSelfRef.jkfftb__DOT__clk));
    bufp->chgBit(oldp+2,(vlSelfRef.jkfftb__DOT__j));
    bufp->chgBit(oldp+3,(vlSelfRef.jkfftb__DOT__k));
    bufp->chgBit(oldp+4,(vlSelfRef.jkfftb__DOT__uut__DOT__q));
    bufp->chgBit(oldp+5,((1U & (~ (::IData)(vlSelfRef.jkfftb__DOT__uut__DOT__q)))));
}

void Vjkfftb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root__trace_cleanup\n"); );
    // Locals
    ::VlUnpacked<::CData/*0:0*/, 1> __VtraceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __VtraceActivity[__Vi0] = 0;
    }
    // Body
    Vjkfftb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjkfftb___024root*>(voidSelf);
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __VtraceActivity[0U] = 0U;
}
