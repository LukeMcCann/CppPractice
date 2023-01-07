#include <iostream>

#include "Person/Person.hpp"

using namespace std;

int main()
{
    Person dave("Dave", 23);

    cout << dave.toString() << endl;

    // We can also get the memory location from a created object
    // by prefacing it with &
    cout << "Memory location: " << &dave << endl;

    return 0;
}