// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalfadderbehatb.h for the primary calling header

#include "Vhalfadderbehatb__pch.h"

void Vhalfadderbehatb___024root___ctor_var_reset(Vhalfadderbehatb___024root* vlSelf);

void Vhalfadderbehatb___024root__ctor(Vhalfadderbehatb___024root* vlSelf, Vhalfadderbehatb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    // Reset structure values
    Vhalfadderbehatb___024root___ctor_var_reset(vlSelf);
}

Vhalfadderbehatb___024root::Vhalfadderbehatb___024root(Vhalfadderbehatb__Syms* symsp, const char* namep) {
    Vhalfadderbehatb___024root__ctor(this, symsp, namep);
}

void Vhalfadderbehatb___024root__dtor(Vhalfadderbehatb___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vhalfadderbehatb___024root::~Vhalfadderbehatb___024root() {
    Vhalfadderbehatb___024root__dtor(this);
}
