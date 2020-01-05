#pragma once

namespace bm {
struct vec3 {
  int x, y, z;
};
vec3 operator+(const vec3 &lh, const vec3 &rh) {
  return vec3{lh.x + rh.x, lh.y + rh.y, lh.z + rh.z};
}
vec3 &operator+=(vec3 &lh, const vec3 &rh) {
  lh.x += rh.x;
  lh.y += rh.y;
  lh.z += rh.z;
  return lh;
}
} // namespace bm