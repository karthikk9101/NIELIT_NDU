// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrupcountertb.h for the primary calling header

#include "Vrupcountertb__pch.h"

void Vrupcountertb___024root___ctor_var_reset(Vrupcountertb___024root* vlSelf);

void Vrupcountertb___024root__ctor(Vrupcountertb___024root* vlSelf, Vrupcountertb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    // Reset structure values
    Vrupcountertb___024root___ctor_var_reset(vlSelf);
}

Vrupcountertb___024root::Vrupcountertb___024root(Vrupcountertb__Syms* symsp, const char* namep) {
    Vrupcountertb___024root__ctor(this, symsp, namep);
}

void Vrupcountertb___024root__dtor(Vrupcountertb___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vrupcountertb___024root::~Vrupcountertb___024root() {
    Vrupcountertb___024root__dtor(this);
}
