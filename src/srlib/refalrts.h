#ifndef RefalRTS_H_
#define RefalRTS_H_

namespace refalrts {

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
  cDataClosureHead
};

typedef FnResult (*RefalFunctionPtr) (Iter begin, Iter end);

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

  RefalFunction(const RASLCommand rasl[], RefalFuncName name)
    : rasl(rasl), name(name)
  {
    register_me();
  }

private:
  void register_me();
};

typedef UInt32 RefalNumber;


struct RefalNativeFunction: public RefalFunction {
  RefalFunctionPtr ptr;

  RefalNativeFunction(RefalFunctionPtr ptr, RefalFuncName name)
    : RefalFunction(run, name), ptr(ptr)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalSwap: public RefalFunction {
  Iter head;
  Iter next_head;

  RefalSwap(RefalFuncName name)
    : RefalFunction(run, name), head(), next_head()
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalEmptyFunction: public RefalFunction {
  RefalEmptyFunction(RefalFuncName name)
    : RefalFunction(run, name)
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
public:
  RefalIdentDescr()
    : m_name(0)
  {
    /* пусто */
  }

  const char *name() const {
    return m_name;
  }

  static RefalIdentifier from_static(const char *name);
  static RefalIdentifier implode(const char *name);

private:
  const char *m_name;
};

inline RefalIdentifier ident_from_static(const char *name) {
  return RefalIdentDescr::from_static(name);
}

inline RefalIdentifier ident_implode(const char *name) {
  return RefalIdentDescr::implode(name);
}

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
};

enum iCmd { /*NumberFromOpcode:Cmd+ic;Alg+Left,Alg+Right,Alg+Term*/
  icProfileFunction = 0,
  icLoadConstants = 1,
  icIssueMemory = 2,
  icReserveBacktrackStack = 3,
  icOnFailGoTo = 4,
  icProfilerStopSentence = 5,
  icInitB0 = 6,
  icInitB0_Lite = 7,
  icCharLeft = 8,
  icCharRight = 9,
  icCharTerm = 10,
  icCharSaveLeft = 11,
  icCharSaveRight = 12,
  icNumLeft = 13,
  icNumRight = 14,
  icNumTerm = 15,
  icNumSaveLeft = 16,
  icNumSaveRight = 17,
  icHugeNumLeft = 18,
  icHugeNumRight = 19,
  icHugeNumTerm = 20,
  icHugeNumSaveLeft = 21,
  icHugeNumSaveRight = 22,
  icNameLeft = 23,
  icNameRight = 24,
  icNameTerm = 25,
  icNameSaveLeft = 26,
  icNameSaveRight = 27,
  icIdentLeft = 28,
  icIdentRight = 29,
  icIdentTerm = 30,
  icIdentSaveLeft = 31,
  icIdentSaveRight = 32,
  icBracketsLeft = 33,
  icBracketsRight = 34,
  icBracketsTerm = 35,
  icBracketsSaveLeft = 36,
  icBracketsSaveRight = 37,
  icADTLeft = 38,
  icADTRight = 39,
  icADTTerm = 40,
  icADTSaveLeft = 41,
  icADTSaveRight = 42,
  icADTSaveTerm = 43,
  icCallSaveLeft = 44,
  icEmpty = 45,
  icNotEmpty = 46,
  icsVarLeft = 47,
  icsVarRight = 48,
  icsVarTerm = 49,
  ictVarLeft = 50,
  ictVarRight = 51,
  ictVarSaveLeft = 52,
  ictVarSaveRight = 53,
  iceRepeatedLeft = 54,
  iceRepeatedRight = 55,
  icsRepeatedLeft = 56,
  icsRepeatedRight = 57,
  icsRepeatedTerm = 58,
  ictRepeatedLeft = 59,
  ictRepeatedRight = 60,
  ictRepeatedTerm = 61,
  ictRepeatedSaveLeft = 62,
  ictRepeatedSaveRight = 63,
  icEPrepare = 64,
  icEStart = 65,
  icSave = 66,
  icResetAllocator = 67,
  icSetResArgBegin = 68,
  icSetResRightEdge = 69,
  icSetRes = 70,
  icCopyEVar = 71,
  icCopySTVar = 72,
  icReinitSVar = 73,
  /*+WORDS:Allocate,Reinit,Update*/
  /*+WORDS:El+Char,El+Name,El+Number,El+HugeNumber,El+Ident,El+Bracket,El+String*/
  icAllocateChar = 74,
  icAllocateName = 75,
  icAllocateNumber = 76,
  icAllocateHugeNumber = 77,
  icAllocateIdent = 78,
  icAllocateBracket = 79,
  icAllocateString = 80,
  icReinitChar = 81,
  icReinitName = 82,
  icReinitNumber = 83,
  icReinitHugeNumber = 84,
  icReinitIdent = 85,
  icReinitBracket = 86,
  icReinitClosureHead = 87,
  icReinitUnwrappedClosure = 88,
  icUpdateChar = 89,
  icUpdateName = 90,
  icUpdateNumber = 91,
  icUpdateHugeNumber = 92,
  icUpdateIdent = 93,
  icLinkBrackets = 94,
  icPushStack = 95,
  icSpliceElem = 96,
  icSpliceEVar = 97,
  icSpliceSTVar = 98,
  icSpliceRange = 99,
  icSpliceTile = 100,
  icSpliceToFreeList = 101,
  icNextStep = 102,
  icTrashLeftEdge = 103,
  icTrash = 104,
  icFail = 105,
  icFetchSwapHead = 106,
  icFetchSwapInfoBounds = 107,
  icSwapSave = 108,
  icPerformNative = 109,
  icWrapClosure = 110,
  icEnd = 111,
};

enum BracketType { /*NumberFromBracket:El+ib;*/
  ibOpenADT = 0,
  ibOpenBracket = 1,
  ibOpenCall = 2,
  ibCloseADT = 3,
  ibCloseBracket = 4,
  ibCloseCall = 5,
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
};

struct FunctionTable {
  UInt32 cookie1;
  UInt32 cookie2;
  FunctionTableItem *items;
  FunctionTable *next;

  FunctionTable(UInt32 cookie1, UInt32 cookie2, FunctionTableItem *items);
};

struct ExternalReference {
  FunctionTableItem ref;
  UInt32 cookie1;
  UInt32 cookie2;
  ExternalReference *next;

  ExternalReference(const char *name, UInt32 cookie1, UInt32 cookie2);
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

extern bool repeated_stvar_term(Iter stvar_sample, Iter pos);
extern refalrts::Iter repeated_stvar_left(
  Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
);
extern refalrts::Iter repeated_stvar_right(
  Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
);

extern bool repeated_evar_left(
  Iter& evar_b, Iter& evar_e,
  Iter evar_b_sample, Iter evar_e_sample,
  Iter& first, Iter& last
);

extern bool repeated_evar_right(
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

extern void reset_allocator();

extern bool copy_evar(
  Iter& evar_res_b, Iter& evar_res_e,
  Iter evar_b_sample, Iter evar_e_sample
);

extern bool copy_stvar(Iter& stvar_res, Iter stvar_sample);

extern bool alloc_char(Iter& res, char ch);
extern bool alloc_number(Iter& res, RefalNumber num);
extern bool alloc_name(Iter& res, RefalFunction *func);
extern bool alloc_ident(Iter& res, RefalIdentifier ident);
extern bool alloc_open_adt(Iter& res);
extern bool alloc_close_adt(Iter& res);
extern bool alloc_open_bracket(Iter& res);
extern bool alloc_close_bracket(Iter& res);
extern bool alloc_open_call(Iter& res);
extern bool alloc_close_call(Iter& res);

#ifndef alloc_copy_svar
#define alloc_copy_svar alloc_copy_svar_
#endif

#ifndef alloc_copy_tvar
#define alloc_copy_tvar copy_stvar
#endif

extern bool alloc_copy_evar(
  Iter& res, Iter evar_b_sample, Iter evar_e_sample
);
extern bool alloc_copy_svar_(Iter& svar_res, Iter svar_sample);

extern bool alloc_chars(
  Iter& res_b, Iter& res_e, const char buffer[], unsigned buflen
);
extern bool alloc_string(Iter& res_b, Iter& res_e, const char *string);

extern void push_stack(Iter call_bracket);
extern void link_brackets(Iter left, Iter right);

extern Iter splice_elem(Iter res, Iter elem);
extern Iter splice_stvar(Iter res, Iter var);
extern Iter splice_evar(Iter res, Iter first, Iter last);
extern void splice_to_freelist(Iter first, Iter last);
extern void splice_to_freelist_open(Iter before_first, Iter after_last);
extern void splice_from_freelist(Iter pos);

extern RefalFunction *create_closure;
Iter unwrap_closure(Iter closure); // Развернуть замыкание
Iter wrap_closure(Iter closure); // Свернуть замыкание

// Профилирование

extern void this_is_generated_function();
extern void stop_sentence();
extern void start_e_loop();

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
extern void read_performance_counters(unsigned long counters[]);

// Прочие функции

extern void set_return_code(int retcode);
extern void use_counter(unsigned& counter);

inline void set_return_code(RefalNumber retcode) {
  set_return_code(static_cast<int>(retcode));
}

const char* arg(unsigned int param);

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

  RASLFunction(
    RefalFuncName name,
    const RASLCommand *rasl,
    const FunctionTable *functions,
    const RefalIdentifier *idents,
    const RefalNumber *numbers,
    const StringItem *strings
  )
    : RefalFunction(rasl, name)
    , functions(functions)
    , idents(idents)
    , numbers(numbers)
    , strings(strings)
  {
    /* пусто */
  }
};

extern const RefalIdentifier idents[];
extern const RefalNumber numbers[];
extern const StringItem strings[];

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

  static NativeReference *s_references;

  NativeReference(
    const char *name,
    UInt32 cookie1,
    UInt32 cookie2,
    RefalFunctionPtr code
  )
    : name(name)
    , cookie1(cookie1)
    , cookie2(cookie2)
    , code(code)
    , next(s_references)
  {
    s_references = this;
  }
};

struct RawBytesBlock {
  static RawBytesBlock *s_first;
  static RawBytesBlock *s_last;

  RawBytesBlock *next;
  unsigned char *bytes;
  UInt32 length;

  RawBytesBlock(unsigned char *bytes, UInt32 length)
    : next(0)
    , bytes(bytes)
    , length(length)
  {
    if (s_first != 0) {
      s_last->next = this;
    } else {
      s_first = this;
    }
    s_last = this;
  }
};

enum BlockType { /*BlockTypeNumber:cBlockType;*/
  cBlockTypeStart = 1,
  cBlockTypeConstTable = 2,
  cBlockTypeRefalFunction = 3,
  cBlockTypeNativeFunction = 4,
  cBlockTypeEmptyFunction = 5,
  cBlockTypeSwap = 6,
  cBlockTypeReference = 7,
};

} // namespace refalrts

#endif // RefalRTS_H_
