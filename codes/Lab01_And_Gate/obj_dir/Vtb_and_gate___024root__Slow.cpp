// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_and_gate.h for the primary calling header

#include "Vtb_and_gate__pch.h"

void Vtb_and_gate___024root___ctor_var_reset(Vtb_and_gate___024root* vlSelf);

void Vtb_and_gate___024root__ctor(Vtb_and_gate___024root* vlSelf, Vtb_and_gate__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    // Reset structure values
    Vtb_and_gate___024root___ctor_var_reset(vlSelf);
}

Vtb_and_gate___024root::Vtb_and_gate___024root(Vtb_and_gate__Syms* symsp, const char* namep) {
    Vtb_and_gate___024root__ctor(this, symsp, namep);
}

void Vtb_and_gate___024root__dtor(Vtb_and_gate___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_and_gate___024root::~Vtb_and_gate___024root() {
    Vtb_and_gate___024root__dtor(this);
}
