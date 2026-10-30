// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalfadderbehatb.h for the primary calling header

#include "Vhalfadderbehatb__pch.h"

VlCoroutine Vhalfadderbehatb___024root___eval_initial__TOP__Vtiming__0(Vhalfadderbehatb___024root* vlSelf);

void Vhalfadderbehatb___024root___eval_initial(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_initial\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("halfadderbeha.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    Vhalfadderbehatb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vhalfadderbehatb___024root___eval_sample(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_sample\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalfadderbehatb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vhalfadderbehatb___024root___eval_ico(Vhalfadderbehatb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_ico\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhalfadderbehatb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vhalfadderbehatb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalfadderbehatb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vhalfadderbehatb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

bool Vhalfadderbehatb___024root___eval_act(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_act\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            ((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                              << 4U) 
                                                             | (((((::IData)(vlSelfRef.halfadderbehatb__DOT__uut__DOT__sum) 
                                                                   != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__halfadderbehatb__DOT__uut__DOT__sum__0)) 
                                                                  << 3U) 
                                                                 | (((::IData)(vlSelfRef.halfadderbehatb__DOT__uut__DOT__carry) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__halfadderbehatb__DOT__uut__DOT__carry__0)) 
                                                                    << 2U)) 
                                                                | ((((::IData)(vlSelfRef.halfadderbehatb__DOT__b) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__halfadderbehatb__DOT__b__0)) 
                                                                    << 1U) 
                                                                   | ((::IData)(vlSelfRef.halfadderbehatb__DOT__a) 
                                                                      != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__halfadderbehatb__DOT__a__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__halfadderbehatb__DOT__a__0 
            = vlSelfRef.halfadderbehatb__DOT__a;
        vlSelfRef.__Vtrigprevexpr___TOP__halfadderbehatb__DOT__b__0 
            = vlSelfRef.halfadderbehatb__DOT__b;
        vlSelfRef.__Vtrigprevexpr___TOP__halfadderbehatb__DOT__uut__DOT__carry__0 
            = vlSelfRef.halfadderbehatb__DOT__uut__DOT__carry;
        vlSelfRef.__Vtrigprevexpr___TOP__halfadderbehatb__DOT__uut__DOT__sum__0 
            = vlSelfRef.halfadderbehatb__DOT__uut__DOT__sum;
    }
    Vhalfadderbehatb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhalfadderbehatb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vhalfadderbehatb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vhalfadderbehatb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
                vlSelfRef.__Vnontrivs.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vhalfadderbehatb___024root___eval_inact(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_inact\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("halfadderbehatb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vhalfadderbehatb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vhalfadderbehatb___024root___eval_nba(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_nba\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vhalfadderbehatb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if ((1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum)) {
                        vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
                    }
                }
            }
        }
        Vhalfadderbehatb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vhalfadderbehatb___024root___eval_obs(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_obs\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vhalfadderbehatb___024root___eval_react(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_react\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vhalfadderbehatb___024root___eval_postponed(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_postponed\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_postponed__TOP
        if (VL_UNLIKELY((((::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorPending) 
                          & (1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum))))) {
            vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 0U;
            if (VL_UNLIKELY(((1U & (~ (::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorOff)))))) {
                VL_WRITEF_NX("%b %b %b %b\n",4, '#',1,vlSelfRef.halfadderbehatb__DOT__a
                             , '#',1,(::IData)(vlSelfRef.halfadderbehatb__DOT__b)
                             , '#',1,vlSelfRef.halfadderbehatb__DOT__uut__DOT__sum
                             , '#',1,(::IData)(vlSelfRef.halfadderbehatb__DOT__uut__DOT__carry));
            }
        }
        vlSelfRef.halfadderbehatb__DOT__uut__DOT__carry 
            = ((::IData)(vlSelfRef.halfadderbehatb__DOT__a) 
               & (::IData)(vlSelfRef.halfadderbehatb__DOT__b));
        vlSelfRef.halfadderbehatb__DOT__uut__DOT__sum 
            = ((::IData)(vlSelfRef.halfadderbehatb__DOT__a) 
               ^ (::IData)(vlSelfRef.halfadderbehatb__DOT__b));
    }
}

VlCoroutine Vhalfadderbehatb___024root___eval_initial__TOP__Vtiming__0(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->vlInst.TOP____024unit.__VmonitorNum = 1U;
    vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
    vlSelfRef.halfadderbehatb__DOT__a = 0U;
    vlSelfRef.halfadderbehatb__DOT__b = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "halfadderbehatb.v", 
                                                     17);
    vlSelfRef.halfadderbehatb__DOT__a = 0U;
    vlSelfRef.halfadderbehatb__DOT__b = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "halfadderbehatb.v", 
                                                     18);
    vlSelfRef.halfadderbehatb__DOT__a = 1U;
    vlSelfRef.halfadderbehatb__DOT__b = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "halfadderbehatb.v", 
                                                     19);
    vlSelfRef.halfadderbehatb__DOT__a = 1U;
    vlSelfRef.halfadderbehatb__DOT__b = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "halfadderbehatb.v", 
                                                     20);
    VL_FINISH_MT("halfadderbehatb.v", 22, "");
    co_return;
}

bool Vhalfadderbehatb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___trigger_anySet__ico\n"); );
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

bool Vhalfadderbehatb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___trigger_anySet__act\n"); );
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

void Vhalfadderbehatb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vhalfadderbehatb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vhalfadderbehatb___024root___eval_debug_assertions(Vhalfadderbehatb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root___eval_debug_assertions\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
