#include <stdio.h>
#include <time.h>

int main() {
  clock_t now, prev, limit;
  unsigned long calls = 0, quanta = 0;

  prev = clock();
  limit = prev + CLOCKS_PER_SEC;
  while (now = clock(), now <= limit) {
    ++calls;
    if (now != prev) {
      ++quanta;
      prev = now;
    }
  }

  printf("%ld calls of clock() per second, %f ns per call\n", calls, 1.0e9 / calls);
  printf("%ld quanta per second, %f ms per quantum\n", quanta, 1.0e3 / quanta);
  return 0;
}
