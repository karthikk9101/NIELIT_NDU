// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vupcountertb.h for the primary calling header

#include "Vupcountertb__pch.h"

void Vupcountertb___024unit___ctor_var_reset(Vupcountertb___024unit* vlSelf);

void Vupcountertb___024unit__ctor(Vupcountertb___024unit* vlSelf, Vupcountertb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vupcountertb___024unit___ctor_var_reset(vlSelf);
}

Vupcountertb___024unit::Vupcountertb___024unit(Vupcountertb__Syms* symsp, const char* namep) {
    Vupcountertb___024unit__ctor(this, symsp, namep);
}

void Vupcountertb___024unit__dtor(Vupcountertb___024unit* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vupcountertb___024unit::~Vupcountertb___024unit() {
    Vupcountertb___024unit__dtor(this);
}
