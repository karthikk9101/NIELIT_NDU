// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhalf_adder_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhalf_adder_tb::Vhalf_adder_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vhalf_adder_tb{_vcontextp__, _vcname__, true} {}

Vhalf_adder_tb::Vhalf_adder_tb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhalf_adder_tb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->vlInst.TOP.__PVT____024unit}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhalf_adder_tb::Vhalf_adder_tb(const char* _vcname__)
    : Vhalf_adder_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhalf_adder_tb::~Vhalf_adder_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhalf_adder_tb___024root___eval_debug_assertions(Vhalf_adder_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vhalf_adder_tb___024root___eval_static(Vhalf_adder_tb___024root* vlSelf);
void Vhalf_adder_tb___024root___eval_initial(Vhalf_adder_tb___024root* vlSelf);
VL_ATTR_COLD bool Vhalf_adder_tb___024root___eval_stl(Vhalf_adder_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vhalf_adder_tb___024root___eval_sample(Vhalf_adder_tb___024root* vlSelf);
bool Vhalf_adder_tb___024root___eval_ico(Vhalf_adder_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vhalf_adder_tb___024root___eval_act(Vhalf_adder_tb___024root* vlSelf);
bool Vhalf_adder_tb___024root___eval_inact(Vhalf_adder_tb___024root* vlSelf);
bool Vhalf_adder_tb___024root___eval_nba(Vhalf_adder_tb___024root* vlSelf);
bool Vhalf_adder_tb___024root___eval_obs(Vhalf_adder_tb___024root* vlSelf);
bool Vhalf_adder_tb___024root___eval_react(Vhalf_adder_tb___024root* vlSelf);
void Vhalf_adder_tb___024root___eval_postponed(Vhalf_adder_tb___024root* vlSelf);
VL_ATTR_COLD void Vhalf_adder_tb___024root___eval_final(Vhalf_adder_tb___024root* vlSelf);
VL_ATTR_COLD void Vhalf_adder_tb___024root___eval_dump_triggers__stl(Vhalf_adder_tb___024root* vlSelf);
VL_ATTR_COLD void Vhalf_adder_tb___024root___eval_dump_triggers__ico(Vhalf_adder_tb___024root* vlSelf);
VL_ATTR_COLD void Vhalf_adder_tb___024root___eval_dump_triggers__act(Vhalf_adder_tb___024root* vlSelf);
VL_ATTR_COLD void Vhalf_adder_tb___024root___eval_dump_triggers__nba(Vhalf_adder_tb___024root* vlSelf);
VL_ATTR_COLD void Vhalf_adder_tb___024root___eval_dump_triggers__obs(Vhalf_adder_tb___024root* vlSelf);
VL_ATTR_COLD void Vhalf_adder_tb___024root___eval_dump_triggers__react(Vhalf_adder_tb___024root* vlSelf);

void Vhalf_adder_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhalf_adder_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vhalf_adder_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vhalf_adder_tb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vhalf_adder_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vhalf_adder_tb::evalStatic() {
    Vhalf_adder_tb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vhalf_adder_tb::evalInitial() {
    Vhalf_adder_tb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vhalf_adder_tb::evalStl(bool firstIteration) {
    return Vhalf_adder_tb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vhalf_adder_tb::evalSample() {
    Vhalf_adder_tb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vhalf_adder_tb::evalIco(bool firstIteration) {
    return Vhalf_adder_tb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vhalf_adder_tb::evalAct() {
    return Vhalf_adder_tb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vhalf_adder_tb::evalInact() {
    return Vhalf_adder_tb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vhalf_adder_tb::evalNba() {
    return Vhalf_adder_tb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vhalf_adder_tb::evalObs() {
    return Vhalf_adder_tb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vhalf_adder_tb::evalReact() {
    return Vhalf_adder_tb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vhalf_adder_tb::evalPostponed() {
    Vhalf_adder_tb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vhalf_adder_tb::evalFinal() {
    Vhalf_adder_tb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalf_adder_tb::dumpTriggersStl() {
    Vhalf_adder_tb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalf_adder_tb::dumpTriggersIco() {
    Vhalf_adder_tb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalf_adder_tb::dumpTriggersAct() {
    Vhalf_adder_tb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalf_adder_tb::dumpTriggersNba() {
    Vhalf_adder_tb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalf_adder_tb::dumpTriggersObs() {
    Vhalf_adder_tb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalf_adder_tb::dumpTriggersReact() {
    Vhalf_adder_tb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vhalf_adder_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vhalf_adder_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vhalf_adder_tb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vhalf_adder_tb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhalf_adder_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vhalf_adder_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhalf_adder_tb::hierName() const { return vlSymsp->name(); }
const char* Vhalf_adder_tb::modelName() const { return "Vhalf_adder_tb"; }
unsigned Vhalf_adder_tb::threads() const { return 1; }
void Vhalf_adder_tb::prepareClone() const { contextp()->prepareClone(); }
void Vhalf_adder_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhalf_adder_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vhalf_adder_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhalf_adder_tb___024root__trace_init_top(Vhalf_adder_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhalf_adder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalf_adder_tb___024root*>(voidSelf);
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vhalf_adder_tb___024root__trace_decl_types(tracep);
    Vhalf_adder_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_register(Vhalf_adder_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhalf_adder_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhalf_adder_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 4);
    Vhalf_adder_tb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
