#include <stdint.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h>


void test_clock(void) {
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

  printf(
    "Test clock()\n"
    "%ld calls of clock() per second, %f ns per call\n"
    "%ld quanta per second, %f ms per quantum\n\n",
    calls, 1.0e9 / calls,
    quanta, 1.0e3 / quanta
  );
}


#define dts(ts) ((ts).tv_sec + (ts).tv_nsec * 1.0e-9)
#define test_clock_gettime_clk(clk_id) test_clock_gettime_clk_aux(clk_id, #clk_id)

void test_clock_gettime_clk_aux(clockid_t clk_id, const char *clk_id_str) {
  double res, now, prev, limit;
  unsigned long calls = 0, quanta = 0;
  struct timespec ts;
  const char *unit;

  clock_getres(clk_id, &ts);
  res = dts(ts);

  clock_gettime(clk_id, &ts);
  prev = dts(ts);
  limit = prev + 1;
  while (clock_gettime(clk_id, &ts), now = dts(ts), now <= limit) {
    ++calls;
    if (now != prev) {
      ++quanta;
      prev = now;
    }
  }

  if (res > 1) {
    unit = "s";
  } else if (res > 1e-3) {
    res *= 1e3;
    unit = "ms";
  } else if (res > 1e-6) {
    res *= 1e6;
    unit = "us";
  } else {
    res *= 1e9;
    unit = "ns";
  }

  printf(
    "Clock ID %s, resolution %f %s\n"
    "%ld calls of clock_gettime() per second, %f ns per call\n"
    "%ld quanta in second, %f ms per quantum\n\n",
    clk_id_str, res, unit,
    calls, 1.0e9 / calls,
    quanta, 1.0e3 / quanta
  );
}

void test_clock_gettime(void) {
  printf("Test clock_gettime()\n");
  test_clock_gettime_clk(CLOCK_REALTIME);
  test_clock_gettime_clk(CLOCK_REALTIME_COARSE);
  test_clock_gettime_clk(CLOCK_MONOTONIC);
  test_clock_gettime_clk(CLOCK_MONOTONIC_COARSE);
  test_clock_gettime_clk(CLOCK_MONOTONIC_RAW);
  test_clock_gettime_clk(CLOCK_BOOTTIME);
  test_clock_gettime_clk(CLOCK_PROCESS_CPUTIME_ID);
  test_clock_gettime_clk(CLOCK_THREAD_CPUTIME_ID);
}


#define dtv(tv) ((tv).tv_sec + (tv).tv_usec * 1.0e-6)

void test_gettimeofday(void) {
  double now, prev, limit;
  unsigned long calls = 0, quanta = 0;
  struct timeval tv;

  gettimeofday(&tv, NULL);
  prev = dtv(tv);
  limit = prev + 1;
  while (gettimeofday(&tv, NULL), now = dtv(tv), now <= limit) {
    ++calls;
    if (now != prev) {
      ++quanta;
      prev = now;
    }
  }

  printf(
    "Test gettimeofday()\n"
    "%ld calls of gettimeofday() per second, %f ns per call\n"
    "%ld quanta in second, %f ms per quantum\n\n",
    calls, 1.0e9 / calls,
    quanta, 1.0e3 / quanta
  );
}


uint64_t rdtsc(){
    unsigned int lo,hi;
    __asm__ __volatile__ ("rdtsc" : "=a" (lo), "=d" (hi));
    return ((uint64_t)hi << 32) | lo;
}


#define MAX_TICKS 10000000000ULL

void test_rdtsc(void) {
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
    "Test rdtsc()\n"
    "%.2f calls and %.2f ticks of rdtsc() by %f seconds\n"
    "%.2f calls of rdtsc() per second, %f ns per call\n"
    "%.2f ticks of rdtsc() per second, %f ns per tick\n"
    "%f ticks per call\n\n",
    (double) calls, (double) (now - start), duration,
    calls_per_sec, 1.0e9 / calls_per_sec,
    ticks_per_sec, 1.0e9 / ticks_per_sec,
    ticks_per_sec / calls_per_sec
  );
}


int main() {
  test_clock();
  test_clock_gettime();
  test_gettimeofday();
  test_rdtsc();
  return 0;
}
