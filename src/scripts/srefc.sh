#!/bin/bash

# Получаем путь к папке bin
BINDIR=$(dirname $0)

# Получаем путь к дистрибутиву
DISTRDIR=$(dirname $BINDIR)

# Путь к папке srlib
LIBDIR=$DISTRDIR/srlib

source "$BINDIR/platform-specific.sh"

# Запуск
(
  case "$1" in
    "--rich")
      shift
      ;;

    "--slim")
      shift
      ;;

    "--scratch")
      shift
      ;;

    *)
      ;;
  esac

  source $DISTRDIR/c-plus-plus.conf.sh
  PATH=$BINDIR:$PATH
  srefc-core \
    $SREFC_FLAGS \
    --cpp-command-exe="$CPPLINEE" --exesuffix=$(platform_exe_suffix) \
    --cpp-command-lib="$CPPLINEL" --libsuffix=$(platform_lib_suffix) \
    --cppflags="$CPPLINE_FLAGS" \
    $* -D "$LIBDIR" -D "$(platform_subdir_lookup "$LIBDIR")"
)
