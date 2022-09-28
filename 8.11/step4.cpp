// We haven't covered classes yet, so don't worry if this doesn't make sense
#include <iostream>
class X // this defines a new type called X
{
public:
  operator int() { return 0; } // Here's a user-defined conversion from X to int
};

void print(int x) { std::cout << "Converted to: " << x << "\n"; }

void print(double) {}

int main() {
  X x;      // Here, we're creating an object of type X (named x)
  print(x); // x is converted to type int using the user-defined conversion from
            // X to int

  return 0;
}
