#!/bin/bash

make_subdir() {
  DIR=$1
  MAKE=$2
  (cd "$DIR" && source "$MAKE")
}

RELEASE=${RELEASE:-}
SCRIPT_FLAGS=${SCRIPT_FLAGS:-}
TARGET_SUFFIX=${TARGET_SUFFIX:-}

(
  if [[ -z "$RELEASE" ]]; then
    # Максимум 40 000 000 байт (x32), 80 000 000 байт (x64)
    # RLC_FLAGS используются только для сборки библиотек
    RLC_FLAGS_PLUS="--markup-context --debug-info -OC"
    RLMAKE_FLAGS_PLUS="-X--markup-context -X--debug-info -X-OC"
    DEFAULT_SCRIPT_FLAGS="--rich --debug"
  else
    RLC_FLAGS_PLUS=-OCdDPRS
    RLMAKE_FLAGS_PLUS=-X-OCdDPRS
    DEFAULT_SCRIPT_FLAGS=--scratch
  fi

  if [[ -z "$1" ]]; then
    mkdir -p ../bin
    make_subdir scripts install-scripts.sh
    make_subdir rasl-constants make.sh
    make_subdir compiler makeself-s.sh
    make_subdir lexgen makeself-s.sh
    make_subdir make make-s.sh
    (
      export RLC_FLAGS="$RLC_FLAGS $RLC_FLAGS_PLUS"
      make_subdir lib make.sh
    )
    make_subdir make make.sh
    make_subdir lexgen makeself.sh
    make_subdir compiler makeself.sh
    make_subdir interpreter make.sh
    make_subdir nemytykh-random-program-generator make.sh
    make_subdir rsl-decompiler make.sh
  else
    DIR=$1
    TARGET=$2
    MAINSRC=$3
    PATH_TO_RLC=$4

    if [[ -z "$PATH_TO_RLC" ]]; then
      PATH_TO_RLC=../..
    fi

    if [[ -z "$SCRIPT_FLAGS" ]]; then
      SCRIPT_FLAGS="${DEFAULT_SCRIPT_FLAGS}"
    fi

    source ${PATH_TO_RLC}/scripts/platform-specific.sh

    if [[ -z "$TARGET_SUFFIX" ]]; then
      TARGET_SUFFIX=$(platform_exe_suffix)
    fi

    mkdir -p ../../bin
    (
      export RLMAKE_FLAGS="$RLMAKE_FLAGS $RLMAKE_FLAGS_PLUS"

      ${PATH_TO_RLC}/bin/rlmake \
        ${SCRIPT_FLAGS} --keep-rasls -d ../common "$MAINSRC" -o"$TARGET"
    )
    mv "$TARGET" "../../bin/$TARGET$TARGET_SUFFIX"

    mkdir -p "../../build/$DIR"
    rm -f "../../build/$DIR/"*
    find . ../common \
      \( -name '*.rasl' -o -name '*.cpp' -o -name '*-locals.lst' \) \
      -exec mv '{}' "../../build/$DIR" \;
    cp ${PATH_TO_RLC}/lib/scratch{/exe,-rt{/debug-stubs,/exe,}}/*.{rasl,cpp} \
      "../../build/$DIR"
  fi
)
