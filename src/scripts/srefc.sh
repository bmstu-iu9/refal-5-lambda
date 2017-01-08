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
  srefc-core $SREFC_FLAGS -c "$CPPLINE" --cppflags="$CPPLINE_FLAGS" $* -D "$LIBDIR"
)
