// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vjkfftb__Syms.h"


VL_ATTR_COLD void Vjkfftb___024root__trace_init_sub__TOP__0(Vjkfftb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root__trace_init_sub__TOP__0\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "jkfftb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"preset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"qn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"preset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"j",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"k",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"qn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vjkfftb___024root__trace_init_top(Vjkfftb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root__trace_init_top\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vjkfftb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vjkfftb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vjkfftb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vjkfftb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vjkfftb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vjkfftb___024root__trace_register(Vjkfftb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root__trace_register\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vjkfftb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vjkfftb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vjkfftb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vjkfftb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vjkfftb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root__trace_const_0\n"); );
    // Body
    Vjkfftb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjkfftb___024root*>(voidSelf);
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vjkfftb___024root__trace_full_0_sub_0(Vjkfftb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vjkfftb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root__trace_full_0\n"); );
    // Body
    Vjkfftb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjkfftb___024root*>(voidSelf);
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vjkfftb___024root__trace_full_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

VL_ATTR_COLD void Vjkfftb___024root__trace_full_0_sub_0(Vjkfftb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root__trace_full_0_sub_0\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.jkfftb__DOT__preset));
    bufp->fullBit(oldp+1,(vlSelfRef.jkfftb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelfRef.jkfftb__DOT__j));
    bufp->fullBit(oldp+3,(vlSelfRef.jkfftb__DOT__k));
    bufp->fullBit(oldp+4,(vlSelfRef.jkfftb__DOT__uut__DOT__q));
    bufp->fullBit(oldp+5,((1U & (~ (::IData)(vlSelfRef.jkfftb__DOT__uut__DOT__q)))));
}
