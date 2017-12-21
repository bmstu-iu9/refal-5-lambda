if not "%CPPLINEE%" == "" exit /b 0

set CONFIG_FILE="%~dp0..\c-plus-plus.conf.bat"
if not exist %CONFIG_FILE% copy "%~dp0c-plus-plus.conf.bat.template" %CONFIG_FILE% >NUL
call %CONFIG_FILE%

if not "%CPPLINEE%" == "" exit /b 0

if exist "%~dp0..\..\c-plus-plus.conf.bat" (
  call "%~dp0..\..\c-plus-plus.conf.bat"
)

if not "%CPPLINEE%" == "" exit /b 0
echo C++ compiler is not selected, please edit file c-plus-plus.conf.bat
exit /b 1
