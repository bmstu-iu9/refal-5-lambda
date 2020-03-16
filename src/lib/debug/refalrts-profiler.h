#ifndef RefalRTS_PROFILER_H_
#define RefalRTS_PROFILER_H_

#include <map>
#include <string.h>     // memset

#include "refalrts.h"
#include "refalrts-diagnostic-defs.h"
#include "refalrts-platform-specific.h"


//==============================================================================
// Упрощённый профилировщик
//==============================================================================

namespace refalrts {

class Profiler {
  enum State {
    cInRuntime,
    cInRuntimeCopy,
    cInPatternLinear,
    cInPatternRepeatedEVar,
    cInPatternRepeatedTVar,
    cInPatternELoop,
    cInPatternELoopRepeatedEVar,
    cInPatternELoopRepeatedTVar,
    cInResultLinear,
    cInResultCopy
  };

  enum BaseCounter {
    cCounter_RuntimeTime,
    cCounter_NativeTime,
    cCounter_LinearPatternTime,
    cCounter_RepeatedEvarOutsideECycle,
    cCounter_RepeatedTvarOutsideECycle,
    cCounter_RepeatedEvarInsideECycle,
    cCounter_RepeatedTvarInsideECycle,
    cCounter_ContextCopyTime,
    cCounter_ECycleClearTime,
    cCounter_LinearResultTime,
    cCounter_TEvarCopyTime,
    cCounter_TOTAL
  };

  struct FuncItemKey {
    bool unwrap;
    const char *func_name;

    FuncItemKey(bool unwrap = false, const char *func_name = "")
      : unwrap(unwrap)
      , func_name(func_name)
    {
      /* пусто */
    }

    bool operator<(const FuncItemKey& rhs) const {
      int res = (int) this->unwrap - (int) rhs.unwrap;
      if (res == 0) {
        res = strcmp(this->func_name, rhs.func_name);
      }
      return res < 0;
    }
  };

  struct FuncItemValue {
    enum {
      TIME, COUNT, TOTAL,
    };

    double values[TOTAL];

    FuncItemValue() {
      values[TIME] = 0;
      values[COUNT] = 0;
    }
  };

  typedef std::map<FuncItemKey, FuncItemValue> FunctionMetricTable;

  double m_counters[cCounter_TOTAL];
  double m_prev_cutoff;
  State m_current_state;
  DiagnosticConfig *m_diagnostic_config;
  api::ClockNs *m_clock;

  double clock() const {
    return api::clock_ns(m_clock);
  }

  FunctionMetricTable m_function_items;

  FuncItemKey m_current_function;
  double m_current_function_start;

  struct TimeItem {
    const char *name;
    double counter;
  };

  static int reverse_compare(const void *left_void, const void *right_void);
  void print_statistics();

  void add_profile_metric(const FuncItemKey& function);
  void print_profile(int counter, const char *name);

public:
  Profiler(DiagnosticConfig *diagnostic_config);
  ~Profiler() {
    free_clock_ns(m_clock);
  }

  void start_profiler();
  void end_profiler();
  void read_counters(double counters[]);

  void add_profile_metric_unwrap(const char *function) {
    add_profile_metric(FuncItemKey(true, function));
  }

  void add_profile_metric_call(const char *function) {
    add_profile_metric(FuncItemKey(false, function));
  }

  void init_function_count() {
    m_current_function_start = clock();
    m_current_function = FuncItemKey(false, "<startup_code>");
  }

  void start_generated_function();
  void stop_sentence();
  void start_e_loop();
  void start_repeated_evar();
  void start_repeated_tvar();
  void stop_repeated();
  void start_result();
  void start_copy();
  void stop_copy();
  void stop_allocation_abnormal();
  void stop_function();
};

inline Profiler::Profiler(DiagnosticConfig *diagnostic_config)
  : m_prev_cutoff(0)
  , m_current_state(cInRuntime)
  , m_diagnostic_config(diagnostic_config)
  , m_clock(api::init_clock_ns())
  , m_function_items()
  , m_current_function()
  , m_current_function_start()
{
  memset(m_counters, '\0', sizeof(m_counters));
}

}  // namespace refalrts


#endif  // RefalRTS_PROFILER_H_
