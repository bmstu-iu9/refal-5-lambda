#include <stdio.h>
#include <stdint.h>
#include <time.h>

/*
  Код взят со страницы
  https://helloacm.com/the-rdtsc-performance-timer-written-in-c/
*/

//  Windows
#ifdef _MSC_VER
 
#include <intrin.h>
uint64_t rdtsc(){
    return __rdtsc();
}

//  Linux/GCC
#else

uint64_t rdtsc(){
    unsigned int lo,hi;
    __asm__ __volatile__ ("rdtsc" : "=a" (lo), "=d" (hi));
    return ((uint64_t)hi << 32) | lo;
}

#endif

#define MAX_TICKS 10000000000ULL

int main() {
  clock_t clock_start, clock_end;
  uint64_t now, start, limit;
  uint64_t calls = 0, quanta = 0;
  const double fCLOCKS_PER_SEC = CLOCKS_PER_SEC;
  double duration, calls_per_sec, ticks_per_sec;

  clock_start = clock();
  start = rdtsc();
  limit = start + MAX_TICKS;
  while (now = rdtsc(), now <= limit) {
    ++calls;
  }
  clock_end = clock();

  duration = (clock_end - clock_start) / fCLOCKS_PER_SEC;
  calls_per_sec = calls / duration;
  ticks_per_sec = (now - start) / duration;

  printf(
    "%.2f calls and %.2f ticks of rdtsc() by %f seconds\n"
    "%.2f calls of rdtsc() per second, %f ns per call\n"
    "%.2f ticks of rdtsc() per second, %f ns per tick\n"
    "%f ticks per call\n",
    (double) calls, (double) (now - start), duration,
    calls_per_sec, 1.0e9 / calls_per_sec,
    ticks_per_sec, 1.0e9 / ticks_per_sec,
    ticks_per_sec / calls_per_sec
  );
  return 0;
}
