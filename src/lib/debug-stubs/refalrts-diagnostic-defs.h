#ifndef RefalRTS_DIAGNOSTIC_DEFS_H
#define RefalRTS_DIAGNOSTIC_DEFS_H


#define REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED 0

namespace refalrts {

class Debugger {
public:
  virtual ~Debugger() {}
};

class VM;

struct DiagnosticConfig {
  Debugger* debugger_factory(VM *) {
    return new Debugger();
  }
};

void init_diagnostic_config(
  DiagnosticConfig *config, int *argc, char *argv[]
);

} // namespace refalrts


#endif // RefalRTS_DIAGNOSTIC_DEFS_H
