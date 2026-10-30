// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalfadderdataflowtb.h for the primary calling header

#include "Vhalfadderdataflowtb__pch.h"

void Vhalfadderdataflowtb___024root___ctor_var_reset(Vhalfadderdataflowtb___024root* vlSelf);

void Vhalfadderdataflowtb___024root__ctor(Vhalfadderdataflowtb___024root* vlSelf, Vhalfadderdataflowtb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    VL_INPLACE_CONSTRUCT(vlSelf->__Vnontrivs.__VdlySched, *vlSelf->vlSymsp->_vm_contextp__);
    // Reset structure values
    Vhalfadderdataflowtb___024root___ctor_var_reset(vlSelf);
}

Vhalfadderdataflowtb___024root::Vhalfadderdataflowtb___024root(Vhalfadderdataflowtb__Syms* symsp, const char* namep) {
    Vhalfadderdataflowtb___024root__ctor(this, symsp, namep);
}

void Vhalfadderdataflowtb___024root__dtor(Vhalfadderdataflowtb___024root* vlSelf) {
    // Destroy members
    VL_INPLACE_DESTRUCT(vlSelf->__Vnontrivs.__VdlySched);
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vhalfadderdataflowtb___024root::~Vhalfadderdataflowtb___024root() {
    Vhalfadderdataflowtb___024root__dtor(this);
}
