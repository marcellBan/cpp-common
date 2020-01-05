#pragma once

#include <ostream>
#include <set>
#include <utility>
#include <vector>

// outputstream operator overloads for STL containers

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v) {
  os << "[";
  for (int i = 0; i < v.size(); ++i) {
    os << v[i];
    if (i != v.size() - 1) os << ", ";
  }
  os << "]\n";
  return os;
}

template <typename T, typename S>
std::ostream &operator<<(std::ostream &os, const std::pair<T, S> &p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::set<T> &s) {
  os << "(";
  int i{0};
  for (const auto &se : s) {
    os << se << (i != s.size() - 1 ? ", " : "");
    ++i;
  }

  os << ")\n";
  return os;
}