// Using the static keyword on a local variable changes its duration from
// automatic duration to static duration. This means the variable is now created
// at the start of the program, and destroyed at the end of the program

#include <iostream>

void incrementAndPrint() {
  static int s_value{1}; // static duration via static keyword.  This
                         // initializer is only executed once.
  ++s_value;
  std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible because it goes out
  // of scope

int main() {
  incrementAndPrint();
  incrementAndPrint();
  incrementAndPrint();

  return 0;
}
