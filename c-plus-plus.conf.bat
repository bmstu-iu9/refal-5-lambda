@echo off
rem Раскомментируте групппу строчек ниже в зависимости от используемого
rem компилятора C++

rem Если вы используете компилятор Visual C++, раскомментируйте одну из строчек
rem ниже. Убедитесь, что в ней задан правильный путь к файлу vcvarsall.bat
:: call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86
:: call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86_amd64
rem Не забудьте раскомментировать и эту строку
:: set CPPLINE=cl /EHcs /W3 /wd4996 -I..\SRLib

rem Если вы используете компилятор Borland C++ Compiler 5.5
 set PATH=%PATH%;C:\Borland\BCC55\bin
 set CPPLINE=bcc32 -IC:\Borland\BCC55\Include -LC:\Borland\BCC55\Lib

rem Если вы используете компилятор MinGW (MinGW builds), установите в строке ниже
rem правильный путь до каталога bin дистрибутива MinGW.
:: set PATH=%PATH%;C:\Program Files\MinGW\bin
:: set CPPLINE=g++ -Wall -g

if not "%CPPLINE%" == "" goto END
echo C++ compiler is not selected, please edit file c-plus-plus.conf.bat
exit 1
:END