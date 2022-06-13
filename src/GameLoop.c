#include <stdio.h>
#include <time.h>
//#include "game.h"  -- Should contain init() events() update() render()

#define FPS 60
#define MSEC (double)CLOCKS_PER_SEC / 1000

void clockDelay(double delay, double *frameStart);

int main(int argc, char *argv[]) {
  // init()
  static int running = 1;
  double frameStart;
  while (running) {
    frameStart = (double)clock();
    // events()
    // update()
    // render()
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

