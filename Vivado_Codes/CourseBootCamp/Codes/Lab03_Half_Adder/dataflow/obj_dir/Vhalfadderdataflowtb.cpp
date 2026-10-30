// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhalfadderdataflowtb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhalfadderdataflowtb::Vhalfadderdataflowtb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vhalfadderdataflowtb{_vcontextp__, _vcname__, true} {}

Vhalfadderdataflowtb::Vhalfadderdataflowtb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhalfadderdataflowtb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->vlInst.TOP.__PVT____024unit}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhalfadderdataflowtb::Vhalfadderdataflowtb(const char* _vcname__)
    : Vhalfadderdataflowtb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhalfadderdataflowtb::~Vhalfadderdataflowtb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhalfadderdataflowtb___024root___eval_debug_assertions(Vhalfadderdataflowtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_static(Vhalfadderdataflowtb___024root* vlSelf);
void Vhalfadderdataflowtb___024root___eval_initial(Vhalfadderdataflowtb___024root* vlSelf);
VL_ATTR_COLD bool Vhalfadderdataflowtb___024root___eval_stl(Vhalfadderdataflowtb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vhalfadderdataflowtb___024root___eval_sample(Vhalfadderdataflowtb___024root* vlSelf);
bool Vhalfadderdataflowtb___024root___eval_ico(Vhalfadderdataflowtb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vhalfadderdataflowtb___024root___eval_act(Vhalfadderdataflowtb___024root* vlSelf);
bool Vhalfadderdataflowtb___024root___eval_inact(Vhalfadderdataflowtb___024root* vlSelf);
bool Vhalfadderdataflowtb___024root___eval_nba(Vhalfadderdataflowtb___024root* vlSelf);
bool Vhalfadderdataflowtb___024root___eval_obs(Vhalfadderdataflowtb___024root* vlSelf);
bool Vhalfadderdataflowtb___024root___eval_react(Vhalfadderdataflowtb___024root* vlSelf);
void Vhalfadderdataflowtb___024root___eval_postponed(Vhalfadderdataflowtb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_final(Vhalfadderdataflowtb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__stl(Vhalfadderdataflowtb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__ico(Vhalfadderdataflowtb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__act(Vhalfadderdataflowtb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__nba(Vhalfadderdataflowtb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__obs(Vhalfadderdataflowtb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderdataflowtb___024root___eval_dump_triggers__react(Vhalfadderdataflowtb___024root* vlSelf);

void Vhalfadderdataflowtb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhalfadderdataflowtb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vhalfadderdataflowtb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vhalfadderdataflowtb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vhalfadderdataflowtb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vhalfadderdataflowtb::evalStatic() {
    Vhalfadderdataflowtb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vhalfadderdataflowtb::evalInitial() {
    Vhalfadderdataflowtb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderdataflowtb::evalStl(bool firstIteration) {
    return Vhalfadderdataflowtb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vhalfadderdataflowtb::evalSample() {
    Vhalfadderdataflowtb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderdataflowtb::evalIco(bool firstIteration) {
    return Vhalfadderdataflowtb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vhalfadderdataflowtb::evalAct() {
    return Vhalfadderdataflowtb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderdataflowtb::evalInact() {
    return Vhalfadderdataflowtb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderdataflowtb::evalNba() {
    return Vhalfadderdataflowtb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderdataflowtb::evalObs() {
    return Vhalfadderdataflowtb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderdataflowtb::evalReact() {
    return Vhalfadderdataflowtb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vhalfadderdataflowtb::evalPostponed() {
    Vhalfadderdataflowtb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vhalfadderdataflowtb::evalFinal() {
    Vhalfadderdataflowtb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderdataflowtb::dumpTriggersStl() {
    Vhalfadderdataflowtb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderdataflowtb::dumpTriggersIco() {
    Vhalfadderdataflowtb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderdataflowtb::dumpTriggersAct() {
    Vhalfadderdataflowtb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderdataflowtb::dumpTriggersNba() {
    Vhalfadderdataflowtb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderdataflowtb::dumpTriggersObs() {
    Vhalfadderdataflowtb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderdataflowtb::dumpTriggersReact() {
    Vhalfadderdataflowtb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vhalfadderdataflowtb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vhalfadderdataflowtb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vhalfadderdataflowtb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vhalfadderdataflowtb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhalfadderdataflowtb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vhalfadderdataflowtb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhalfadderdataflowtb::hierName() const { return vlSymsp->name(); }
const char* Vhalfadderdataflowtb::modelName() const { return "Vhalfadderdataflowtb"; }
unsigned Vhalfadderdataflowtb::threads() const { return 1; }
void Vhalfadderdataflowtb::prepareClone() const { contextp()->prepareClone(); }
void Vhalfadderdataflowtb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhalfadderdataflowtb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vhalfadderdataflowtb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhalfadderdataflowtb___024root__trace_init_top(Vhalfadderdataflowtb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhalfadderdataflowtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalfadderdataflowtb___024root*>(voidSelf);
    Vhalfadderdataflowtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vhalfadderdataflowtb___024root__trace_decl_types(tracep);
    Vhalfadderdataflowtb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhalfadderdataflowtb___024root__trace_register(Vhalfadderdataflowtb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhalfadderdataflowtb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhalfadderdataflowtb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 4);
    Vhalfadderdataflowtb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
