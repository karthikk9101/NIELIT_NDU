// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrupcounter_tb.h for the primary calling header

#include "Vrupcounter_tb__pch.h"

void Vrupcounter_tb___024root___ctor_var_reset(Vrupcounter_tb___024root* vlSelf);

void Vrupcounter_tb___024root__ctor(Vrupcounter_tb___024root* vlSelf, Vrupcounter_tb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    // Reset structure values
    Vrupcounter_tb___024root___ctor_var_reset(vlSelf);
}

Vrupcounter_tb___024root::Vrupcounter_tb___024root(Vrupcounter_tb__Syms* symsp, const char* namep) {
    Vrupcounter_tb___024root__ctor(this, symsp, namep);
}

void Vrupcounter_tb___024root__dtor(Vrupcounter_tb___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vrupcounter_tb___024root::~Vrupcounter_tb___024root() {
    Vrupcounter_tb___024root__dtor(this);
}
