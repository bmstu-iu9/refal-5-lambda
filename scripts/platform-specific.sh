#!/bin/bash

platform_uname() {
  # uname для Cygwin и MinGW выдаёт имя в виде CYGWIN_osver или MINGW32_osver,
  # номер версии обрезаем
  uname | sed 's/_.*$//'
}

platform_target_uname() {
  # Без RLC_TARGET — платформа хоста. С RLC_TARGET (триплет Zig,
  # например x86_64-linux-musl) — платформа цели.
  if [ -z "$RLC_TARGET" ]; then
    platform_uname
    return
  fi

  case "$RLC_TARGET" in
    *-windows*)
      if [[ "$RLC_TARGET" =~ ^x86_64- ]]; then
        echo MINGW64
      else
        echo MINGW32
      fi
      ;;
    *-macos*|*-darwin*) echo Darwin ;;
    *-linux*) echo Linux ;;
    *) echo unknown ;;
  esac
}

platform_subdir_lookup() {
  LIBDIR=$1

  PLATFORMDIR="$LIBDIR/platform-$(platform_target_uname)"

  if [ ! -d $PLATFORMDIR ]; then
    PLATFORMDIR="$LIBDIR/platform-unknown"
  fi

  echo $PLATFORMDIR
}

platform_exe_suffix() {
  if [[ "$(platform_target_uname)" =~ MINGW.. ]]; then
    echo ".exe"
  fi  # else nothing to print
}

platform_lib_suffix() {
  if [[ "$(platform_target_uname)" =~ MINGW.. ]]; then
    echo ".dll"
  else
    echo ".so"
  fi
}
