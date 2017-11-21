@echo off

if not exist distrib\bootstrap.bat (
  git submodule init
  git submodule update
)

echo Prepare config...
setlocal
  call scripts\load-config.bat
endlocal

echo Prepare stable version (distrib)...
cd distrib
call bootstrap.bat || exit /b 1
cd ..
if not exist bin\nul mkdir bin

echo Compile sources...
cd src
call make.bat

if not "%1"=="--no-tests" (
  echo Starting autotests...
  cd ..\autotests
  call run.bat
)
