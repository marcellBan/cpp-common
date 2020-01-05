#pragma once

#include <algorithm>
#include <cctype>
#include <string>

namespace bm {
// string manipulations from
// https://stackoverflow.com/a/217605/4063256

// trim from start (in place)
void TrimLeft(std::string &s) {
  s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
            return !std::isspace(ch);
          }));
}

// trim from end (in place)
void TrimRight(std::string &s) {
  s.erase(std::find_if(
              s.rbegin(), s.rend(), [](int ch) { return !std::isspace(ch); })
              .base(),
          s.end());
}

// trim from both ends (in place)
void Trim(std::string &s) {
  TrimLeft(s);
  TrimRight(s);
}

// trim from start (copying)
std::string TrimLeft_copy(std::string s) {
  TrimLeft(s);
  return s;
}

// trim from end (copying)
std::string TrimRight_copy(std::string s) {
  TrimRight(s);
  return s;
}

// trim from both ends (copying)
std::string Trim_copy(std::string s) {
  Trim(s);
  return s;
}
} // namespace bm