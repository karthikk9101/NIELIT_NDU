// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrupcounter_tb.h for the primary calling header

#include "Vrupcounter_tb__pch.h"

VL_ATTR_COLD void Vrupcounter_tb___024unit___ctor_var_reset(Vrupcounter_tb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrupcounter_tb___024unit___ctor_var_reset\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorPending = 0;
    vlSelf->__VmonitorOff = 0;
}
