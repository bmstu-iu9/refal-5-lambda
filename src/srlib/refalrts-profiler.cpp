#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <utility>
#include <vector>

#include "refalrts-profiler.h"


//==============================================================================
// Упрощённый профилировщик
//==============================================================================

#ifndef NDEBUG
#define refalrts_profiler_assert_eq(variable, constant) \
  if ((variable) != (constant)) { \
    refalrts_switch_default_violation(variable); \
  }
#else
#define refalrts_profiler_assert_eq(variable, constant)
#endif


void refalrts::Profiler::start_profiler() {
  m_prev_cutoff = clock();
}

int refalrts::Profiler::reverse_compare(
  const void *left_void, const void *right_void
) {
  const TimeItem *left = static_cast<const TimeItem *>(left_void);
  const TimeItem *right = static_cast<const TimeItem *>(right_void);

  if (left->counter > right->counter) {
    return -1;
  } else if (left->counter < right->counter) {
    return +1;
  } else {
    return 0;
  }
}

void refalrts::Profiler::start_generated_function() {
  double now = clock();
  refalrts_profiler_assert_eq(m_current_state, cInRuntime);
  m_counters[cCounter_RuntimeTime] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = cInPatternLinear;
}

void refalrts::Profiler::stop_sentence() {
  double now = clock();
  BaseCounter counter;

  switch (m_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = cInPatternLinear;
}

void refalrts::Profiler::start_e_loop() {
  double now = clock();
  BaseCounter counter;

  switch (m_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = cInPatternELoop;
}

void refalrts::Profiler::start_repeated_evar() {
  double now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      next = cInPatternRepeatedEVar;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      next = cInPatternELoopRepeatedEVar;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::start_repeated_tvar() {
  double now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      next = cInPatternRepeatedTVar;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      next = cInPatternELoopRepeatedTVar;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::stop_repeated() {
  double now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInPatternRepeatedEVar:
      next = cInPatternLinear;
      counter = cCounter_RepeatedEvarOutsideECycle;
      break;

    case cInPatternRepeatedTVar:
      next = cInPatternLinear;
      counter = cCounter_RepeatedTvarOutsideECycle;
      break;

    case cInPatternELoopRepeatedEVar:
      next = cInPatternELoop;
      counter = cCounter_RepeatedEvarInsideECycle;
      break;

    case cInPatternELoopRepeatedTVar:
      next = cInPatternELoop;
      counter = cCounter_RepeatedTvarInsideECycle;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::start_result() {
  double now = clock();
  State next = cInResultLinear;
  BaseCounter counter;

  switch (m_current_state) {
    case cInRuntime:
      counter = cCounter_NativeTime;
      next = cInRuntime;
      break;

    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::start_copy() {
  double now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInRuntime:
      counter = cCounter_RuntimeTime;
      next = cInRuntimeCopy;
      break;

    case cInResultLinear:
      counter = cCounter_LinearResultTime;
      next = cInResultCopy;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::stop_copy() {
  double now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInRuntimeCopy:
      next = cInRuntime;
      counter = cCounter_ContextCopyTime;
      break;

    case cInResultCopy:
      next = cInResultLinear;
      counter = cCounter_TEvarCopyTime;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::stop_allocation_abnormal() {
  double now = clock();
  State next;
  BaseCounter counter;

  switch (m_current_state) {
    case cInRuntimeCopy:
      next = cInRuntime;
      counter = cCounter_ContextCopyTime;
      break;

    case cInResultLinear:
      next = cInResultLinear;
      counter = cCounter_LinearResultTime;
      break;

    case cInResultCopy:
      next = cInResultLinear;
      counter = cCounter_TEvarCopyTime;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = next;
}

void refalrts::Profiler::stop_function() {
  double now = clock();
  BaseCounter counter;

  switch (m_current_state) {
    case cInRuntime:
      counter = cCounter_NativeTime;
      break;

    case cInPatternLinear:
      counter = cCounter_LinearPatternTime;
      break;

    case cInPatternELoop:
      counter = cCounter_ECycleClearTime;
      break;

    case cInResultLinear:
      counter = cCounter_LinearResultTime;
      break;

    default:
      refalrts_switch_default_violation(m_current_state);
  }

  m_counters[counter] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = cInRuntime;
}

void refalrts::Profiler::end_profiler() {
  // необходимо на случай аварийного останова, если функция сфейлилась
  // на последнем предложении с открытой e-переменной
  stop_function();

  if (m_diagnostic_config->print_statistics) {
    print_statistics();
  }
}

void refalrts::Profiler::print_statistics() {
  double counters[cPerformanceCounter_COUNTERS_NUMBER];
  read_counters(counters);

  TimeItem items[] = {
    { "\nTotal program time", cPerformanceCounter_TotalTime },
    { "(Total refal time)", cPerformanceCounter_RefalTime },
    { "Linear pattern time", cPerformanceCounter_LinearPatternTime },
    { "Linear result time", cPerformanceCounter_LinearResultTime },
    { "Open e-loop time (clear)", cPerformanceCounter_OpenELoopTimeClear },
    {
      "Repeated e-var match time (inside e-loops)",
      cPerformanceCounter_RepeatEvarMatchTime
    },
    {
      "Repeated e-var match time (outside e-loops)",
      cPerformanceCounter_RepeatEvarMatchTimeOutsideECycle
    },
    {
      "Repeated t-var match time (inside e-loops)",
      cPerformanceCounter_RepeatTvarMatchTime
    },
    {
      "Repeated t-var match time (outside e-loops)",
      cPerformanceCounter_RepeatTvarMatchTimeOutsideECycle
    },
    { "t- and e-var copy time", cPerformanceCounter_TEvarCopyTime },
    { "Runtime time overhead", cPerformanceCounter_RuntimeTime },
    { "Native time", cPerformanceCounter_NativeTime },
    { "Context copy time", cPerformanceCounter_ContextCopyTime }
  };

  enum { nItems = sizeof(items) / sizeof(items[0]) };

  for (size_t i = 0; i < nItems; ++i) {
    items[i].counter = counters[(int) items[i].counter];
  }

  std::qsort(items, nItems, sizeof(items[0]), reverse_compare);

  const double cfSECS_PER_CLOCK = 1e-9;
  double total = counters[refalrts::cPerformanceCounter_TotalTime];

  for (size_t i = 0; i < nItems; ++i) {
    double value = items[i].counter;

    if (value > 0) {
      double percent = (total != 0) ? 100.0 * value / total : 0.0;
      fprintf(
        stderr, "%s: %.5f seconds (%.1f %%).\n",
        items[i].name, value * cfSECS_PER_CLOCK, percent
      );
    }
  }

  if (m_diagnostic_config->enable_profiler) {
    print_profile(FuncItemValue::TIME, "_profile_time.txt");
    print_profile(FuncItemValue::COUNT, "_profile_count.txt");
  }
}

void refalrts::Profiler::print_profile(int counter, const char *name) {
  FILE *profile = fopen(name, "w");
  typedef std::vector< std::pair<double, FuncItemKey> > FunctionMetricVector;
  FunctionMetricVector function_times;
  double fn_total = 0;

  for (
    FunctionMetricTable::const_iterator p = m_function_items.begin();
    p != m_function_items.end();
    ++p
  ) {
    double value = p->second.values[counter];
    function_times.push_back(std::make_pair(value, p->first));
    fn_total += value;
  }

  std::sort(function_times.begin(), function_times.end());

  double pareto = 0;
  for (
    FunctionMetricVector::reverse_iterator p = function_times.rbegin();
    p < function_times.rend() && p->first > 0.0;
    ++p
  ) {
    pareto += p->first;
    fprintf(
      profile, "%s%s -> %.1f (%.2f %%, += %.2f %%)\n",
      (p->second.unwrap ? "<unwrap closure>: " : ""),
      p->second.func_name, p->first, 100.0 * p->first / fn_total,
      100.0 * pareto / fn_total
    );
  }

  fclose(profile);
}

void refalrts::Profiler::add_profile_metric(const FuncItemKey& function) {
  double step = clock();
  FuncItemValue& value = m_function_items[m_current_function];
  value.values[FuncItemValue::TIME] +=
    (step - m_current_function_start) / 1e6;
  value.values[FuncItemValue::COUNT] += 1;
  m_current_function_start = step;
  m_current_function = function;
}


void refalrts::Profiler::read_counters(double counters[]) {
  double basic_runtime_time = m_counters[cCounter_RuntimeTime];
  double basic_native_time = m_counters[cCounter_NativeTime];
  double basic_linear_pattern_time = m_counters[cCounter_LinearPatternTime];
  double basic_repeated_evar_outside_ecycle =
    m_counters[cCounter_RepeatedEvarOutsideECycle];
  double basic_repeated_tvar_outside_ecycle =
    m_counters[cCounter_RepeatedTvarOutsideECycle];
  double basic_repeated_evar_inside_ecycle =
    m_counters[cCounter_RepeatedEvarInsideECycle];
  double basic_repeated_tvar_inside_ecycle =
    m_counters[cCounter_RepeatedTvarInsideECycle];
  double basic_context_copy_time = m_counters[cCounter_ContextCopyTime];
  double basic_ecycle_clear_time = m_counters[cCounter_ECycleClearTime];
  double basic_linear_result_time = m_counters[cCounter_LinearResultTime];
  double basic_tevar_copy_time = m_counters[cCounter_TEvarCopyTime];

  double full_time =
    basic_runtime_time
    + basic_native_time
    + basic_linear_pattern_time
    + basic_repeated_evar_outside_ecycle
    + basic_repeated_tvar_outside_ecycle
    + basic_repeated_evar_inside_ecycle
    + basic_repeated_tvar_inside_ecycle
    + basic_context_copy_time
    + basic_ecycle_clear_time
    + basic_linear_result_time
    + basic_tevar_copy_time;

  double total_pattern_match_time =
    basic_linear_pattern_time
    + basic_repeated_evar_outside_ecycle
    + basic_repeated_tvar_outside_ecycle
    + basic_repeated_evar_inside_ecycle
    + basic_repeated_tvar_inside_ecycle
    + basic_ecycle_clear_time;

  double total_building_result_time =
    basic_linear_result_time + basic_tevar_copy_time;

  double builtin_time =
    basic_runtime_time + basic_native_time + basic_context_copy_time;

  double total_e_loop =
    + basic_repeated_evar_inside_ecycle
    + basic_repeated_tvar_inside_ecycle
    + basic_ecycle_clear_time;

  double linear_refal_time =
    basic_linear_pattern_time + basic_linear_result_time;

  counters[cPerformanceCounter_TotalTime] = full_time;
  counters[cPerformanceCounter_BuiltInTime] = builtin_time;
  counters[cPerformanceCounter_RefalTime] =
    total_pattern_match_time + total_building_result_time;
  counters[cPerformanceCounter_PatternMatchTime] = total_pattern_match_time;
  counters[cPerformanceCounter_BuildResultTime] = total_building_result_time;
  counters[cPerformanceCounter_TEvarCopyTime] = basic_tevar_copy_time;
  counters[cPerformanceCounter_RepeatTvarMatchTime] =
    basic_repeated_tvar_inside_ecycle;
  counters[cPerformanceCounter_RepeatTvarMatchTimeOutsideECycle] =
    basic_repeated_tvar_outside_ecycle;
  counters[cPerformanceCounter_RepeatEvarMatchTime] =
    basic_repeated_evar_inside_ecycle;
  counters[cPerformanceCounter_RepeatEvarMatchTimeOutsideECycle] =
    basic_repeated_evar_outside_ecycle;
  counters[cPerformanceCounter_OpenELoopTime] = total_e_loop;
  counters[cPerformanceCounter_OpenELoopTimeClear] = basic_ecycle_clear_time;
  counters[cPerformanceCounter_LinearRefalTime] = linear_refal_time;
  counters[cPerformanceCounter_LinearPatternTime] = basic_linear_pattern_time;
  counters[cPerformanceCounter_LinearResultTime] = basic_linear_result_time;

  counters[cPerformanceCounter_RuntimeTime] = basic_runtime_time;
  counters[cPerformanceCounter_NativeTime] = basic_native_time;
  counters[cPerformanceCounter_ContextCopyTime] = basic_context_copy_time;
}
