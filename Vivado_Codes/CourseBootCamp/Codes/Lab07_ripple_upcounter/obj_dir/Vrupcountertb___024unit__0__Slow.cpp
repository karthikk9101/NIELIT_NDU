// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrupcountertb.h for the primary calling header

#include "Vrupcountertb__pch.h"

VL_ATTR_COLD void Vrupcountertb___024unit___ctor_var_reset(Vrupcountertb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrupcountertb___024unit___ctor_var_reset\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorPending = 0;
    vlSelf->__VmonitorOff = 0;
}
