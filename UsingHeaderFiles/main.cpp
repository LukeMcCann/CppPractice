#include <iostream>

#include "main.h" // Tells the preprocessor that we want to use
                 // the functions in main.h

                 // We use double quotes for these includes
                 // angle brackets refer to files in a standard location
                 // which the compiler will know about.

                 // Double quotes refer to the files included in the
                 // project.

using namespace std;

int main()
{
    doSomething();

    return 0;
}

void doSomething()
{
    cout << "Hello" << endl;
}