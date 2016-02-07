if [ -n "$CPPLINE" ]; then
  ## Раскомментируйте строчку ниже в зависимости от используемого
  ## компилятора C++

  ## Компилятор GNU C++
  # CPPLINE=g++

  ## Компилятор Clang:
  # CPPLINE=clang++
fi

## По умолчанию используем GNU C++:
if [ -z "$CPPLINE" ]; then
  CPPLINE=g++
fi
