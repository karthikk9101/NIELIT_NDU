// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdwncountertb__Syms.h"


VL_ATTR_COLD void Vdwncountertb___024root__trace_init_sub__TOP__0(Vdwncountertb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root__trace_init_sub__TOP__0\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "dwncountertb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vdwncountertb___024root__trace_init_top(Vdwncountertb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root__trace_init_top\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdwncountertb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdwncountertb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdwncountertb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdwncountertb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdwncountertb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdwncountertb___024root__trace_register(Vdwncountertb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root__trace_register\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdwncountertb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vdwncountertb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vdwncountertb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vdwncountertb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdwncountertb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root__trace_const_0\n"); );
    // Body
    Vdwncountertb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdwncountertb___024root*>(voidSelf);
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdwncountertb___024root__trace_full_0_sub_0(Vdwncountertb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdwncountertb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root__trace_full_0\n"); );
    // Body
    Vdwncountertb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdwncountertb___024root*>(voidSelf);
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdwncountertb___024root__trace_full_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

VL_ATTR_COLD void Vdwncountertb___024root__trace_full_0_sub_0(Vdwncountertb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root__trace_full_0_sub_0\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.dwncountertb__DOT__clk));
    bufp->fullBit(oldp+1,(vlSelfRef.dwncountertb__DOT__reset));
    bufp->fullCData(oldp+2,(vlSelfRef.dwncountertb__DOT__uut__DOT__count),4);
}
