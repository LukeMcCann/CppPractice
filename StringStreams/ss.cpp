#include <sstream>
#include <iostream>
#include <string>

int main() {
  // Convert an integer to a string
  int x = 123;
  std::stringstream ss;
  ss << x;
  std::string str = ss.str();
  std::cout << "str = " << str << std::endl;  // Outputs "str = 123"

  // Convert a string to an integer
  str = "456";
  ss.str(str);
  ss >> x;
  std::cout << "x = " << x << std::endl;  // Outputs "x = 456"

  return 0;
}
