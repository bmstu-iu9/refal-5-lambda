#!/bin/bash

platform_uname() {
  # uname для Cygwin и MinGW выдаёт имя в виде CYGWIN_osver или MINGW32_osver,
  # номер версии обрезаем
  uname | sed 's/_.*$//'
}

platform_subdir_lookup() {
  LIBDIR=$1

  PLATFORMDIR="$LIBDIR/platform-$(platform_uname)"

  if [ ! -d $PLATFORMDIR ]; then
    PLATFORMDIR="$LIBDIR/platform-unknown"
  fi

  echo $PLATFORMDIR
}

platform_exe_suffix() {
  if [[ "$(platform_uname)" =~ MINGW.. ]]; then
    echo ".exe"
  fi  # else nothing to print
}

platform_lib_suffix() {
  if [[ "$(platform_uname)" =~ MINGW.. ]]; then
    echo ".dll"
  else
    echo ".so"
  fi
}
