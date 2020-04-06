#include "refalrts.h"
#include "refalrts-profiler.h"


//==============================================================================
// Заглушка профилировщика
//==============================================================================


void refalrts::Profiler::read_counters(double counters[]) {
  counters[cPerformanceCounter_TotalTime] = 0.0;
  counters[cPerformanceCounter_BuiltInTime] = 0.0;
  counters[cPerformanceCounter_RefalTime] = 0.0;
  counters[cPerformanceCounter_PatternMatchTime] = 0.0;
  counters[cPerformanceCounter_BuildResultTime] = 0.0;
  counters[cPerformanceCounter_TEvarCopyTime] = 0.0;
  counters[cPerformanceCounter_RepeatTvarMatchTime] = 0.0;
  counters[cPerformanceCounter_RepeatTvarMatchTimeOutsideECycle] = 0.0;
  counters[cPerformanceCounter_RepeatEvarMatchTime] = 0.0;
  counters[cPerformanceCounter_RepeatEvarMatchTimeOutsideECycle] = 0.0;
  counters[cPerformanceCounter_OpenELoopTime] = 0.0;
  counters[cPerformanceCounter_OpenELoopTimeClear] = 0.0;
  counters[cPerformanceCounter_LinearRefalTime] = 0.0;
  counters[cPerformanceCounter_LinearPatternTime] = 0.0;
  counters[cPerformanceCounter_LinearResultTime] = 0.0;

  counters[cPerformanceCounter_RuntimeTime] = 0.0;
  counters[cPerformanceCounter_NativeTime] = 0.0;
  counters[cPerformanceCounter_ContextCopyTime] = 0.0;
}
