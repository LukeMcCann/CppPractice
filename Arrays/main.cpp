#include <iostream>

using namespace std;

int main()
{
    // We declare an array in C++ simply using our [] syntax
    // we MUST declare the number of elements within our array
    // to begin.

    int values[3];

    values[0] = 10;

    // For items we fail to declare values
    // for we receive a garbage value.
    // This is because by default the variables in the array
    // are uninitialised, if we try to use them in this format
    // we get whatever crap happens to be hanging around in computer memory.

    int one = values[0];
    int two = values[1];
    int three = values[2];
    int four = values[3];

    cout << one << endl;
    cout << two << endl;
    cout << three << endl;
    cout << four << endl;

    return 0;
}