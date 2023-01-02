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

    double numbers[4] = {1.2, 2.1, 3.2, 6.7};

    cout << numbers[0] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // Sometimes we may want to iniitalize an empty array:

    int numberArray[100] = {};

    for (int i = 0; i < 100; i++)
    {
        cout << "Element at index " << i << ": " << numberArray[i] << endl;
    }

    return 0;
}