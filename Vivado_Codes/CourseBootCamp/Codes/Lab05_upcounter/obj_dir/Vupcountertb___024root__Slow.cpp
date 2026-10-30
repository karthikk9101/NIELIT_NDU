// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vupcountertb.h for the primary calling header

#include "Vupcountertb__pch.h"

void Vupcountertb___024root___ctor_var_reset(Vupcountertb___024root* vlSelf);

void Vupcountertb___024root__ctor(Vupcountertb___024root* vlSelf, Vupcountertb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    // Reset structure values
    Vupcountertb___024root___ctor_var_reset(vlSelf);
}

Vupcountertb___024root::Vupcountertb___024root(Vupcountertb__Syms* symsp, const char* namep) {
    Vupcountertb___024root__ctor(this, symsp, namep);
}

void Vupcountertb___024root__dtor(Vupcountertb___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vupcountertb___024root::~Vupcountertb___024root() {
    Vupcountertb___024root__dtor(this);
}
