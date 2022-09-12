#include <iostream>

int main() {
  std::cout << "Enter a number: ";
  int x{}; // there's debate over variables for user input should be initialized
  std::cin >> x;
  std::cout << "You endtered " << x << "\n";
}
