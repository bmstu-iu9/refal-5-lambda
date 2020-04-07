#!/bin/bash

source ../../scripts/load-config.sh ../.. || exit 1
source ../../scripts/platform-specific.sh

LOOPS=10
if [[ -n "$1" ]]; then
  LOOPS="$1"
fi

main() {
  regression || return 1
  new_tests
}

regression() {
  for r in saved-test-*.ref; do
    if run_test "$r"; then
      rm -f *.rasl *.cpp *.out* *.err*
    else
      return 1
    fi
  done
}

new_tests() {
  NOW=$(LC_ALL=C date | sed 's/[ :]/-/g')
  echo "start ($NOW, x$LOOPS) $(date)" >> time.txt

  ../../bin/nemytykh-random-program-generator "$LOOPS" "_$NOW" /comments
  echo "gen ($NOW) $(date)" >> time.txt

  for r in test-*.ref; do
    if run_test "$r"; then
      rm -f ${r%%.ref}.*
    fi
  done

  echo "stop ($NOW) $(date)" >> time.txt
}

run_test() {
  FILE=${1%%.ref}

  echo "Passing $FILE:"
  ../../bin/rlc-core --classic -C "$FILE" --prelude=prelude-for-test \
    2>"$FILE.err" >"$FILE.out"

  if [[ $? -gt 99 ]]; then
    echo "...COMPILER FAILS ON $FILE, see $FILE.err"
    return 1
  fi
  rm -f "$FILE.rasl"
  return 0
}

main
