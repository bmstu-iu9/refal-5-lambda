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
}

set_slim_flags() {
  set_default_flags
}

set_scratch_flags() {
  D=(-D "$LIBDIR/scratch" -D "$(platform_subdir_lookup "$LIBDIR/scratch")")
}

set_default_flags() {
  set_scratch_flags
}

# Запуск
(
  case "$1" in
    "--rich")
      set_rich_flags
      shift
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
  srmake-core \
    -s "srefc-core" \
    $SRMAKE_FLAGS \
    --cpp-command-exe="$CPPLINEE" -X--exesuffix=$(platform_exe_suffix) \
    --cpp-command-lib="$CPPLINEL" -X--libsuffix=$(platform_lib_suffix) \
    --thru=--cppflags="$CPPLINE_FLAGS"  -X--chmod-x-command="chmod +x" \
    "${D[@]}" $*
)
