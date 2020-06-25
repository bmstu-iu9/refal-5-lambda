#!/bin/bash

# Подавление предупреждений плагина
RLC_FLAGS="$RLC_FLAGS"

compile_separated() {
  TARGET="$1"
  LIBS="$2"

  mkdir -p "$TARGET"

  for s in ${LIBS}; do
    # shellcheck disable=SC2086
    ../../bin/rlc-core -C ${RLC_FLAGS} "$s" -d common --prelude=refal5-builtins.refi
    ../../bin/rlc-core --no-sources -R -o inco.bin --incorporated="$s"
    grep '//FROM' < "$s".ref > "$TARGET/$s".rasl.froms
    [[ -e "$s".cpp ]] && mv "$s".cpp "$TARGET"
    cat inco.bin >> "$s".rasl
    mv "$s".rasl "$TARGET"
    rm inco.bin
  done
}

compile_scratch() {
  SCRATCHDIR=../../lib/scratch
  compile_separated "$SCRATCHDIR/exe" "LibraryEx Hash GetOpt"

  SCRATCHDIR=../../lib/scratch-rt
  compile_separated "$SCRATCHDIR/exe" "Library Platform"

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
    compile_separated "$SLIMDIR/exe" "LibraryEx GetOpt"
}

prepare_common() {
  mkdir -p ../../lib/common
  cp -R common/* ../../lib/common
}

compile_references() {
  mkdir -p ../../lib/references

  for s in ${LIBRARIES}; do
    ../../bin/rlc-core --no-sources -R \
      -o ../../lib/references/"$s".rasl --reference="$s"
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
        -o ../../../lib/"$l$(platform_lib_suffix)" "$l".ref
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

  prepare_common
  compile_scratch
  compile_references
  compile_slim
  compile_prefixes
  compile_dynamic
)
