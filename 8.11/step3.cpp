#include <string> // for std::string

void print(double) {}

void print(std::string) {}

int main() {
  print('a'); // 'a' converted to match print(double)

  return 0;
}
