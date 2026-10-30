// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjkfftb.h for the primary calling header

#include "Vjkfftb__pch.h"

void Vjkfftb___024unit___ctor_var_reset(Vjkfftb___024unit* vlSelf);

void Vjkfftb___024unit__ctor(Vjkfftb___024unit* vlSelf, Vjkfftb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vjkfftb___024unit___ctor_var_reset(vlSelf);
}

Vjkfftb___024unit::Vjkfftb___024unit(Vjkfftb__Syms* symsp, const char* namep) {
    Vjkfftb___024unit__ctor(this, symsp, namep);
}

void Vjkfftb___024unit__dtor(Vjkfftb___024unit* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vjkfftb___024unit::~Vjkfftb___024unit() {
    Vjkfftb___024unit__dtor(this);
}
