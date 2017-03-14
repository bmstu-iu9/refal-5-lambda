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
    -c "$CPPLINEE" --thru=--cppflags="$CPPLINE_FLAGS" \
    -X--targsuffix=$(platform_suffix) \
    $* -D "$LIBDIR" -D "$(platform_subdir_lookup "$LIBDIR")"
)
