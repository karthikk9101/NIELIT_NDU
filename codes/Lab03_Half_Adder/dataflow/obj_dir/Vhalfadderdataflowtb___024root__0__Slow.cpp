// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalfadderdataflowtb.h for the primary calling header

#include "Vhalfadderdataflowtb__pch.h"

VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_static(Vhalfadderdataflowtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___eval_static\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__a__0 
        = vlSelfRef.halfadderdataflowtb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__b__0 
        = vlSelfRef.halfadderdataflowtb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__uut__DOT__carry__0 
        = vlSelfRef.halfadderdataflowtb__DOT__uut__DOT__carry;
    vlSelfRef.__Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__uut__DOT__sum__0 
        = vlSelfRef.halfadderdataflowtb__DOT__uut__DOT__sum;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vhalfadderdataflowtb___024root___eval_stl(Vhalfadderdataflowtb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___eval_stl\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhalfadderdataflowtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__stl(Vhalfadderdataflowtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___eval_dump_triggers__stl\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vhalfadderdataflowtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__ico(Vhalfadderdataflowtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___eval_dump_triggers__ico\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vhalfadderdataflowtb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__act(Vhalfadderdataflowtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___eval_dump_triggers__act\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vhalfadderdataflowtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__nba(Vhalfadderdataflowtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___eval_dump_triggers__nba\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vhalfadderdataflowtb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__obs(Vhalfadderdataflowtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___eval_dump_triggers__obs\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__react(Vhalfadderdataflowtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___eval_dump_triggers__react\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_final(Vhalfadderdataflowtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___eval_final\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vhalfadderdataflowtb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vhalfadderdataflowtb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vhalfadderdataflowtb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___trigger_anySet__stl\n"); );
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

bool Vhalfadderdataflowtb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vhalfadderdataflowtb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vhalfadderdataflowtb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vhalfadderdataflowtb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( halfadderdataflowtb.a)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( halfadderdataflowtb.b)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( halfadderdataflowtb.uut.carry)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( halfadderdataflowtb.uut.sum)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhalfadderdataflowtb___024root___ctor_var_reset(Vhalfadderdataflowtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderdataflowtb___024root___ctor_var_reset\n"); );
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->halfadderdataflowtb__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18076492662410448983ull);
    vlSelf->halfadderdataflowtb__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17279547482465812704ull);
    vlSelf->halfadderdataflowtb__DOT__uut__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 362278382228567087ull);
    vlSelf->halfadderdataflowtb__DOT__uut__DOT__carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14428170783908955225ull);
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__uut__DOT__carry__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__uut__DOT__sum__0 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
}
