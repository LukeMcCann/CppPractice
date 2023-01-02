#include <iostream>

using namespace std;

int main()
{
    int squareColumns = 5;
    int squareRows = 5;

    for (unsigned int i = 0; i < squareRows; i++) {
        for (unsigned int j = 0; j < squareColumns; j++) {
            cout << '#' << flush;
        }
        cout << endl;
        squareColumns--;
    }
}