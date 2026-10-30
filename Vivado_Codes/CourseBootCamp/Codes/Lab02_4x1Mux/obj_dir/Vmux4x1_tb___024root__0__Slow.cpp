// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1_tb.h for the primary calling header

#include "Vmux4x1_tb__pch.h"

VL_ATTR_COLD void Vmux4x1_tb___024root___eval_static(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_static\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_tb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmux4x1_tb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vmux4x1_tb___024root___eval_stl(Vmux4x1_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_stl\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux4x1_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vmux4x1_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((((1ULL & vlSelfRef.__VstlTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and0 
                        = (::IData)(((0U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & (::IData)(vlSelfRef.mux4x1_tb__DOT__in)));
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and1 
                        = (::IData)(((1U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                        >> 1U)));
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and2 
                        = (::IData)(((2U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                        >> 2U)));
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and3 
                        = (((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                            >> 3U) & (3U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__stl(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_dump_triggers__stl\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmux4x1_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_tb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__ico(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_dump_triggers__ico\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmux4x1_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_tb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__act(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_dump_triggers__act\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmux4x1_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__nba(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_dump_triggers__nba\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vmux4x1_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__obs(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_dump_triggers__obs\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__react(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_dump_triggers__react\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmux4x1_tb___024root___eval_final(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_final\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_tb___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vmux4x1_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmux4x1_tb___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___trigger_anySet__stl\n"); );
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

bool Vmux4x1_tb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_tb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vmux4x1_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vmux4x1_tb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_tb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vmux4x1_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux4x1_tb___024root___ctor_var_reset(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___ctor_var_reset\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->mux4x1_tb__DOT__in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13844285781010478363ull);
    vlSelf->mux4x1_tb__DOT__sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14518007592105065042ull);
    vlSelf->mux4x1_tb__DOT__uut__DOT__and0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 190840086312155215ull);
    vlSelf->mux4x1_tb__DOT__uut__DOT__and1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2451888320952551045ull);
    vlSelf->mux4x1_tb__DOT__uut__DOT__and2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11252376764804623453ull);
    vlSelf->mux4x1_tb__DOT__uut__DOT__and3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2779181826791566513ull);
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
    vlSelf->__VtraceActivity[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VtraceActivity.data(), sizeof(vlSelf->__VtraceActivity[0]), 3);
}
