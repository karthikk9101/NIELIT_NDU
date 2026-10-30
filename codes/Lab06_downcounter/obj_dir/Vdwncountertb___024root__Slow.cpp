// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdwncountertb.h for the primary calling header

#include "Vdwncountertb__pch.h"

void Vdwncountertb___024root___ctor_var_reset(Vdwncountertb___024root* vlSelf);

void Vdwncountertb___024root__ctor(Vdwncountertb___024root* vlSelf, Vdwncountertb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    // Reset structure values
    Vdwncountertb___024root___ctor_var_reset(vlSelf);
}

Vdwncountertb___024root::Vdwncountertb___024root(Vdwncountertb__Syms* symsp, const char* namep) {
    Vdwncountertb___024root__ctor(this, symsp, namep);
}

void Vdwncountertb___024root__dtor(Vdwncountertb___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vdwncountertb___024root::~Vdwncountertb___024root() {
    Vdwncountertb___024root__dtor(this);
}
