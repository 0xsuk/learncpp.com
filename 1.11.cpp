#include <iostream>

int main() {
  std::cout << "Enter an integer: ";
  int num{};
  std::cin >> num;
  std::cout << "Doubled value: " << num * 2 << "\n";
  return 0;
}
