#!/bin/bash

# Подавление предупреждений плагина
RLC_FLAGS="$RLC_FLAGS"

compile_separated() {
  TARGET="$1"
  LIBS="$2"

  mkdir -p "$TARGET"

  for s in ${LIBS}; do
    # shellcheck disable=SC2086
    ../../bin/rlc-core -C ${RLC_FLAGS} "$s" -d common \
      --prelude=refal5-builtins.refi || exit 1
    ../../bin/rlc-core --no-sources -R -o inco.bin \
      --incorporated="$s" || exit 1
    grep '//FROM' < "$s".ref > "$TARGET/$s".rasl.froms
    [[ -e "$s".cpp ]] && mv "$s".cpp "$TARGET"
    cat inco.bin >> "$s".rasl
    mv "$s".rasl "$TARGET"
    rm inco.bin
  done
}

compile_scratch() {
  SCRATCHDIR=../../lib/scratch
  compile_separated "$SCRATCHDIR/exe" "LibraryEx Hash GetOpt" || exit 1

  SCRATCHDIR=../../lib/scratch-rt
  compile_separated "$SCRATCHDIR/exe" "Library Platform" || exit 1

  for d in . platform-* exe platform-*/lib debug debug-stubs; do
    if [[ -d "$d" ]]; then
      mkdir -p "$SCRATCHDIR/$d"
      cp "$d"/*.cpp "$SCRATCHDIR/$d"
      for f in "$d"/*.h "$d"/*.def; do
        [[ -e "$f" ]] && cp "$f" "$SCRATCHDIR/$d"
      done
    fi
  done

  find "$SCRATCHDIR" -name '*.cpp' | while read -r cpp; do
    RASL="${cpp%.cpp}.rasl"
    [[ -e "$RASL" ]] || : > "${cpp%.cpp}.rasl"
  done
}

compile_slim() {
  SLIMDIR=../../lib/slim
  mkdir -p ${SLIMDIR}/exe
  RLC_FLAGS="$RLC_FLAGS -Od-" \
    compile_separated "$SLIMDIR/exe" "LibraryEx GetOpt" || exit 1
}

prepare_common() {
  mkdir -p ../../lib/common
  cp -R common/* ../../lib/common
}

compile_references() {
  mkdir -p ../../lib/references

  for s in ${LIBRARIES}; do
    ../../bin/rlc-core --no-sources -R \
      -o ../../lib/references/"$s".rasl --reference="$s" || exit 1
  done
}

compile_prefixes() {
  ( cd prefixes && ./make.sh )
}

compile_dynamic() {
  source ../../scripts/platform-specific.sh
  rm -rf tmp
  mkdir -p tmp
  (
    cd tmp && for l in ${LIBRARIES}; do
      cp ../"$l".ref .
      ../../../bin/rlmake --scratch --makelib \
        -o ../../../lib/"$l$(platform_lib_suffix)" "$l".ref || exit 1
        rm -- "$l".ref
    done
  )
  rm -rf tmp
}

(
  LIBRARIES="Library Hash LibraryEx GetOpt Platform"

  mkdir -p ../../lib/src

  cp LICENSE ../../lib
  for s in ${LIBRARIES}; do
    cp "$s".ref ../../lib/src
  done

  prepare_common || exit 1
  compile_scratch || exit 1
  compile_references || exit 1
  compile_slim || exit 1
  compile_prefixes || exit 1
  compile_dynamic || exit 1
)
