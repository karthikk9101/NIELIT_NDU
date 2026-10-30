// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjkfftb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vjkfftb::Vjkfftb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vjkfftb{_vcontextp__, _vcname__, true} {}

Vjkfftb::Vjkfftb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vjkfftb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->vlInst.TOP.__PVT____024unit}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vjkfftb::Vjkfftb(const char* _vcname__)
    : Vjkfftb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vjkfftb::~Vjkfftb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vjkfftb___024root___eval_debug_assertions(Vjkfftb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vjkfftb___024root___eval_static(Vjkfftb___024root* vlSelf);
void Vjkfftb___024root___eval_initial(Vjkfftb___024root* vlSelf);
VL_ATTR_COLD bool Vjkfftb___024root___eval_stl(Vjkfftb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vjkfftb___024root___eval_sample(Vjkfftb___024root* vlSelf);
bool Vjkfftb___024root___eval_ico(Vjkfftb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vjkfftb___024root___eval_act(Vjkfftb___024root* vlSelf);
bool Vjkfftb___024root___eval_inact(Vjkfftb___024root* vlSelf);
bool Vjkfftb___024root___eval_nba(Vjkfftb___024root* vlSelf);
bool Vjkfftb___024root___eval_obs(Vjkfftb___024root* vlSelf);
bool Vjkfftb___024root___eval_react(Vjkfftb___024root* vlSelf);
void Vjkfftb___024root___eval_postponed(Vjkfftb___024root* vlSelf);
VL_ATTR_COLD void Vjkfftb___024root___eval_final(Vjkfftb___024root* vlSelf);
VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__stl(Vjkfftb___024root* vlSelf);
VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__ico(Vjkfftb___024root* vlSelf);
VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__act(Vjkfftb___024root* vlSelf);
VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__nba(Vjkfftb___024root* vlSelf);
VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__obs(Vjkfftb___024root* vlSelf);
VL_ATTR_COLD void Vjkfftb___024root___eval_dump_triggers__react(Vjkfftb___024root* vlSelf);

void Vjkfftb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjkfftb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vjkfftb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vjkfftb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vjkfftb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vjkfftb::evalStatic() {
    Vjkfftb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vjkfftb::evalInitial() {
    Vjkfftb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vjkfftb::evalStl(bool firstIteration) {
    return Vjkfftb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vjkfftb::evalSample() {
    Vjkfftb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vjkfftb::evalIco(bool firstIteration) {
    return Vjkfftb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vjkfftb::evalAct() {
    return Vjkfftb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vjkfftb::evalInact() {
    return Vjkfftb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vjkfftb::evalNba() {
    return Vjkfftb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vjkfftb::evalObs() {
    return Vjkfftb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vjkfftb::evalReact() {
    return Vjkfftb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vjkfftb::evalPostponed() {
    Vjkfftb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vjkfftb::evalFinal() {
    Vjkfftb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vjkfftb::dumpTriggersStl() {
    Vjkfftb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vjkfftb::dumpTriggersIco() {
    Vjkfftb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vjkfftb::dumpTriggersAct() {
    Vjkfftb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vjkfftb::dumpTriggersNba() {
    Vjkfftb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vjkfftb::dumpTriggersObs() {
    Vjkfftb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vjkfftb::dumpTriggersReact() {
    Vjkfftb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vjkfftb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vjkfftb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vjkfftb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vjkfftb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vjkfftb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vjkfftb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vjkfftb::hierName() const { return vlSymsp->name(); }
const char* Vjkfftb::modelName() const { return "Vjkfftb"; }
unsigned Vjkfftb::threads() const { return 1; }
void Vjkfftb::prepareClone() const { contextp()->prepareClone(); }
void Vjkfftb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vjkfftb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vjkfftb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vjkfftb___024root__trace_init_top(Vjkfftb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vjkfftb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjkfftb___024root*>(voidSelf);
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vjkfftb___024root__trace_decl_types(tracep);
    Vjkfftb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vjkfftb___024root__trace_register(Vjkfftb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vjkfftb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vjkfftb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 6);
    Vjkfftb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
