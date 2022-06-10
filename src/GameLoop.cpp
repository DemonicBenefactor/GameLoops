#include <chrono>
#include <thread>
#include <iostream>

int main(int argc, char *argv[]) {
  auto delay = std::chrono::steady_clock::now();

  while (true) {
    delay += std::chrono::milliseconds(1000 / 1);
    std::cout << std::time(0) << std::endl;
    std::this_thread::sleep_until(delay);
  }
}
