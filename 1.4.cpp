#include <iostream>

// always use {} initialization
int main() {
  int width = 5.1; // no error (bad)
  int bwidth{5.1}; // error (good)
}
