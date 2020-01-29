#!/bin/bash

# Получаем путь к папке bin
BINDIR="$(dirname "$0")"

# Получаем путь к дистрибутиву
DISTRDIR="$(dirname "$BINDIR")"

# Путь к папке lib
LIBDIR="$DISTRDIR/lib"

# Подавлене предупреждений плагина
CPPLINEE=${CPPLINEE}
CPPLINEL=${CPPLINEL}
CPPLINEESUF=${CPPLINEESUF}
CPPLINELSUF=${CPPLINELSUF}
CPPLINE_FLAGS=${CPPLINE_FLAGS}
SREFC_FLAGS=${SREFC_FLAGS}
SRMAKE_FLAGS=${SRMAKE_FLAGS}

# shellcheck disable=SC1090
source "$DISTRDIR/scripts/platform-specific.sh"

# Запуск
main() {
  PREFIX=slim
  BIND=AUTO
  DEBUG=false

  NEXT=true
  while $NEXT; do
    case "$1" in
      "--slim") PREFIX=slim; shift ;;
      "--rich") PREFIX=rich; shift ;;
      "--scratch") PREFIX=scratch; shift ;;

      "--auto") BIND=AUTO; shift ;;
      "--static") BIND=STATIC; shift ;;
      "--dynamic") BIND=DYNAMIC; shift ;;

      "--debug") DEBUG=true; shift ;;
      "--no-debug") DEBUG=false; shift ;;

      # TODO: удалить после обновления стабильной версии
      "--rich-debug") PREFIX=rich; DEBUG=true; shift ;;
      "--slim-debug") PREFIX=slim; DEBUG=true; shift ;;

      *) NEXT=false ;;
    esac
  done

  D=()
  "$DEBUG" && D=(-d "$LIBDIR/$PREFIX/debug" "${D[@]}")
  [ "$BIND" = AUTO ] && D=("${D[@]}" -d "$LIBDIR/$PREFIX")
  [ "$BIND" = STATIC ] && D=("${D[@]}" -d "$LIBDIR/$PREFIX/exe")
  D=("${D[@]}" -D "$LIBDIR/${PREFIX}-rt" -d "$LIBDIR/references")

  if [[ "$PREFIX" != scratch ]]; then
    CPP=()
    RT=()
    if "$DEBUG"; then
      PREFIX=--prefix="$PREFIX"-debug
    else
      PREFIX=--prefix="$PREFIX"
    fi
  else
    # shellcheck disable=SC1090
    source "$DISTRDIR/scripts/load-config.sh" "$DISTRDIR" || exit 1
    D=(
      -D "$(platform_subdir_lookup "$LIBDIR/scratch-rt")"
      -D "$LIBDIR/scratch-rt/platform-POSIX"
      "${D[@]}"
    )
    PREFIX=
    CPP=(
      "--cpp-command-exe=$CPPLINEE"
      "--cpp-command-lib=$CPPLINEL"
      "--cpp-command-exe-suf=$CPPLINEESUF"
      "--cpp-command-lib-suf=$CPPLINELSUF"
    )
    RT=(
      "--runtime=refalrts-main"
    )
  fi

  PATH=${BINDIR}:$PATH
  if [ "$(basename "$0")" = "srefc" ]; then
    # shellcheck disable=SC2086
    srefc-core \
      -OC ${SREFC_FLAGS} \
      "--exesuffix=$(platform_exe_suffix)" "--libsuffix=$(platform_lib_suffix)" \
      "${CPP[@]}" --cppflags="$CPPLINE_FLAGS" --chmod-x-command="chmod +x" \
      -d "$LIBDIR/common" --prelude=refal5-builtins.refi \
      ${PREFIX} "${D[@]}" -d "$LIBDIR" "$@"
  elif [ "$(basename "$0")" = "srmake" ]; then
    # shellcheck disable=SC2086
    srmake-core \
      -s "srefc-core" \
      -X-OC ${SRMAKE_FLAGS} \
      "-X--exesuffix=$(platform_exe_suffix)" "-X--libsuffix=$(platform_lib_suffix)" \
      "${CPP[@]}" \
      --thru=--cppflags="$CPPLINE_FLAGS"  -X--chmod-x-command="chmod +x" \
      -d "$LIBDIR/common" --prelude=refal5-builtins.refi \
      ${PREFIX} "${D[@]}" -d "$LIBDIR" "${RT[@]}" "$@"
  else
    echo BAD SCRIPT NAME $(basename "$0"), expected srefc or srmake
  fi
}

( main "$@" )
