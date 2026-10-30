// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vupcountertb.h for the primary calling header

#include "Vupcountertb__pch.h"

VL_ATTR_COLD void Vupcountertb___024unit___ctor_var_reset(Vupcountertb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vupcountertb___024unit___ctor_var_reset\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorPending = 0;
    vlSelf->__VmonitorOff = 0;
}
