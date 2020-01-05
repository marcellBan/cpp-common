#pragma once

#include <chrono>
#include <iostream>

namespace bm {
class Timer {
public:
  enum ts { S, MS, NS };
  Timer(ts ts_) : _ts(ts_) {
    start = std::chrono::high_resolution_clock::now();
  }
  ~Timer() {
    switch (_ts) {
    case S:
      std::cout << "Took "
                << std::chrono::duration_cast<std::chrono::seconds>(
                       std::chrono::high_resolution_clock::now() - start)
                       .count()
                << " s\n";
      break;
    case MS:
      std::cout << "Took "
                << std::chrono::duration_cast<std::chrono::milliseconds>(
                       std::chrono::high_resolution_clock::now() - start)
                       .count()
                << " ms\n";
      break;
    case NS:
      std::cout << "Took "
                << std::chrono::duration_cast<std::chrono::nanoseconds>(
                       std::chrono::high_resolution_clock::now() - start)
                       .count()
                << " ns\n";
      break;
    }
  }

private:
  ts _ts;
  std::chrono::high_resolution_clock::time_point start;
};
} // namespace bm