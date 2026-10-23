@echo offTr

rem Определяет параметры платформы цели:
rem   TARGET_OS  — Windows, Darwin, Linux или unknown
rem   EXE_SUFFIX — суффикс исполнимых файлов
rem   LIB_SUFFIX — суффикс динамических библиотек
rem Без RLC_TARGET — платформа хоста (Windows). С RLC_TARGET (триплет Zig,
rem например x86_64-linux-musl) — платформа цели.
rem Скрипт не использует setlocal, переменные остаются у вызывающего.

set TARGET_OS=Windows
set EXE_SUFFIX=.exe
set LIB_SUFFIX=.dll

if "%RLC_TARGET%"=="" exit /b 0

set TARGET_OS=unknown
set EXE_SUFFIX=
set LIB_SUFFIX=.so

if not "%RLC_TARGET:-windows=%"=="%RLC_TARGET%" (
  set TARGET_OS=Windows
  set EXE_SUFFIX=.exe
  set LIB_SUFFIX=.dll
)
if not "%RLC_TARGET:-macos=%"=="%RLC_TARGET%" set TARGET_OS=Darwin
if not "%RLC_TARGET:-darwin=%"=="%RLC_TARGET%" set TARGET_OS=Darwin
if not "%RLC_TARGET:-linux=%"=="%RLC_TARGET%" set TARGET_OS=Linux
exit /b 0
