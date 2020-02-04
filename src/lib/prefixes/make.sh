#!/bin/bash

ROOT=../../..

call_srmake() { "$ROOT"/bin/srmake --scratch --static "$@"; }
call_srmake_debug() { "$ROOT"/bin/srmake --scratch --static --debug "$@"; }

make_prefixes() {
  "$1" rich-prefix-exe -o "$ROOT"/lib/rich"$2".exe-prefix
  "$1" slim-prefix-exe -o "$ROOT"/lib/slim"$2".exe-prefix
  "$1" --makelib rich-prefix-lib -o "$ROOT"/lib/rich"$2".lib-prefix
}

make_prefixes call_srmake ""
make_prefixes call_srmake_debug "-debug"
chmod -x "$ROOT"/lib/*.*-prefix
