@echo off

rem Если переменная среды уже установлена явно, то содержимое файла игнорируется
if not "%CPPLINE%" == "" goto :EOF

rem Раскомментируте групппу строчек ниже в зависимости от используемого
rem компилятора C++

rem Если вы используете компилятор Visual C++, раскомментируйте одну из строчек
rem ниже. Убедитесь, что в ней задан правильный путь к файлу vcvarsall.bat
:: call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86
:: call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x86_amd64
rem Не забудьте раскомментировать и эту строку
:: set CPPLINE=cl /EHcs /W3 /wd4996

rem Если вы используете компилятор Borland C++ Compiler 5.5
:: set PATH=%PATH%;C:\Borland\BCC55\bin
:: set CPPLINE=bcc32 -IC:\Borland\BCC55\Include -LC:\Borland\BCC55\Lib -w

rem Если вы используете компилятор MinGW (MinGW builds), установите в строке ниже
rem правильный путь до каталога bin дистрибутива MinGW.
:: set PATH=%PATH%;C:\Program Files\MinGW\bin
:: set CPPLINE=g++ -Wall -g

rem Если вы используете компилятор Watcom, проверьте, что установлен правильный
rem путь к файлу owsetenv.bat
:: call C:\WATCOM\owsetenv.bat
:: set CPPLINE=cl -nologo -W3 -passwopts:-wcd=13


rem Если вы используете компилятор Clang, раскомментируйте все три строчки ниже
rem и установите в первых двух строчках правильный путь к каталогам bin
rem дистрибутивов MinGW и LLVM.
rem Примечание. Разрядность (32 или 64) дистрибутивов MinGW и LLVM должна быть
rem одинаковой.
:: set PATH=%PATH%;C:\Program Files\MinGW\bin
:: set PATH=%PATH%;C:\Program Files\LLVM\bin
:: set CPPLINE=clang++ -Wall -g

rem Если ваш компилятор C++ отсутствует в списке ниже, впишите его сами:
:: set PATH=%PATH%;…
:: set CPPLINE=…

if not "%CPPLINE%" == "" goto :EOF
echo C++ compiler is not selected, please edit file c-plus-plus.conf.bat
exit 1
