// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdwncountertb.h for the primary calling header

#include "Vdwncountertb__pch.h"

VlCoroutine Vdwncountertb___024root___eval_initial__TOP__Vtiming__0(Vdwncountertb___024root* vlSelf);
VlCoroutine Vdwncountertb___024root___eval_initial__TOP__Vtiming__1(Vdwncountertb___024root* vlSelf);

void Vdwncountertb___024root___eval_initial(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_initial\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("dwncounter.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    Vdwncountertb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdwncountertb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vdwncountertb___024root___eval_sample(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_sample\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdwncountertb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vdwncountertb___024root___eval_ico(Vdwncountertb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_ico\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdwncountertb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vdwncountertb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdwncountertb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vdwncountertb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

bool Vdwncountertb___024root___eval_act(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_act\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            ((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                              << 4U) 
                                                             | (((((::IData)(vlSelfRef.dwncountertb__DOT__reset) 
                                                                   & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__dwncountertb__DOT__reset__0))) 
                                                                  << 3U) 
                                                                 | (((::IData)(vlSelfRef.dwncountertb__DOT__clk) 
                                                                     & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__dwncountertb__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((::IData)(vlSelfRef.dwncountertb__DOT__uut__DOT__count) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__dwncountertb__DOT__uut__DOT__count__0)) 
                                                                    << 1U) 
                                                                   | ((::IData)(vlSelfRef.dwncountertb__DOT__reset) 
                                                                      != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__dwncountertb__DOT__reset__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__dwncountertb__DOT__reset__0 
            = vlSelfRef.dwncountertb__DOT__reset;
        vlSelfRef.__Vtrigprevexpr___TOP__dwncountertb__DOT__uut__DOT__count__0 
            = vlSelfRef.dwncountertb__DOT__uut__DOT__count;
        vlSelfRef.__Vtrigprevexpr___TOP__dwncountertb__DOT__clk__0 
            = vlSelfRef.dwncountertb__DOT__clk;
    }
    Vdwncountertb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdwncountertb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdwncountertb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdwncountertb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
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

bool Vdwncountertb___024root___eval_inact(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_inact\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("dwncountertb.v", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vdwncountertb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vdwncountertb___024root___eval_nba(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_nba\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdwncountertb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.dwncountertb__DOT__uut__DOT__count 
                        = ((::IData)(vlSelfRef.dwncountertb__DOT__reset)
                            ? 0x0000000fU : (0x0000000fU 
                                             & ((::IData)(vlSelfRef.dwncountertb__DOT__uut__DOT__count) 
                                                - (::IData)(1U))));
                }
            }
            if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    if ((1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum)) {
                        vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
                    }
                }
            }
        }
        Vdwncountertb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vdwncountertb___024root___eval_obs(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_obs\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdwncountertb___024root___eval_react(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_react\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vdwncountertb___024root___eval_postponed(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_postponed\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_postponed__TOP
        if (VL_UNLIKELY((((::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorPending) 
                          & (1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum))))) {
            vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 0U;
            if (VL_UNLIKELY(((1U & (~ (::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorOff)))))) {
                VL_WRITEF_NX("TIME = %b  Reset = %b    count = %b\n",3
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(::IData)(vlSelfRef.dwncountertb__DOT__reset)
                             , '#',4,vlSelfRef.dwncountertb__DOT__uut__DOT__count);
            }
        }
    }
}

VlCoroutine Vdwncountertb___024root___eval_initial__TOP__Vtiming__0(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->vlInst.TOP____024unit.__VmonitorNum = 1U;
    vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
    vlSelfRef.dwncountertb__DOT__reset = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "dwncountertb.v", 
                                                     18);
    vlSelfRef.dwncountertb__DOT__reset = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000030d40ULL, 
                                                     nullptr, 
                                                     "dwncountertb.v", 
                                                     19);
    VL_FINISH_MT("dwncountertb.v", 20, "");
    co_return;
}

VlCoroutine Vdwncountertb___024root___eval_initial__TOP__Vtiming__1(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000001388ULL, 
                                                         nullptr, 
                                                         "dwncountertb.v", 
                                                         13);
        vlSelfRef.dwncountertb__DOT__clk = (1U & (~ (::IData)(vlSelfRef.dwncountertb__DOT__clk)));
    }
    co_return;
}

bool Vdwncountertb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___trigger_anySet__ico\n"); );
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

bool Vdwncountertb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___trigger_anySet__act\n"); );
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

void Vdwncountertb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vdwncountertb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___trigger_clear__act\n"); );
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
void Vdwncountertb___024root___eval_debug_assertions(Vdwncountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdwncountertb___024root___eval_debug_assertions\n"); );
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
