// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrupcountertb.h for the primary calling header

#include "Vrupcountertb__pch.h"

void Vrupcountertb___024unit___ctor_var_reset(Vrupcountertb___024unit* vlSelf);

void Vrupcountertb___024unit__ctor(Vrupcountertb___024unit* vlSelf, Vrupcountertb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vrupcountertb___024unit___ctor_var_reset(vlSelf);
}

Vrupcountertb___024unit::Vrupcountertb___024unit(Vrupcountertb__Syms* symsp, const char* namep) {
    Vrupcountertb___024unit__ctor(this, symsp, namep);
}

void Vrupcountertb___024unit__dtor(Vrupcountertb___024unit* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vrupcountertb___024unit::~Vrupcountertb___024unit() {
    Vrupcountertb___024unit__dtor(this);
}
