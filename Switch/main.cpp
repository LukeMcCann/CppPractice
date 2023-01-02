#include <iostream>

using namespace std;

int main()
{
    int value = 5;

    switch(value) {
        case 1:
            cout << "Konnichiwa!" << endl;
            break;
        case 2:
            cout << "Bonjour!" << endl;
            break;
        case 3:
            cout << "Halo!" << endl;
            break;
        case 4:
            cout << "Ciao!" << endl;
            break;
        case 5:
            cout << "Jambo!" << endl;
            break;
        default:
            cout << "Hello!" << endl;
            break;
    }
}