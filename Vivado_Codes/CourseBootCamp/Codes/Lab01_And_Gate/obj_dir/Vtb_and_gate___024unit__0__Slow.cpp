// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_and_gate.h for the primary calling header

#include "Vtb_and_gate__pch.h"

VL_ATTR_COLD void Vtb_and_gate___024unit___ctor_var_reset(Vtb_and_gate___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_and_gate___024unit___ctor_var_reset\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorPending = 0;
    vlSelf->__VmonitorOff = 0;
}
