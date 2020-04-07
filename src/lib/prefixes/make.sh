#!/bin/bash

ROOT=../../..

call_rlmake() { "$ROOT"/bin/rlmake --scratch --static "$@"; }
call_rlmake_debug() { "$ROOT"/bin/rlmake --scratch --static --debug "$@"; }

make_prefixes() {
  "$1" rich-prefix-exe -o "$ROOT"/lib/rich"$2".exe-prefix
  "$1" slim-prefix-exe -o "$ROOT"/lib/slim"$2".exe-prefix
  "$1" --makelib rich-prefix-lib -o "$ROOT"/lib/rich"$2".lib-prefix
}

make_prefixes call_rlmake ""
make_prefixes call_rlmake_debug "-debug"
chmod -x "$ROOT"/lib/*.*-prefix
