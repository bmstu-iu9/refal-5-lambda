#!/bin/bash

# Получаем путь к папке bin
BINDIR=$(dirname $0)

# Получаем путь к дистрибутиву
DISTRDIR="$(dirname $BINDIR)"

# Путь к папке srlib
LIBDIR="$DISTRDIR/srlib"

source "$DISTRDIR/scripts/platform-specific.sh"

set_rich_flags() {
  D=(-d "$LIBDIR/rich")
  PREFIX=--prefix=rich
  CPP=()
}

set_rich_debug_flags() {
  D=(-d "$LIBDIR/rich-debug")
  PREFIX=--prefix=rich-debug
  CPP=()
}

set_slim_flags() {
  D=(-d "$LIBDIR/slim")
  PREFIX=--prefix=slim
  CPP=()
}

set_slim_debug_flags() {
  D=(-d "$LIBDIR/slim-debug")
  PREFIX=--prefix=slim-debug
  CPP=()
}

set_scratch_flags() {
  source "$DISTRDIR/scripts/load-config.sh" "$DISTRDIR" || exit 1
  D=(
    -D "$(platform_subdir_lookup "$LIBDIR/scratch")"
    -D "$LIBDIR/scratch/platform-POSIX"
    -D "$LIBDIR/scratch"
  )
  PREFIX=
  CPP=(
    --cpp-command-exe="$CPPLINEE"
    --cpp-command-lib="$CPPLINEL"
  )
}

set_default_flags() {
  set_slim_debug_flags
}

# Запуск
(
  case "$1" in
    "--rich")
      shift
      set_rich_flags
      ;;

    "--rich-debug")
      shift
      set_rich_debug_flags
      ;;

    "--slim")
      shift
      set_slim_flags
      ;;

    "--slim-debug")
      shift
      set_slim_debug_flags
      ;;

    "--scratch")
      shift
      set_scratch_flags
      ;;

    *)
      set_default_flags
      ;;
  esac

  PATH=$BINDIR:$PATH
  srefc-core \
    -OC $SREFC_FLAGS \
    --exesuffix=$(platform_exe_suffix) --libsuffix=$(platform_lib_suffix) \
    "${CPP[@]}" --cppflags="$CPPLINE_FLAGS" --chmod-x-command="chmod +x" \
    -d "$LIBDIR/common" --prelude=refal5-builtins.srefi \
    $PREFIX "${D[@]}" $*
)
