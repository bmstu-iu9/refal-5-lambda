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
  srefc-core \
    $SREFC_FLAGS \
    -c "$CPPLINEE" --cppflags="$CPPLINE_FLAGS" --targsuffix=$(platform_suffix) \
    $* -D "$LIBDIR" -D "$(platform_subdir_lookup "$LIBDIR")"
)
