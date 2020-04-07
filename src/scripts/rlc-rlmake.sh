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
SREFC_FLAGS=${SREFC_FLAGS}
SRMAKE_FLAGS=${SRMAKE_FLAGS}

# shellcheck disable=SC1090
source "$DISTRDIR/scripts/platform-specific.sh"

# Запуск
main() {
  PREFIX=slim
  BIND=AUTO
  DEBUG=false
  MODE="$(basename "$0")"

  NEXT=true
  while ${NEXT}; do
    case "$1" in
      "--slim") PREFIX=slim; shift ;;
      "--rich") PREFIX=rich; shift ;;
      "--scratch") PREFIX=scratch; shift ;;

      "--auto") BIND=AUTO; shift ;;
      "--static") BIND=STATIC; shift ;;
      "--dynamic") BIND=DYNAMIC; shift ;;

      "--debug") DEBUG=true; shift ;;
      "--no-debug") DEBUG=false; shift ;;

      *) NEXT=false ;;
    esac
  done

  D=()
  if ${DEBUG}; then
    D=(-D "$LIBDIR/$PREFIX-rt/debug" "${D[@]}")
  else
    D=(-D "$LIBDIR/$PREFIX-rt/debug-stubs" "${D[@]}")
  fi
  [[ "$BIND" = AUTO ]] && D=("${D[@]}" -d "$LIBDIR/$PREFIX")
  [[ "$BIND" = STATIC ]] && D=("${D[@]}" -d "$LIBDIR/$PREFIX/exe")
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
  if [[ "$MODE" = "rlc" ]]; then
    # shellcheck disable=SC2086
    rlc-core \
      -OC ${SREFC_FLAGS} \
      "--exesuffix=$(platform_exe_suffix)" "--libsuffix=$(platform_lib_suffix)" \
      "${CPP[@]}" --chmod-x-command="chmod +x" \
      -d "$LIBDIR/common" --prelude=refal5-builtins.refi \
      ${PREFIX} "${D[@]}" -d "$LIBDIR" "$@"
  elif [[ "$MODE" = "rlmake" ]]; then
    # shellcheck disable=SC2086
    rlmake-core \
      -s "rlc-core" \
      -X-OC ${SRMAKE_FLAGS} \
      "-X--exesuffix=$(platform_exe_suffix)" "-X--libsuffix=$(platform_lib_suffix)" \
      "${CPP[@]}" \
      -X--chmod-x-command="chmod +x" \
      -d "$LIBDIR/common" --prelude=refal5-builtins.refi \
      ${PREFIX} "${D[@]}" -d "$LIBDIR" "${RT[@]}" "$@"
  else
    echo BAD SCRIPT NAME "$MODE", expected rlc or rlmake
  fi
}

( main "$@" )
