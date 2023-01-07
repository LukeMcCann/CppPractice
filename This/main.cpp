#include <iostream>

#include "Person/Person.hpp"

using namespace std;

int main()
{
    Person dave("Dave", 23);

    cout << dave.toString() << endl;

    return 0;
}