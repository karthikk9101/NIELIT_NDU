// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalf_adder_tb.h for the primary calling header

#include "Vhalf_adder_tb__pch.h"

VL_ATTR_COLD void Vhalf_adder_tb___024unit___ctor_var_reset(Vhalf_adder_tb___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vhalf_adder_tb___024unit___ctor_var_reset\n"); );
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorPending = 0;
    vlSelf->__VmonitorOff = 0;
}
