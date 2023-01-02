#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int squareRows = 7;

    for (int i = 0; i <= squareRows; i++) {
        for (unsigned int j = 0; j < 4 - abs(4 - i); j++) {
            cout << '#' << flush;
        }
        cout << endl;
    }

    return 0;
}