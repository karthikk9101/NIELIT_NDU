// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vhalfadderdataflowtb__Syms.h"


void Vhalfadderdataflowtb___024root__trace_chg_0_sub_0(Vhalfadderdataflowtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhalfadderdataflowtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root__trace_chg_0\n"); );
    // Body
    Vhalfadderdataflowtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalfadderdataflowtb___024root*>(voidSelf);
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vhalfadderdataflowtb___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vhalfadderdataflowtb___024root__trace_chg_0_sub_0(Vhalfadderdataflowtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root__trace_chg_0_sub_0\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.halfadderdataflowtb__DOT__a));
    bufp->chgBit(oldp+1,(vlSelfRef.halfadderdataflowtb__DOT__b));
    bufp->chgBit(oldp+2,(vlSelfRef.halfadderdataflowtb__DOT__uut__DOT__sum));
    bufp->chgBit(oldp+3,(vlSelfRef.halfadderdataflowtb__DOT__uut__DOT__carry));
}

void Vhalfadderdataflowtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root__trace_cleanup\n"); );
    // Locals
    ::VlUnpacked<::CData/*0:0*/, 1> __VtraceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __VtraceActivity[__Vi0] = 0;
    }
    // Body
    Vhalfadderdataflowtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalfadderdataflowtb___024root*>(voidSelf);
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __VtraceActivity[0U] = 0U;
}
