## MinGW uses Windows DLL API, libdl.a don’t supported on it.

LIBDL='-ldl'
if [[ "$(uname)" =~ MINGW ]]; then
  LIBDL=''
fi


CPPLINEE='g++ -O2 -Wall -g -o'
CPPLINEESUF="$LIBDL"
CPPLINEL='g++ -shared -fpic -Wall -g -o'
CPPLINELSUF=''


## .def file for linking dynamic libraries on MinGW
if [[ "$(uname)" =~ MINGW ]]; then
  DEFFILE="$1/lib/scratch-rt/platform-Windows/lib/refalrts-main.def"
  if [[ ! -e "$DEFFILE" ]]; then
     DEFFILE="$1/../src/lib/platform-Windows/lib/refalrts-main.def"
  fi

  CPPLINEL="${CPPLINEL//-o/-Wl,--enable-stdcall-fixup -o}"
  CPPLINELSUF="$CPPLINELSUF $DEFFILE"
fi
