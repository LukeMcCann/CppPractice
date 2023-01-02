#include <iostream>

using namespace std;

int main()
{
    int squareRows = 5;

    for (unsigned int i = 0; i < squareRows; i++) {
        for (unsigned int j = 0; j < 6 - i; j++) {
            cout << '#' << flush;
        }
        cout << endl;
    }

    return 0;
}