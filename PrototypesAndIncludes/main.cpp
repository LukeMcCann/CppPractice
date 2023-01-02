#include <iostream>

using namespace std;

void doSomething(); // Prototype declaration

int main()
{
    doSomething();

    return 0;
}

// This is not available when it is called
// in the main function without the prototype declaration.
// This is because compilers read files line by line,
// unlike JS hoisting is not a thing in C++ so
// we must declare some reference to the function
// in order to use it.
void doSomething()
{
    cout << "Hello" << endl;
}