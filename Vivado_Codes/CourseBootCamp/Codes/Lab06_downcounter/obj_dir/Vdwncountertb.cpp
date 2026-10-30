// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdwncountertb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdwncountertb::Vdwncountertb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vdwncountertb{_vcontextp__, _vcname__, true} {}

Vdwncountertb::Vdwncountertb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdwncountertb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->vlInst.TOP.__PVT____024unit}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdwncountertb::Vdwncountertb(const char* _vcname__)
    : Vdwncountertb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdwncountertb::~Vdwncountertb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdwncountertb___024root___eval_debug_assertions(Vdwncountertb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdwncountertb___024root___eval_static(Vdwncountertb___024root* vlSelf);
void Vdwncountertb___024root___eval_initial(Vdwncountertb___024root* vlSelf);
VL_ATTR_COLD bool Vdwncountertb___024root___eval_stl(Vdwncountertb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vdwncountertb___024root___eval_sample(Vdwncountertb___024root* vlSelf);
bool Vdwncountertb___024root___eval_ico(Vdwncountertb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vdwncountertb___024root___eval_act(Vdwncountertb___024root* vlSelf);
bool Vdwncountertb___024root___eval_inact(Vdwncountertb___024root* vlSelf);
bool Vdwncountertb___024root___eval_nba(Vdwncountertb___024root* vlSelf);
bool Vdwncountertb___024root___eval_obs(Vdwncountertb___024root* vlSelf);
bool Vdwncountertb___024root___eval_react(Vdwncountertb___024root* vlSelf);
void Vdwncountertb___024root___eval_postponed(Vdwncountertb___024root* vlSelf);
VL_ATTR_COLD void Vdwncountertb___024root___eval_final(Vdwncountertb___024root* vlSelf);
VL_ATTR_COLD void Vdwncountertb___024root___eval_dump_triggers__stl(Vdwncountertb___024root* vlSelf);
VL_ATTR_COLD void Vdwncountertb___024root___eval_dump_triggers__ico(Vdwncountertb___024root* vlSelf);
VL_ATTR_COLD void Vdwncountertb___024root___eval_dump_triggers__act(Vdwncountertb___024root* vlSelf);
VL_ATTR_COLD void Vdwncountertb___024root___eval_dump_triggers__nba(Vdwncountertb___024root* vlSelf);
VL_ATTR_COLD void Vdwncountertb___024root___eval_dump_triggers__obs(Vdwncountertb___024root* vlSelf);
VL_ATTR_COLD void Vdwncountertb___024root___eval_dump_triggers__react(Vdwncountertb___024root* vlSelf);

void Vdwncountertb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdwncountertb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vdwncountertb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vdwncountertb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vdwncountertb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vdwncountertb::evalStatic() {
    Vdwncountertb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vdwncountertb::evalInitial() {
    Vdwncountertb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vdwncountertb::evalStl(bool firstIteration) {
    return Vdwncountertb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vdwncountertb::evalSample() {
    Vdwncountertb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vdwncountertb::evalIco(bool firstIteration) {
    return Vdwncountertb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vdwncountertb::evalAct() {
    return Vdwncountertb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vdwncountertb::evalInact() {
    return Vdwncountertb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vdwncountertb::evalNba() {
    return Vdwncountertb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vdwncountertb::evalObs() {
    return Vdwncountertb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vdwncountertb::evalReact() {
    return Vdwncountertb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vdwncountertb::evalPostponed() {
    Vdwncountertb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vdwncountertb::evalFinal() {
    Vdwncountertb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vdwncountertb::dumpTriggersStl() {
    Vdwncountertb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vdwncountertb::dumpTriggersIco() {
    Vdwncountertb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vdwncountertb::dumpTriggersAct() {
    Vdwncountertb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vdwncountertb::dumpTriggersNba() {
    Vdwncountertb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vdwncountertb::dumpTriggersObs() {
    Vdwncountertb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vdwncountertb::dumpTriggersReact() {
    Vdwncountertb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vdwncountertb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vdwncountertb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vdwncountertb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vdwncountertb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdwncountertb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdwncountertb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdwncountertb::hierName() const { return vlSymsp->name(); }
const char* Vdwncountertb::modelName() const { return "Vdwncountertb"; }
unsigned Vdwncountertb::threads() const { return 1; }
void Vdwncountertb::prepareClone() const { contextp()->prepareClone(); }
void Vdwncountertb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdwncountertb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vdwncountertb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdwncountertb___024root__trace_init_top(Vdwncountertb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdwncountertb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdwncountertb___024root*>(voidSelf);
    Vdwncountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vdwncountertb___024root__trace_decl_types(tracep);
    Vdwncountertb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdwncountertb___024root__trace_register(Vdwncountertb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdwncountertb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdwncountertb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 3);
    Vdwncountertb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
