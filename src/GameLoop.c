#include <stdio.h>
#include <time.h>
//#include "game.h"  -- Should contain init() events() update() render()

#define FPS 60
#define MSEC (double)CLOCKS_PER_SEC / 1000

void clockDelay(double delay, double *frameStart);

int main(int argc, char *argv[]) {
  // init()
  unsigned int i, j;
  double frameStart;
  i = j = 0;

  while (1) {
    /*---MAIN LOOP START---*/
    frameStart = (double)clock();
    ++i;
    if (i > FPS) {
      printf("%u \n", j);
      i = 0;
      j++;
    }
    // events()
    // update()
    // render()
    /*i---MAIN LOOP END---*/
    clockDelay((MSEC) / FPS, &frameStart);
  }
  return 0;
}

void clockDelay(double delay, double *frameStart) {
  double frameTime = (double)clock();
  while (frameTime / (MSEC) - *frameStart / (MSEC) < delay) {
    frameTime = (double)clock();
  }
}

/*time measures in seconds, not good for milliseconds*/
void timeDelay(double delay) {
  time_t begin, elapsed;
  double diff = 0;
  time(&begin);
  while (diff < delay) {
    time(&elapsed);
    diff = difftime(elapsed, begin);
  }
}
