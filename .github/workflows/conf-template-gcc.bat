@echo off

rem Если вы используете компилятор MinGW (MinGW builds), установите в строке ниже
rem правильный путь до каталога bin дистрибутива MinGW.
set CPPLINEE=g++ -O2 -Wall -g -o
set CPPLINEESUF=
set CPPLINEL=g++ -Wall -g -shared -Wl,--enable-stdcall-fixup -o
set CPPLINELSUF="%DEFFILE%"
