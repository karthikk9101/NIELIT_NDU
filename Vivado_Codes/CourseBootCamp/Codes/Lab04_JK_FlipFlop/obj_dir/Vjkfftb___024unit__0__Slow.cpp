// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjkfftb.h for the primary calling header

#include "Vjkfftb__pch.h"

VL_ATTR_COLD void Vjkfftb___024unit___ctor_var_reset(Vjkfftb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjkfftb___024unit___ctor_var_reset\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorPending = 0;
    vlSelf->__VmonitorOff = 0;
}
