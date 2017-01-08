#!/bin/bash

# Получаем путь к папке bin
BINDIR=$(dirname $0)

# Получаем путь к дистрибутиву
DISTRDIR=$(dirname $BINDIR)

# Путь к папке srlib
LIBDIR=$DISTRDIR/srlib

# Запуск
(
  source $DISTRDIR/c-plus-plus.conf.sh
  PATH=$BINDIR:$PATH
  srmake-core \
    -s "srefc-core" \
    $SRMAKE_FLAGS \
    -c "$CPPLINE" --thru=--cppflags="$CPPLINE_FLAGS" -X--targsuffix= \
    $* -D "$LIBDIR"
)
