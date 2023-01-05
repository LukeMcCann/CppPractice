#include <iostream>
#include <typeinfo>

int main() {
  int x = 123;
  std::cout << "The type of x is " << typeid(x).name() << std::endl;  // Outputs "The type of x is int"

  double y = 4.56;
  std::cout << "The type of y is " << typeid(y).name() << std::endl;  // Outputs "The type of y is double"

  return 0;
}
