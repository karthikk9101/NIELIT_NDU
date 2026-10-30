// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_and_gate.h for the primary calling header

#include "Vtb_and_gate__pch.h"

void Vtb_and_gate___024unit___ctor_var_reset(Vtb_and_gate___024unit* vlSelf);

void Vtb_and_gate___024unit__ctor(Vtb_and_gate___024unit* vlSelf, Vtb_and_gate__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vtb_and_gate___024unit___ctor_var_reset(vlSelf);
}

Vtb_and_gate___024unit::Vtb_and_gate___024unit(Vtb_and_gate__Syms* symsp, const char* namep) {
    Vtb_and_gate___024unit__ctor(this, symsp, namep);
}

void Vtb_and_gate___024unit__dtor(Vtb_and_gate___024unit* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vtb_and_gate___024unit::~Vtb_and_gate___024unit() {
    Vtb_and_gate___024unit__dtor(this);
}
