// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalf_adder_tb.h for the primary calling header

#include "Vhalf_adder_tb__pch.h"

void Vhalf_adder_tb___024unit___ctor_var_reset(Vhalf_adder_tb___024unit* vlSelf);

void Vhalf_adder_tb___024unit__ctor(Vhalf_adder_tb___024unit* vlSelf, Vhalf_adder_tb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vhalf_adder_tb___024unit___ctor_var_reset(vlSelf);
}

Vhalf_adder_tb___024unit::Vhalf_adder_tb___024unit(Vhalf_adder_tb__Syms* symsp, const char* namep) {
    Vhalf_adder_tb___024unit__ctor(this, symsp, namep);
}

void Vhalf_adder_tb___024unit__dtor(Vhalf_adder_tb___024unit* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vhalf_adder_tb___024unit::~Vhalf_adder_tb___024unit() {
    Vhalf_adder_tb___024unit__dtor(this);
}
