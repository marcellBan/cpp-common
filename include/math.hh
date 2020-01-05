#pragma once

#include <algorithm>
#include <cmath>
#include <map>
#include <vector>

#include <primes.hh>

namespace bm {
std::map<int, int> FactorPrimes(unsigned long long num) {
  int pi = 0;
  std::map<int, int> res;
  while (num != 1) {
    if (num % bm::PRIMES[pi] == 0) {
      res[bm::PRIMES[pi]]++;
      num /= bm::PRIMES[pi];
      pi = 0;
    } else {
      pi++;
    }
  }
  return res;
}

unsigned long long FindLCM(const std::vector<unsigned long long> &loops) {
  std::vector<std::map<int, int>> factors(loops.size());
  std::transform(loops.begin(), loops.end(), factors.begin(), [](auto n) {
    return FactorPrimes(n);
  });
  std::map<int, int> res;
  for (const auto &f : factors) {
    for (const auto &n : f) {
      if (res[n.first] < n.second) { res[n.first] = n.second; }
    }
  }
  unsigned long long r{1ULL};
  for (const auto &n : res) { r *= std::pow(n.first, n.second); }
  return r;
}
} // namespace bm