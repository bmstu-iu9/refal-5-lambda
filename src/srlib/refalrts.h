#ifndef RefalRTS_H_
#define RefalRTS_H_

#include <stddef.h>


namespace refalrts {

class VM;
class Domain;

enum FnResult {
  cRecognitionImpossible = 0,
  cNoMemory = 1,
  cSuccess = 2,
  cExit = 3,
  cStepLimit = 4,
  cIdentTableLimit = 5
};

struct Node;

typedef struct Node *NodePtr;

typedef struct Node *Iter;

enum DataTag {
  cDataIllegal = 0,
  cDataSwapHead,
  cDataChar,
  cDataNumber,
  cDataFunction,
  cDataIdentifier,
  cDataOpenADT, cDataCloseADT,
  cDataOpenBracket, cDataCloseBracket,
  cDataOpenCall, cDataCloseCall,
  cDataFile,
  cDataClosure,
  cDataUnwrappedClosure,
  cDataClosureHead,
  cData_COUNT
};

typedef FnResult (*RefalFunctionPtr) (VM *vm, Iter begin, Iter end);

typedef unsigned int UInt32;

struct RefalFuncName {
  const char *name;
  UInt32 cookie1;
  UInt32 cookie2;

  RefalFuncName(const char *name, UInt32 cookie1, UInt32 cookie2)
    : name(name), cookie1(cookie1), cookie2(cookie2)
  {
    /* пусто */
  }
};

struct RASLCommand;

struct RefalFunction {
  const RASLCommand *rasl;
  RefalFuncName name;

  RefalFunction(const RASLCommand rasl[], RefalFuncName name, Domain *domain)
    : rasl(rasl), name(name)
  {
    register_me(domain);
  }

  static RefalFunction *lookup(VM *vm, const RefalFuncName& name);

  static RefalFunction *lookup(
    VM *vm, UInt32 cookie1, UInt32 cookie2, const char *name
  ) {
    return lookup(vm, RefalFuncName(name, cookie1, cookie2));
  }

private:
  void register_me(Domain *domain);
};

typedef UInt32 RefalNumber;


struct RefalNativeFunction: public RefalFunction {
  RefalFunctionPtr ptr;

  RefalNativeFunction(
    RefalFunctionPtr ptr,
    RefalFuncName name,
    Domain *domain
  )
    : RefalFunction(run, name, domain), ptr(ptr)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalSwap: public RefalFunction {
  Iter head;
  Iter next_head;

  RefalSwap(RefalFuncName name, Domain *domain)
    : RefalFunction(run, name, domain), head(), next_head()
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalEmptyFunction: public RefalFunction {
  RefalEmptyFunction(RefalFuncName name, Domain *domain)
    : RefalFunction(run, name, domain)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalCondFunctionRasl: public RefalFunction {
  RefalCondFunctionRasl(RefalFuncName name, Domain *domain)
    : RefalFunction(run, name, domain)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalCondFunctionNative: public RefalFunction {
  RefalCondFunctionNative(RefalFuncName name, Domain *domain)
    : RefalFunction(run, name, domain)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

class RefalIdentDescr;
typedef const RefalIdentDescr *RefalIdentifier;

class RefalIdentDescr {
  // Запрет копирования
  RefalIdentDescr(const RefalIdentDescr&);
  RefalIdentDescr& operator=(const RefalIdentDescr&);

  RefalIdentDescr(const char *name)
    : m_name(name)
  {
    /* пусто */
  }

public:
  const char *name() const {
    return m_name;
  }

  static RefalIdentifier implode(Domain *domain, const char *name);

private:
  const char *m_name;
};

inline RefalIdentifier ident_implode(Domain *domain, const char *name) {
  return RefalIdentDescr::implode(domain, name);
}

RefalIdentifier ident_implode(VM *vm, const char *name);

struct IdentReference {
  const char *const name;
  IdentReference *const next;
  unsigned int const id;

  IdentReference(const char *name);

  RefalIdentifier ref(VM *vm) const;
};

struct Node {
  NodePtr prev;
  NodePtr next;
  DataTag tag;
  union {
    char char_info;
    RefalNumber number_info;
    RefalFunction *function_info;
    RefalIdentifier ident_info;
    NodePtr link_info;
    void *file_info;
  };

  Node() {}

  Node(NodePtr prev, NodePtr next)
    : prev(prev), next(next), tag(cDataIllegal)
  {
    file_info = 0;
  }
};


/*
  Для эффективной обработки на современных процессорах
  команду выровляли по размеру в 4 байта.
  И получили ограничение на индексацию в 255.
  Анологичное ограничение присуствует в Рефал-5.
*/
struct RASLCommand {
  unsigned char cmd;
  unsigned char val1;
  unsigned char val2;
  unsigned char bracket;
};

struct StringItem {
  const char *string;
  UInt32 string_len;
};

union FunctionTableItem {
  const char *func_name;
  RefalFunction *function;

  FunctionTableItem(const char *func_name)
    : func_name(func_name)
  {
    /* пусто */
  }

  FunctionTableItem(RefalFunction *function)
    : function(function)
  {
    /* пусто */
  }
};

struct FunctionTable {
  UInt32 cookie1;
  UInt32 cookie2;
  FunctionTableItem *items;
  FunctionTable *next;

  FunctionTable(
    Domain *domain, UInt32 cookie1, UInt32 cookie2, FunctionTableItem *items
  );
};

struct ExternalReference {
  const char *const name;
  const ExternalReference *next;
  const UInt32 cookie1;
  const UInt32 cookie2;
  const unsigned int id;

  ExternalReference(const char *name, UInt32 cookie1, UInt32 cookie2);

  RefalFunction *ref(VM *vm) const;
};

extern void use(Iter&);

void zeros(Iter context[], int size);

// Операции реинициализации

extern void reinit_svar(Iter res, Iter sample);
extern void reinit_char(Iter res, char ch);
extern void update_char(Iter res, char ch);
extern void reinit_number(Iter res, RefalNumber num);
extern void update_number(Iter res, RefalNumber num);
extern void reinit_name(Iter res, RefalFunction *func);
extern void update_name(Iter res, RefalFunction *func);
extern void reinit_ident(Iter res, RefalIdentifier ident);
extern void update_ident(Iter res, RefalIdentifier ident);

extern void reinit_open_bracket(Iter res);
extern void reinit_close_bracket(Iter res);

extern void reinit_open_adt(Iter res);
extern void reinit_close_adt(Iter res);

extern void reinit_open_call(Iter res);
extern void reinit_close_call(Iter res);

extern void reinit_closure_head(Iter res);
extern void reinit_unwrapped_closure(Iter res, Iter head);


// Операции распознавания образца

extern void move_left(Iter& begin, Iter& end);
extern void move_right(Iter& begin, Iter& end);
extern bool empty_seq(Iter begin, Iter end);

extern bool function_term(const RefalFunction *func, Iter pos);
extern Iter function_left(const RefalFunction *func, Iter& first, Iter& last);
extern Iter function_right(const RefalFunction *func, Iter& first, Iter& last);

extern bool char_term(char ch, Iter& pos);
extern Iter char_left(char ch, Iter& first, Iter& last);
extern Iter char_right(char ch, Iter& first, Iter& last);

extern bool number_term(RefalNumber num, Iter& pos);
extern Iter number_left(RefalNumber num, Iter& first, Iter& last);
extern Iter number_right(RefalNumber num, Iter& first, Iter& last);

extern bool ident_term(RefalIdentifier ident, Iter& pos);
extern Iter ident_left(RefalIdentifier ident, Iter& first, Iter& last);
extern Iter ident_right(RefalIdentifier ident, Iter& first, Iter& last);

extern Iter adt_term(
  Iter& res_first, Iter& res_last,
  const RefalFunction *tag,
  Iter pos
);
extern Iter adt_left(
  Iter& res_first, Iter& res_last,
  const RefalFunction *tag,
  Iter& first, Iter &last
);
extern Iter adt_right(
  Iter& res_first, Iter& res_last,
  const RefalFunction *tag,
  Iter& first, Iter &last
);

extern Iter call_left(
  Iter& res_first, Iter& res_last,
  Iter first, Iter last
);

extern void call_pointers(Iter left_bracket, Iter& tag, Iter& right_bracket);
extern void adt_pointers(Iter left_bracket, Iter& tag, Iter& right_bracket);
extern void bracket_pointers(Iter left_bracket, Iter& right_bracket);

extern bool brackets_term(Iter& res_first, Iter& res_last, Iter& pos);
extern Iter brackets_left(
  Iter& res_first, Iter& res_last, Iter& first, Iter& last
);
extern Iter brackets_right(
  Iter& res_first, Iter& res_last, Iter& first, Iter& last
);

extern bool svar_term(Iter svar, Iter pos);
extern bool svar_left(Iter& svar, Iter& first, Iter& last);
extern bool svar_right(Iter& svar, Iter& first, Iter& last);

extern refalrts::Iter tvar_left(Iter& tvar, Iter& first, Iter& last);
extern refalrts::Iter tvar_right(Iter& tvar, Iter& first, Iter& last);

extern bool repeated_stvar_term(VM *vm, Iter stvar_sample, Iter pos);
extern refalrts::Iter repeated_stvar_left(
  VM *vm, Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
);
extern refalrts::Iter repeated_stvar_right(
  VM *vm, Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
);

extern bool repeated_evar_left(
  VM *vm,
  Iter& evar_b, Iter& evar_e,
  Iter evar_b_sample, Iter evar_e_sample,
  Iter& first, Iter& last
);

extern bool repeated_evar_right(
  VM *vm,
  Iter& evar_b, Iter& evar_e,
  Iter evar_b_sample, Iter evar_e_sample,
  Iter& first, Iter& last
);

extern bool open_evar_advance(
  Iter& evar_b, Iter& evar_e,
  Iter& first, Iter& last
);

extern unsigned read_chars(
  char buffer[], unsigned buflen, Iter& first, Iter& last
);

// Операции построения результата

extern void reset_allocator(VM *vm);

extern bool copy_evar(
  VM *vm, Iter& evar_res_b, Iter& evar_res_e,
  Iter evar_b_sample, Iter evar_e_sample
);

extern bool copy_stvar(VM *vm, Iter& stvar_res, Iter stvar_sample);

extern bool alloc_char(VM *vm, Iter& res, char ch);
extern bool alloc_number(VM *vm, Iter& res, RefalNumber num);
extern bool alloc_name(VM *vm, Iter& res, RefalFunction *func);
extern bool alloc_ident(VM *vm, Iter& res, RefalIdentifier ident);
extern bool alloc_open_adt(VM *vm, Iter& res);
extern bool alloc_close_adt(VM *vm, Iter& res);
extern bool alloc_open_bracket(VM *vm, Iter& res);
extern bool alloc_close_bracket(VM *vm, Iter& res);
extern bool alloc_open_call(VM *vm, Iter& res);
extern bool alloc_close_call(VM *vm, Iter& res);
extern bool alloc_closure_head(VM *vm, Iter& res);
extern bool alloc_unwrapped_closure(VM *vm, Iter& res, Iter head);

#ifndef alloc_copy_svar
#define alloc_copy_svar alloc_copy_svar_
#endif

#ifndef alloc_copy_tvar
#define alloc_copy_tvar copy_stvar
#endif

extern bool alloc_copy_evar(
  VM *vm, Iter& res, Iter evar_b_sample, Iter evar_e_sample
);
extern bool alloc_copy_svar_(VM *vm, Iter& svar_res, Iter svar_sample);

extern bool alloc_chars(
  VM *vm, Iter& res_b, Iter& res_e, const char buffer[], unsigned buflen
);
extern bool alloc_string(VM *vm, Iter& res_b, Iter& res_e, const char *string);

extern void push_stack(VM *vm, Iter call_bracket);
extern void link_brackets(Iter left, Iter right);

extern Iter splice_elem(Iter res, Iter elem);
extern Iter splice_stvar(Iter res, Iter var);
extern Iter splice_evar(Iter res, Iter first, Iter last);
extern void splice_to_freelist(VM *vm, Iter first, Iter last);
extern void splice_to_freelist_open(VM *vm, Iter before_first, Iter after_last);
extern Iter splice_from_freelist(VM *vm, Iter pos);

Iter unwrap_closure(Iter closure); // Развернуть замыкание
Iter wrap_closure(Iter closure); // Свернуть замыкание

// Профилирование

extern void this_is_generated_function(VM *vm);
extern void stop_sentence(VM *vm);
extern void start_e_loop(VM *vm);

enum PerformanceCounters {
  cPerformanceCounter_TotalTime,
  cPerformanceCounter_BuiltInTime,
  cPerformanceCounter_RuntimeTime,
  cPerformanceCounter_NativeTime,
  cPerformanceCounter_RefalTime,
  cPerformanceCounter_PatternMatchTime,
  cPerformanceCounter_BuildResultTime,
  cPerformanceCounter_TotalSteps,
  cPerformanceCounter_HeapSize,
  cPerformanceCounter_TEvarCopyTime,
  cPerformanceCounter_ContextCopyTime,
  cPerformanceCounter_RepeatTvarMatchTime,
  cPerformanceCounter_RepeatTvarMatchTimeOutsideECycle,
  cPerformanceCounter_RepeatEvarMatchTime,
  cPerformanceCounter_RepeatEvarMatchTimeOutsideECycle,
  cPerformanceCounter_OpenELoopTime,
  cPerformanceCounter_OpenELoopTimeClear,
  cPerformanceCounter_LinearRefalTime,
  cPerformanceCounter_LinearPatternTime,
  cPerformanceCounter_LinearResultTime,
  cPerformanceCounter_IdentsAllocated,
  cPerformanceCounter_COUNTERS_NUMBER
};

extern unsigned long ticks_per_second();
extern void read_performance_counters(VM *vm, unsigned long counters[]);

// Прочие функции

extern void set_return_code(VM *vm, int retcode);
extern FnResult recursive_call_main_loop(VM *vm);
extern void use_counter(unsigned& counter);
inline void set_return_code(VM *vm, RefalNumber retcode) {
  set_return_code(vm, static_cast<int>(retcode));
}

const char* arg(VM *vm, unsigned int param);

/*
  Функция производит печать рефал-выражения в поток file
  в том же формате, как и при отладочном дампе памяти.

  Переменная file представляет собой стандартный файловый
  поток FILE* из stdio.h. Сделана она была void* только
  для того, чтобы не включать сюда лишние заголовочные файлы
  (пусть даже и стандартные).
*/
void debug_print_expr(void *file, Iter first, Iter last);

// Интерпретатор

struct RASLFunction: public RefalFunction {
  const FunctionTable *functions;
  const RefalIdentifier *idents;
  const RefalNumber *numbers;
  const StringItem *strings;
  const char *filename;

  RASLFunction(
    RefalFuncName name,
    const RASLCommand *rasl,
    const FunctionTable *functions,
    const RefalIdentifier *idents,
    const RefalNumber *numbers,
    const StringItem *strings,
    const char *filename,
    Domain *domain
  )
    : RefalFunction(rasl, name, domain)
    , functions(functions)
    , idents(idents)
    , numbers(numbers)
    , strings(strings)
    , filename(filename)
  {
    /* пусто */
  }
};

class SwitchDefaultViolation {
  const char *m_filename;
  int m_line;
  long m_bad_switch_value;
  const char *m_bad_expr;

public:
  SwitchDefaultViolation(
    const char *filename,
    int line,
    long bad_switch_value,
    const char *bad_expr
  )
    : m_filename(filename)
    , m_line(line)
    , m_bad_switch_value(bad_switch_value)
    , m_bad_expr(bad_expr)
  {
    /* пусто */
  }

  void print();
};

#define refalrts_switch_default_violation(bad_switch_value) \
  ( \
    throw ::refalrts::SwitchDefaultViolation( \
      __FILE__, __LINE__, (bad_switch_value), #bad_switch_value \
    ) \
  )

struct NativeReference {
  const char *name;
  UInt32 cookie1;
  UInt32 cookie2;
  RefalFunctionPtr code;
  NativeReference *next;

  NativeReference(
    const char *name,
    UInt32 cookie1,
    UInt32 cookie2,
    RefalFunctionPtr code
  );
};


typedef void (*AtExitCB)(Domain *domain, void *data);

void at_exit(VM *vm, AtExitCB callback, void *data);


class GlobalRefBase {
  size_t m_offset;

protected:
  GlobalRefBase(size_t size);

  void *ptr(VM *vm);
  void *ptr(Domain *domain);
};

template <typename T>
class GlobalRef: private GlobalRefBase {
  // Объединение более-менее обеспечивает выравнивание,
  // кроме того, требует чтобы тип T не имел нетривиальных
  // конструкторов (C++98).
  union Aligned {
    T t;
    void *p;
    double *d;
  };

public:
  GlobalRef(size_t count = 1)
    : GlobalRefBase(sizeof(Aligned) * count)
  {
    /* пусто */
  }

  T& ref(VM *vm, size_t index = 0) {
    return static_cast<T*>(ptr(vm))[index];
  }
  T& ref(Domain *domain, size_t index = 0) {
    return static_cast<T*>(ptr(domain))[index];
  }
};


} // namespace refalrts

#endif // RefalRTS_H_
