#!/bin/bash

rm -f *.rasl-module *.rasl caller

# Теперь компилятор проверяет дубликаты entry-функций при создании,
# поэтому исполнимый файл с двумя одноимёнными entry-функциями
# нельзя создать командой
#
# ../../../bin/rlmake --keep-rasls -X-OC -X--markup-context caller.ref
#
# Поэтому создаём ошибочный файл искусственно

../../../bin/rlc --no-sources -o caller
../../../bin/rlc -C -OC --markup-context caller.ref
cat caller.rasl >> ./caller

./caller
if [[ $? -eq 0 ]]; then
  echo TEST FAILED! Program must be fail!
  exit 1
else
  echo Test OK! This failure is normal and expected!
  rm -f *.rasl-module *.rasl caller
  exit 0
fi
