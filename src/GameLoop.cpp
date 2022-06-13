#include <chrono>
#include <iostream>
#include <thread>

using namespace std::chrono;

int main(int argc, char *argv[]) {
  const auto FPS = milliseconds(1000 / 1);
  time_point<steady_clock> delay, start;
  // init
  while (true) {
    start = steady_clock::now();
    // input
    // update
	std::cout << std::time(0) << std::endl;
    // render
	delay = steady_clock::now();
	delay += FPS - (delay - start);
    std::this_thread::sleep_until(delay);
  }
}
