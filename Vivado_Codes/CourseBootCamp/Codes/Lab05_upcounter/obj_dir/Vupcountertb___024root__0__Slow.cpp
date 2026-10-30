// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vupcountertb.h for the primary calling header

#include "Vupcountertb__pch.h"

VL_ATTR_COLD void Vupcountertb___024root___eval_static(Vupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___eval_static\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__upcountertb__DOT__reset__0 
        = vlSelfRef.upcountertb__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__upcountertb__DOT__uut__DOT__count__0 
        = vlSelfRef.upcountertb__DOT__uut__DOT__count;
    vlSelfRef.__Vtrigprevexpr___TOP__upcountertb__DOT__clk__0 
        = vlSelfRef.upcountertb__DOT__clk;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vupcountertb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vupcountertb___024root___eval_stl(Vupcountertb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___eval_stl\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vupcountertb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__stl(Vupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___eval_dump_triggers__stl\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vupcountertb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vupcountertb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__ico(Vupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___eval_dump_triggers__ico\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vupcountertb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vupcountertb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__act(Vupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___eval_dump_triggers__act\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vupcountertb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__nba(Vupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___eval_dump_triggers__nba\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vupcountertb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__obs(Vupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___eval_dump_triggers__obs\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__react(Vupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___eval_dump_triggers__react\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vupcountertb___024root___eval_final(Vupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___eval_final\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vupcountertb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vupcountertb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vupcountertb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vupcountertb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___trigger_anySet__stl\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vupcountertb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vupcountertb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vupcountertb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vupcountertb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vupcountertb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vupcountertb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( upcountertb.reset)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( upcountertb.uut.count)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge upcountertb.clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge upcountertb.reset)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vupcountertb___024root___ctor_var_reset(Vupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupcountertb___024root___ctor_var_reset\n"); );
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->upcountertb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15913495065677422185ull);
    vlSelf->upcountertb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18038880925301504303ull);
    vlSelf->upcountertb__DOT__uut__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 991606393755611270ull);
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__Vtrigprevexpr___TOP__upcountertb__DOT__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__upcountertb__DOT__uut__DOT__count__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__upcountertb__DOT__clk__0 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
}
