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
  source $DISTRDIR/c-plus-plus.conf.sh
  PATH=$BINDIR:$PATH
  srmake-core \
    -s "srefc-core" \
    $SRMAKE_FLAGS \
    --cpp-command-exe="$CPPLINEE" -X--exesuffix=$(platform_exe_suffix) \
    --cpp-command-lib="$CPPLINEL" -X--libsuffix=$(platform_lib_suffix) \
    --thru=--cppflags="$CPPLINE_FLAGS" \
    $* -D "$LIBDIR" -D "$(platform_subdir_lookup "$LIBDIR")"
)
