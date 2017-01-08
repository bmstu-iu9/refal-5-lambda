if [ -n "$CPPLINE" ]; then
  ## Раскомментируйте строчку ниже в зависимости от используемого
  ## компилятора C++

  ## Компилятор GNU C++
  # CPPLINE='g++ -Wall -g -o'

  ## Компилятор Clang:
  # CPPLINE='clang++ -Wall -g -o'

  ## Если ваш компилятор C++ отсутствует в списке ниже, впишите его сами:
  # PATH=$PATH:…
  # CPPLINE=…

  echo>/dev/null
fi

## По умолчанию используем GNU C++:
if [ -z "$CPPLINE" ]; then
  CPPLINE='g++ -Wall -g -o'
fi
