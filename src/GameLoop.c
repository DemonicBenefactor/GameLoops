#include <stdio.h>
#include <time.h>
//#include "game.h"  -- Should contain init() events() update() render()

#define FPS 60
#define MSEC (double)CLOCKS_PER_SEC / 1000

void render(int *count);

int main(int argc, char *argv[]) {
  // init()
  static int running = 1;
  static int foo = 0;
  double start, end;
  int counter = 0;
  while (running) {
    start = (double)clock();
    // events()
    // update()
    render(&counter);
    do {
      end = (double)clock();
    } while ((end - start) / (MSEC) < (MSEC) / FPS);
  }
  return 0;
}

void render(int *count) {
  static int foo;
  foo++;
  if (foo >= 60) {
    printf("%d \n", *count);
    *count += 1;
    foo = 0;
  }
}
