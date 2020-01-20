#!/bin/bash

# Получаем путь к папке bin
BINDIR="$(dirname "$0")"

# Получаем путь к дистрибутиву
DISTRDIR="$(dirname "$BINDIR")"

# Путь к папке srlib
LIBDIR="$DISTRDIR/srlib"

# Подавлене предупреждений плагина
CPPLINEE=${CPPLINEE}
CPPLINEL=${CPPLINEL}
CPPLINEESUF=${CPPLINEESUF}
CPPLINELSUF=${CPPLINELSUF}
CPPLINE_FLAGS=${CPPLINE_FLAGS}
SRMAKE_FLAGS=${SRMAKE_FLAGS}

# shellcheck disable=SC1090
source "$DISTRDIR/scripts/platform-specific.sh"

set_rich_flags() {
  D=(-d "$LIBDIR/rich")
  CPP=()
  RT=()
}

set_rich_debug_flags() {
  D=(-d "$LIBDIR/rich-debug")
  CPP=()
  RT=()
}

set_slim_flags() {
  D=(-d "$LIBDIR/slim")
  CPP=()
  RT=()
}

set_slim_debug_flags() {
  D=(-d "$LIBDIR/slim-debug")
  CPP=()
  RT=()
}

set_scratch_flags() {
  # shellcheck disable=SC1090
  source "$DISTRDIR/scripts/load-config.sh" "$DISTRDIR" || exit 1
  D=(
    -D "$(platform_subdir_lookup "$LIBDIR/scratch")"
    -D "$LIBDIR/scratch/platform-POSIX"
    -D "$LIBDIR/scratch"
  )
  CPP=(
    "--cpp-command-exe=$CPPLINEE"
    "--cpp-command-lib=$CPPLINEL"
    "--cpp-command-exe-suf=$CPPLINEESUF"
    "--cpp-command-lib-suf=$CPPLINELSUF"
  )
  RT=(
    "--runtime=refalrts-main"
  )
}

set_default_flags() {
  set_slim_debug_flags
}

# Запуск
(
  case "$1" in
    "--rich")
      set_rich_flags
      shift
      ;;

    "--rich-debug")
      set_rich_debug_flags
      shift
      ;;

    "--slim")
      shift
      set_slim_flags
      ;;

    "--slim-debug")
      shift
      set_slim_debug_flags
      ;;

    "--scratch")
      shift
      set_scratch_flags
      ;;

    *)
      set_default_flags
      ;;
  esac

  PATH=${BINDIR}:$PATH
  # shellcheck disable=SC2086
  srmake-core \
    -s "srefc-core" \
    -X-OC ${SRMAKE_FLAGS} \
    "-X--exesuffix=$(platform_exe_suffix)" "-X--libsuffix=$(platform_lib_suffix)" \
    "${CPP[@]}" \
    --thru=--cppflags="$CPPLINE_FLAGS"  -X--chmod-x-command="chmod +x" \
    -d "$LIBDIR/common" --prelude=refal5-builtins.refi \
    "${D[@]}" "${RT[@]}" "$@"
)
