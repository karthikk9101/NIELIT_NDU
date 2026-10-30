// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalf_adder_tb.h for the primary calling header

#include "Vhalf_adder_tb__pch.h"

void Vhalf_adder_tb___024root___ctor_var_reset(Vhalf_adder_tb___024root* vlSelf);

void Vhalf_adder_tb___024root__ctor(Vhalf_adder_tb___024root* vlSelf, Vhalf_adder_tb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    // Reset structure values
    Vhalf_adder_tb___024root___ctor_var_reset(vlSelf);
}

Vhalf_adder_tb___024root::Vhalf_adder_tb___024root(Vhalf_adder_tb__Syms* symsp, const char* namep) {
    Vhalf_adder_tb___024root__ctor(this, symsp, namep);
}

void Vhalf_adder_tb___024root__dtor(Vhalf_adder_tb___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vhalf_adder_tb___024root::~Vhalf_adder_tb___024root() {
    Vhalf_adder_tb___024root__dtor(this);
}
