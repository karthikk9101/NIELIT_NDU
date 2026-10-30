// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalfadderdataflowtb.h for the primary calling header

#include "Vhalfadderdataflowtb__pch.h"

void Vhalfadderdataflowtb___024unit___ctor_var_reset(Vhalfadderdataflowtb___024unit* vlSelf);

void Vhalfadderdataflowtb___024unit__ctor(Vhalfadderdataflowtb___024unit* vlSelf, Vhalfadderdataflowtb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vhalfadderdataflowtb___024unit___ctor_var_reset(vlSelf);
}

Vhalfadderdataflowtb___024unit::Vhalfadderdataflowtb___024unit(Vhalfadderdataflowtb__Syms* symsp, const char* namep) {
    Vhalfadderdataflowtb___024unit__ctor(this, symsp, namep);
}

void Vhalfadderdataflowtb___024unit__dtor(Vhalfadderdataflowtb___024unit* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vhalfadderdataflowtb___024unit::~Vhalfadderdataflowtb___024unit() {
    Vhalfadderdataflowtb___024unit__dtor(this);
}
