#include <algorithm>
#include <cmath>
#include <iostream>

// return true if the difference between a and b is within epsilon percent of
// the larger of a and b
bool approximatelyEqualRel(double a, double b, double relEpsilon) {
  return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

int main() {
  // a is really close to 1.0, but has rounding errors, so it's slightly smaller
  // than 1.0
  double a{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};

  // First, let's compare a (almost 1.0) to 1.0.
  std::cout << approximatelyEqualRel(a, 1.0, 1e-8) << '\n';

  // Second, let's compare a-1.0 (almost 0.0) to 0.0
  std::cout << approximatelyEqualRel(a - 1.0, 0.0, 1e-8) << '\n';
}
