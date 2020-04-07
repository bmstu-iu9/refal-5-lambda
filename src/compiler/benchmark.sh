#!/bin/bash
SRMAKE_FLAGS= ./makeself-s.sh
./update-lib.sh
./makeself.sh
./makeself.sh

if [[ -z "$1" ]]; then
  TIMES=9
else
  TIMES="$1"
fi

if [[ -z "$2" ]]; then
  LOG="benchmark-$(date)"
else
  LOG="benchmark-$2-$(date)"
fi

echo -C>input.prj
[[ -n "$BENCH_FLAGS" ]] && echo "$BENCH_FLAGS" >> input.prj
ls *.ref *.sref >> input.prj
echo --dir=../lib/common>>input.prj
echo --prelude=refal5-builtins.refi>>input.prj

echo
echo Run "../../bin/rlc-core -C $BENCH_FLAGS \*.ref \*.sref" $TIMES times...

for ((i = 1; i <= "$TIMES"; ++i)); do
  echo ${i}
  echo ${i}>>"$LOG".stdout
  ../../bin/rlc-core @input.prj 1>> "$LOG".stdout 2>> "$LOG".stderr
done

sort "$LOG".stderr > "$LOG".time
rm -f *.rasl *.cpp input.prj
