// inline namespaces
#include <iostream>

inline namespace v1 // declare an inline namespace named v1
{
void doSomething() { std::cout << "v1\n"; }
} // namespace v1

namespace v2 // declare a normal namespace named v2
{
void doSomething() { std::cout << "v2\n"; }
} // namespace v2

int main() {
  v1::doSomething(); // calls the v1 version of doSomething()
  v2::doSomething(); // calls the v2 version of doSomething()

  doSomething(); // calls the inline version of doSomething() (which is v1)

  return 0;
}
