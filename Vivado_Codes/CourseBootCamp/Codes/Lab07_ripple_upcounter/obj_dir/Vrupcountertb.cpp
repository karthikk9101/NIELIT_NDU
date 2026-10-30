// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrupcountertb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrupcountertb::Vrupcountertb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vrupcountertb{_vcontextp__, _vcname__, true} {}

Vrupcountertb::Vrupcountertb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrupcountertb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->vlInst.TOP.__PVT____024unit}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vrupcountertb::Vrupcountertb(const char* _vcname__)
    : Vrupcountertb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrupcountertb::~Vrupcountertb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrupcountertb___024root___eval_debug_assertions(Vrupcountertb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrupcountertb___024root___eval_static(Vrupcountertb___024root* vlSelf);
void Vrupcountertb___024root___eval_initial(Vrupcountertb___024root* vlSelf);
VL_ATTR_COLD bool Vrupcountertb___024root___eval_stl(Vrupcountertb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vrupcountertb___024root___eval_sample(Vrupcountertb___024root* vlSelf);
bool Vrupcountertb___024root___eval_ico(Vrupcountertb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vrupcountertb___024root___eval_act(Vrupcountertb___024root* vlSelf);
bool Vrupcountertb___024root___eval_inact(Vrupcountertb___024root* vlSelf);
bool Vrupcountertb___024root___eval_nba(Vrupcountertb___024root* vlSelf);
bool Vrupcountertb___024root___eval_obs(Vrupcountertb___024root* vlSelf);
bool Vrupcountertb___024root___eval_react(Vrupcountertb___024root* vlSelf);
void Vrupcountertb___024root___eval_postponed(Vrupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vrupcountertb___024root___eval_final(Vrupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vrupcountertb___024root___eval_dump_triggers__stl(Vrupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vrupcountertb___024root___eval_dump_triggers__ico(Vrupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vrupcountertb___024root___eval_dump_triggers__act(Vrupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vrupcountertb___024root___eval_dump_triggers__nba(Vrupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vrupcountertb___024root___eval_dump_triggers__obs(Vrupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vrupcountertb___024root___eval_dump_triggers__react(Vrupcountertb___024root* vlSelf);

void Vrupcountertb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrupcountertb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vrupcountertb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vrupcountertb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vrupcountertb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vrupcountertb::evalStatic() {
    Vrupcountertb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vrupcountertb::evalInitial() {
    Vrupcountertb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vrupcountertb::evalStl(bool firstIteration) {
    return Vrupcountertb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vrupcountertb::evalSample() {
    Vrupcountertb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vrupcountertb::evalIco(bool firstIteration) {
    return Vrupcountertb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vrupcountertb::evalAct() {
    return Vrupcountertb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vrupcountertb::evalInact() {
    return Vrupcountertb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vrupcountertb::evalNba() {
    return Vrupcountertb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vrupcountertb::evalObs() {
    return Vrupcountertb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vrupcountertb::evalReact() {
    return Vrupcountertb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vrupcountertb::evalPostponed() {
    Vrupcountertb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vrupcountertb::evalFinal() {
    Vrupcountertb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcountertb::dumpTriggersStl() {
    Vrupcountertb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcountertb::dumpTriggersIco() {
    Vrupcountertb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcountertb::dumpTriggersAct() {
    Vrupcountertb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcountertb::dumpTriggersNba() {
    Vrupcountertb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcountertb::dumpTriggersObs() {
    Vrupcountertb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcountertb::dumpTriggersReact() {
    Vrupcountertb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vrupcountertb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vrupcountertb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vrupcountertb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vrupcountertb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vrupcountertb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vrupcountertb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrupcountertb::hierName() const { return vlSymsp->name(); }
const char* Vrupcountertb::modelName() const { return "Vrupcountertb"; }
unsigned Vrupcountertb::threads() const { return 1; }
void Vrupcountertb::prepareClone() const { contextp()->prepareClone(); }
void Vrupcountertb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrupcountertb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vrupcountertb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vrupcountertb___024root__trace_init_top(Vrupcountertb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrupcountertb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrupcountertb___024root*>(voidSelf);
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vrupcountertb___024root__trace_decl_types(tracep);
    Vrupcountertb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrupcountertb___024root__trace_register(Vrupcountertb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrupcountertb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrupcountertb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 10);
    Vrupcountertb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
