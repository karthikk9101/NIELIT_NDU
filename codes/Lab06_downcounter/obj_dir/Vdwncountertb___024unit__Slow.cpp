// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdwncountertb.h for the primary calling header

#include "Vdwncountertb__pch.h"

void Vdwncountertb___024unit___ctor_var_reset(Vdwncountertb___024unit* vlSelf);

void Vdwncountertb___024unit__ctor(Vdwncountertb___024unit* vlSelf, Vdwncountertb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vdwncountertb___024unit___ctor_var_reset(vlSelf);
}

Vdwncountertb___024unit::Vdwncountertb___024unit(Vdwncountertb__Syms* symsp, const char* namep) {
    Vdwncountertb___024unit__ctor(this, symsp, namep);
}

void Vdwncountertb___024unit__dtor(Vdwncountertb___024unit* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vdwncountertb___024unit::~Vdwncountertb___024unit() {
    Vdwncountertb___024unit__dtor(this);
}
