#include <iostream>

using namespace std;

int main()
{
    string animals[2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };

    int rowSize = sizeof(animals)/sizeof(animals[0]);
    int colSize = sizeof(animals[0])/sizeof(string); // animals[0][0] would also work

    for (unsigned int i = 0; i < rowSize; i++) {
        for (unsigned int j = 0; j < colSize; j++) {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

    // We can find the length of an array using sizeof
    // sizeof will return the number of bytes in memory
    // used by our array, we can divide this by the
    // number of bytes used by a single element to find
    // the number of items in our array.

    int values[] = {1, 2, 3};

    // Remember sizeof returns an unsigned value.
    for (unsigned int k = 0; k < sizeof(values)/sizeof(int); k++) {
        cout << "Element " << k << ": " << values[k] << endl;
    }

    return 0;
}