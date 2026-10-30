// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1_tb.h for the primary calling header

#include "Vmux4x1_tb__pch.h"

void Vmux4x1_tb___024root___ctor_var_reset(Vmux4x1_tb___024root* vlSelf);

void Vmux4x1_tb___024root__ctor(Vmux4x1_tb___024root* vlSelf, Vmux4x1_tb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    // Reset structure values
    Vmux4x1_tb___024root___ctor_var_reset(vlSelf);
}

Vmux4x1_tb___024root::Vmux4x1_tb___024root(Vmux4x1_tb__Syms* symsp, const char* namep) {
    Vmux4x1_tb___024root__ctor(this, symsp, namep);
}

void Vmux4x1_tb___024root__dtor(Vmux4x1_tb___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vmux4x1_tb___024root::~Vmux4x1_tb___024root() {
    Vmux4x1_tb___024root__dtor(this);
}
