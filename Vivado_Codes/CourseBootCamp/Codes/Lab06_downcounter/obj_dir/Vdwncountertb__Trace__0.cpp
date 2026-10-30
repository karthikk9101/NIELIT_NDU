// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdwncountertb__Syms.h"


void Vdwncountertb___024root__trace_chg_0_sub_0(Vdwncountertb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdwncountertb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root__trace_chg_0\n"); );
    // Body
    Vdwncountertb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdwncountertb___024root*>(voidSelf);
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vdwncountertb___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vdwncountertb___024root__trace_chg_0_sub_0(Vdwncountertb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root__trace_chg_0_sub_0\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.dwncountertb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.dwncountertb__DOT__reset));
    bufp->chgCData(oldp+2,(vlSelfRef.dwncountertb__DOT__uut__DOT__count),4);
}

void Vdwncountertb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root__trace_cleanup\n"); );
    // Locals
    ::VlUnpacked<::CData/*0:0*/, 1> __VtraceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __VtraceActivity[__Vi0] = 0;
    }
    // Body
    Vdwncountertb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdwncountertb___024root*>(voidSelf);
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __VtraceActivity[0U] = 0U;
}
