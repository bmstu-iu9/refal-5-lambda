@echo off

for %%s in (tests\negative\*.ref) do (
  echo Passing %%s...
  ..\..\bin\rlc-core --extended --grammar-check %%s >__out.txt 2>__error.txt
  if errorlevel 100 (
    type __out.txt
    echo COMPILER FAILS, see __error.txt
    exit /b 1
  )

  if not errorlevel 1 (
    type __out.txt
    echo COMPILER SUCCESSED, BUT EXPECTED SYNTAX ERRORS
    exit /b 1
  )
)

for %%s in (tests\positive\*.ref) do (
  echo Passing %%s...
  ..\..\bin\rlc-core --extended --grammar-check %%s >__out.txt 2>__error.txt
  if errorlevel 100 (
    type __out.txt
    echo COMPILER FAILS, see __error.txt
    exit /b 1
  )

  if errorlevel 1 (
    type __out.txt
    echo FOUND UNEXPECTED SYNTAX ERRORS ON POSITIVE TEST
    exit /b 1
  )
)

if exist __out.txt erase __out.txt
if exist __error.txt erase __error.txt
