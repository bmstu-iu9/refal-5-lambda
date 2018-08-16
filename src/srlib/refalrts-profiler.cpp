#include <stdio.h>
#include <stdlib.h>

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
  clock_t now = clock();
  refalrts_profiler_assert_eq(m_current_state, cInRuntime);
  m_counters[cCounter_RuntimeTime] += (now - m_prev_cutoff);
  m_prev_cutoff = now;
  m_current_state = cInPatternLinear;
}

void refalrts::Profiler::stop_sentence() {
  clock_t now = clock();
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
  clock_t now = clock();
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
  clock_t now = clock();
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
  clock_t now = clock();
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
  clock_t now = clock();
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
  clock_t now = clock();
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
  clock_t now = clock();
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
  clock_t now = clock();
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

void refalrts::Profiler::stop_function() {
  clock_t now = clock();
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
  unsigned long counters[cPerformanceCounter_COUNTERS_NUMBER];
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
    items[i].counter = counters[items[i].counter];
  }

  qsort(items, nItems, sizeof(items[0]), reverse_compare);

  const double cfSECS_PER_CLOCK = 1.0 / CLOCKS_PER_SEC;
  unsigned long total = counters[refalrts::cPerformanceCounter_TotalTime];

  for (size_t i = 0; i < nItems; ++i) {
    unsigned long value = items[i].counter;

    if (value > 0) {
      double percent = (total != 0) ? 100.0 * value / total : 0.0;
      fprintf(
        stderr, "%s: %.3f seconds (%.1f %%).\n",
        items[i].name, value * cfSECS_PER_CLOCK, percent
      );
    }
  }
}

void refalrts::Profiler::read_counters(unsigned long counters[]) {
  clock_t basic_runtime_time = m_counters[cCounter_RuntimeTime];
  clock_t basic_native_time = m_counters[cCounter_NativeTime];
  clock_t basic_linear_pattern_time = m_counters[cCounter_LinearPatternTime];
  clock_t basic_repeated_evar_outside_ecycle =
    m_counters[cCounter_RepeatedEvarOutsideECycle];
  clock_t basic_repeated_tvar_outside_ecycle =
    m_counters[cCounter_RepeatedTvarOutsideECycle];
  clock_t basic_repeated_evar_inside_ecycle =
    m_counters[cCounter_RepeatedEvarInsideECycle];
  clock_t basic_repeated_tvar_inside_ecycle =
    m_counters[cCounter_RepeatedTvarInsideECycle];
  clock_t basic_context_copy_time = m_counters[cCounter_ContextCopyTime];
  clock_t basic_ecycle_clear_time = m_counters[cCounter_ECycleClearTime];
  clock_t basic_linear_result_time = m_counters[cCounter_LinearResultTime];
  clock_t basic_tevar_copy_time = m_counters[cCounter_TEvarCopyTime];

  clock_t full_time =
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

  clock_t total_pattern_match_time =
    basic_linear_pattern_time
    + basic_repeated_evar_outside_ecycle
    + basic_repeated_tvar_outside_ecycle
    + basic_repeated_evar_inside_ecycle
    + basic_repeated_tvar_inside_ecycle
    + basic_ecycle_clear_time;

  clock_t total_building_result_time =
    basic_linear_result_time + basic_tevar_copy_time;

  clock_t builtin_time =
    basic_runtime_time + basic_native_time + basic_context_copy_time;

  clock_t total_e_loop =
    + basic_repeated_evar_inside_ecycle
    + basic_repeated_tvar_inside_ecycle
    + basic_ecycle_clear_time;

  clock_t linear_refal_time =
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
