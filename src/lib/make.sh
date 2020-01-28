#!/bin/bash

# Подавление предупреждений плагина
SREFC_FLAGS="$SREFC_FLAGS"

compile_separated() {
  TARGET="$1"
  LIBS="$2"

  mkdir -p "$TARGET"

  for s in ${LIBS}; do
    # shellcheck disable=SC2086
    ../../bin/srefc-core -C ${SREFC_FLAGS} "$s" -d common
    ../../bin/srefc-core --no-sources -R -o inco.bin --incorporated="$s"
    grep '//FROM' < "$s".ref > "$TARGET/$s".rasl.froms
    [[ -e "$s".cpp ]] && mv "$s".cpp "$TARGET"
    cat inco.bin >> "$s".rasl
    mv "$s".rasl "$TARGET"
    rm inco.bin
  done
}

compile_scratch() {
  SCRATCHDIR=../../lib/scratch
  compile_separated "$SCRATCHDIR/exe" "$RSOURCES"
  mkdir -p "$SCRATCHDIR"/debug/exe

  SCRATCHDIR=../../lib/scratch-rt
  compile_separated "$SCRATCHDIR/exe" "$CSOURCES"

  for d in . platform-* exe platform-*/lib; do
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
    [ -e "$RASL" ] || : > "${cpp%.cpp}.rasl"
  done

  for d in diagnostic-initializer debugger; do
    mv ../../lib/scratch-rt/refalrts-${d}.* ../../lib/scratch/debug/exe
  done
}

compile_slim() {
  SLIMDIR=../../lib/slim
  mkdir -p ${SLIMDIR}/exe
  SREFC_FLAGS="$SREFC_FLAGS -Od-" compile_separated "$SLIMDIR/exe" "$RSOURCES"
}

prepare_common() {
  mkdir -p ../../lib/common
  cp -R common/* ../../lib/common
}

compile_references() {
  mkdir -p ../../lib/references

  for s in ${CSOURCES} ${RSOURCES}; do
    ../../bin/srefc-core --no-sources -R \
      -o ../../lib/references/"$s".rasl --reference="$s"
  done
}

(
  CSOURCES="Library Hash"
  RSOURCES="LibraryEx GetOpt Platform"

  mkdir -p ../../lib/src

  cp LICENSE ../../lib
  for s in ${CSOURCES} ${RSOURCES}; do
    cp "$s".ref ../../lib/src
  done

  prepare_common
  compile_scratch
  compile_references
  compile_slim
)
