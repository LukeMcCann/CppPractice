#include <iostream>

int main() {
  // Create a variable to store the sum
  int sum = 0;

  // Define a lambda function that captures the sum variable by reference
  auto adder = [&sum](int x) { sum += x; };

  // Call the lambda function to add 5 to the sum
  adder(5);
  std::cout << "Sum: " << sum << std::endl;  // Outputs "Sum: 5"

  return 0;
}
