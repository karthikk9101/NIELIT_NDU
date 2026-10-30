// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_and_gate.h for the primary calling header

#include "Vtb_and_gate__pch.h"

VlCoroutine Vtb_and_gate___024root___eval_initial__TOP__Vtiming__0(Vtb_and_gate___024root* vlSelf);

void Vtb_and_gate___024root___eval_initial(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_initial\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("and_gate.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    Vtb_and_gate___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vtb_and_gate___024root___eval_sample(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_sample\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_and_gate___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vtb_and_gate___024root___eval_ico(Vtb_and_gate___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_ico\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_and_gate___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_and_gate___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_and_gate___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vtb_and_gate___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

bool Vtb_and_gate___024root___eval_act(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_act\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            (((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                               << 3U) 
                                                              | (((::IData)(vlSelfRef.tb_and_gate__DOT__uut__DOT__C) 
                                                                  != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_and_gate__DOT__uut__DOT__C__0)) 
                                                                 << 2U)) 
                                                             | ((((::IData)(vlSelfRef.tb_and_gate__DOT__B) 
                                                                  != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_and_gate__DOT__B__0)) 
                                                                 << 1U) 
                                                                | ((::IData)(vlSelfRef.tb_and_gate__DOT__A) 
                                                                   != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_and_gate__DOT__A__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_and_gate__DOT__A__0 
            = vlSelfRef.tb_and_gate__DOT__A;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_and_gate__DOT__B__0 
            = vlSelfRef.tb_and_gate__DOT__B;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_and_gate__DOT__uut__DOT__C__0 
            = vlSelfRef.tb_and_gate__DOT__uut__DOT__C;
    }
    Vtb_and_gate___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_and_gate___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_and_gate___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_and_gate___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((((8ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
                vlSelfRef.__Vnontrivs.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_and_gate___024root___eval_inact(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_inact\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_and_gate.v", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_and_gate___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vtb_and_gate___024root___eval_nba(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_nba\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_and_gate___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((7ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if ((1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum)) {
                        vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
                    }
                }
            }
        }
        Vtb_and_gate___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_and_gate___024root___eval_obs(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_obs\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_and_gate___024root___eval_react(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_react\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_and_gate___024root___eval_postponed(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_postponed\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_postponed__TOP
        if (VL_UNLIKELY((((::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorPending) 
                          & (1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum))))) {
            vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 0U;
            if (VL_UNLIKELY(((1U & (~ (::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorOff)))))) {
                VL_WRITEF_NX(" /time=%t A=%0b | B=%0b | C=%b\n",5, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',1,(::IData)(vlSelfRef.tb_and_gate__DOT__A)
                             , '#',1,vlSelfRef.tb_and_gate__DOT__B
                             , '#',1,(::IData)(vlSelfRef.tb_and_gate__DOT__uut__DOT__C));
            }
        }
        vlSelfRef.tb_and_gate__DOT__uut__DOT__C = ((::IData)(vlSelfRef.tb_and_gate__DOT__A) 
                                                   & (::IData)(vlSelfRef.tb_and_gate__DOT__B));
    }
}

VlCoroutine Vtb_and_gate___024root___eval_initial__TOP__Vtiming__0(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->vlInst.TOP____024unit.__VmonitorNum = 1U;
    vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x000000000000000aULL, 
                                                     nullptr, 
                                                     "tb_and_gate.v", 
                                                     13);
    vlSelfRef.tb_and_gate__DOT__A = 0U;
    vlSelfRef.tb_and_gate__DOT__B = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x000000000000000aULL, 
                                                     nullptr, 
                                                     "tb_and_gate.v", 
                                                     14);
    vlSelfRef.tb_and_gate__DOT__A = 0U;
    vlSelfRef.tb_and_gate__DOT__B = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x000000000000000aULL, 
                                                     nullptr, 
                                                     "tb_and_gate.v", 
                                                     15);
    vlSelfRef.tb_and_gate__DOT__A = 1U;
    vlSelfRef.tb_and_gate__DOT__B = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x000000000000000aULL, 
                                                     nullptr, 
                                                     "tb_and_gate.v", 
                                                     16);
    vlSelfRef.tb_and_gate__DOT__A = 1U;
    vlSelfRef.tb_and_gate__DOT__B = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x000000000000000aULL, 
                                                     nullptr, 
                                                     "tb_and_gate.v", 
                                                     17);
    VL_FINISH_MT("tb_and_gate.v", 18, "");
    co_return;
}

bool Vtb_and_gate___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___trigger_anySet__ico\n"); );
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

bool Vtb_and_gate___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___trigger_anySet__act\n"); );
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

void Vtb_and_gate___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_and_gate___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___trigger_clear__act\n"); );
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
void Vtb_and_gate___024root___eval_debug_assertions(Vtb_and_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_and_gate___024root___eval_debug_assertions\n"); );
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
