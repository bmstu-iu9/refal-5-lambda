#!/bin/bash

# Получаем путь к папке bin
BINDIR=$(dirname $0)

# Получаем путь к дистрибутиву
DISTRDIR=$(dirname $BINDIR)

# Путь к папке srlib
LIBDIR=$DISTRDIR/srlib

source "$BINDIR/platform-specific.sh"

set_rich_flags() {
  D=(-d "$LIBDIR/rich")
  PREFIX=--prefix=rich
}

set_slim_flags() {
  set_default_flags
}

set_scratch_flags() {
  D=(-D "$LIBDIR/scratch" -D "$(platform_subdir_lookup "$LIBDIR/scratch")")
  PREFIX=
}

set_default_flags() {
  set_scratch_flags
}

# Запуск
(
  case "$1" in
    "--rich")
      shift
      set_rich_flags
      ;;

    "--slim")
      shift
      set_slim_flags
      ;;

    "--scratch")
      shift
      set_scratch_flags
      ;;

    *)
      set_default_flags
      ;;
  esac

  source $DISTRDIR/c-plus-plus.conf.sh
  PATH=$BINDIR:$PATH
  srefc-core \
    $SREFC_FLAGS \
    --cpp-command-exe="$CPPLINEE" --exesuffix=$(platform_exe_suffix) \
    --cpp-command-lib="$CPPLINEL" --libsuffix=$(platform_lib_suffix) \
    --cppflags="$CPPLINE_FLAGS" --chmod-x-command="chmod +x" \
    -d "$LIBDIR/common" --prelude=refal5-builtins.srefi \
    $PREFIX "${D[@]}" $*
)
