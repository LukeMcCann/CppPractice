#include <iostream>

#include "main.h" // Tells the preprocessor that we want to use
                 // the functions in main.h

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