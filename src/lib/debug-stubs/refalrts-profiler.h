#ifndef RefalRTS_PROFILER_H_
#define RefalRTS_PROFILER_H_


//==============================================================================
// Заглушка профилировщика
//==============================================================================

namespace refalrts {

struct DiagnosticConfig;
class Domain;

class Profiler {
public:
  Profiler(DiagnosticConfig *) { }

  void start_profiler() { }
  void end_profiler(Domain *domain) { }
  void read_counters(double counters[]);

  void add_profile_metric_unwrap(const RefalFuncName& function) { }
  void add_profile_metric_call(const RefalFuncName& function) { }

  void init_function_count() { }

  void start_generated_function() { }
  void stop_sentence() { }
  void start_e_loop() { }
  void start_repeated_evar() { }
  void start_repeated_tvar() { }
  void stop_repeated() { }
  void start_result() { }
  void start_copy() { }
  void stop_copy() { }
  void stop_allocation_abnormal() { }
  void stop_function() { }
};

}  // namespace refalrts


#endif  // RefalRTS_PROFILER_H_
