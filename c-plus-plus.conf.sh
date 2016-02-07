if [ -n "$CPPLINE" ]; then
  ## Раскомментируйте строчку ниже в зависимости от используемого
  ## компилятора C++

  ## Компилятор GNU C++
  # CPPLINE=g++ -Wall -g

  ## Компилятор Clang:
  # CPPLINE=clang++ -Wall -g

  ## Если ваш компилятор C++ отсутствует в списке ниже, впишите его сами:
  # PATH=$PATH:…
  # CPPLINE=…
fi

## По умолчанию используем GNU C++:
if [ -z "$CPPLINE" ]; then
  CPPLINE=g++ -Wall -g
fi
