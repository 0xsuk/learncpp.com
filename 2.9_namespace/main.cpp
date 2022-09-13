// won't link, because of name conflict
#include <iostream>

void myFnc(int x) { std::cout << x; }
int main() { return 0; }
