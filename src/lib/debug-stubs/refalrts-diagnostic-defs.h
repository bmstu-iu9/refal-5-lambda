#ifndef RefalRTS_DIAGNOSTIC_DEFS_H
#define RefalRTS_DIAGNOSTIC_DEFS_H


#define REFAL_5_LAMBDA_DIAGNOSTIC_ENABLED 0

namespace refalrts {

struct DiagnosticConfig {
  /* пусто */
};

void init_diagnostic_config(
  DiagnosticConfig *config, int *argc, char *argv[]
);

} // namespace refalrts


#endif // RefalRTS_DIAGNOSTIC_DEFS_H
