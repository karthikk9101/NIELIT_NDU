// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalfadderbehatb.h for the primary calling header

#include "Vhalfadderbehatb__pch.h"

void Vhalfadderbehatb___024unit___ctor_var_reset(Vhalfadderbehatb___024unit* vlSelf);

void Vhalfadderbehatb___024unit__ctor(Vhalfadderbehatb___024unit* vlSelf, Vhalfadderbehatb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vhalfadderbehatb___024unit___ctor_var_reset(vlSelf);
}

Vhalfadderbehatb___024unit::Vhalfadderbehatb___024unit(Vhalfadderbehatb__Syms* symsp, const char* namep) {
    Vhalfadderbehatb___024unit__ctor(this, symsp, namep);
}

void Vhalfadderbehatb___024unit__dtor(Vhalfadderbehatb___024unit* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vhalfadderbehatb___024unit::~Vhalfadderbehatb___024unit() {
    Vhalfadderbehatb___024unit__dtor(this);
}
