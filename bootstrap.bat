@echo off

if not exist distrib\bootstrap.bat (
  git submodule init
  git submodule update
)

cd distrib
call bootstrap.bat
cd ..
if not exist bin\nul mkdir bin

cd src
call make.bat

cd ..\autotests
call run.bat
