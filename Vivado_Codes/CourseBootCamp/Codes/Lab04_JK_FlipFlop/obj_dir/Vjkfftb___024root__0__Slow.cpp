// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjkfftb.h for the primary calling header

#include "Vjkfftb__pch.h"

VL_ATTR_COLD void Vjkfftb___024root___eval_static(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_static\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__clk__0 
        = vlSelfRef.jkfftb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__j__0 
        = vlSelfRef.jkfftb__DOT__j;
    vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__k__0 
        = vlSelfRef.jkfftb__DOT__k;
    vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__preset__0 
        = vlSelfRef.jkfftb__DOT__preset;
    vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__uut__DOT__q__0 
        = vlSelfRef.jkfftb__DOT__uut__DOT__q;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjkfftb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vjkfftb___024root___eval_stl(Vjkfftb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_stl\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjkfftb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__stl(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_dump_triggers__stl\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vjkfftb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjkfftb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__ico(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_dump_triggers__ico\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vjkfftb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjkfftb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__act(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_dump_triggers__act\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vjkfftb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__nba(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_dump_triggers__nba\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vjkfftb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__obs(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_dump_triggers__obs\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__react(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_dump_triggers__react\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vjkfftb___024root___eval_final(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_final\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vjkfftb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjkfftb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vjkfftb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vjkfftb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___trigger_anySet__stl\n"); );
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

bool Vjkfftb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjkfftb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vjkfftb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vjkfftb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjkfftb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vjkfftb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( jkfftb.clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( jkfftb.j)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( jkfftb.k)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( jkfftb.preset)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( jkfftb.uut.q)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge jkfftb.clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge jkfftb.preset)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vjkfftb___024root___ctor_var_reset(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___ctor_var_reset\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->jkfftb__DOT__preset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 365385729315028088ull);
    vlSelf->jkfftb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7437975779095185270ull);
    vlSelf->jkfftb__DOT__j = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1385231879864403048ull);
    vlSelf->jkfftb__DOT__k = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7623435142721971518ull);
    vlSelf->jkfftb__DOT__uut__DOT__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15579926852594300205ull);
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__Vtrigprevexpr___TOP__jkfftb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__jkfftb__DOT__j__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__jkfftb__DOT__k__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__jkfftb__DOT__preset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__jkfftb__DOT__uut__DOT__q__0 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
}
