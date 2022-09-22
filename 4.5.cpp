#include <iostream>

int main() {
  unsigned short x{65535}; // largest 16-bit unsigned value possible
  std::cout << "x was: " << x << '\n';

  x = 65536; // 65536 is out of our range, so we get wrap-around
  std::cout << "x is now: " << x << '\n'; // 0

  x = 65537; // 65537 is out of our range, so we get wrap-around
  std::cout << "x is now: " << x << '\n'; // 1

  return 0;
}