#!/bin/bash

ROOT=../../..
# С RLC_TARGET префиксы кладутся в lib/<triple>/
OUT="$ROOT"/lib${RLC_TARGET:+/$RLC_TARGET}

call_rlmake() { "$ROOT"/bin/rlmake --scratch --static "$@"; }
call_rlmake_debug() { "$ROOT"/bin/rlmake --scratch --static --debug "$@"; }

make_prefixes() {
  "$1" rich-prefix-exe -o "$OUT"/rich"$2".exe-prefix || exit 1
  "$1" slim-prefix-exe -o "$OUT"/slim"$2".exe-prefix || exit 1
  "$1" --makelib rich-prefix-lib -o "$OUT"/rich"$2".lib-prefix || exit 1
}

mkdir -p "$OUT"
make_prefixes call_rlmake "" || exit 1
make_prefixes call_rlmake_debug "-debug" || exit 1
chmod -x "$OUT"/*.*-prefix
