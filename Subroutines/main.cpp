#include <iostream>

using namespace std;

// Subroutines are Functions

void showMenu()
{
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
}

int main()
{
    showMenu();

    cout << "Enter selection: " << flush;

    int input;
    cin >> input;

    switch(input) {
        case 1:
            cout << "Searching..." << endl;
            break;
        case 2:
            cout << "Viewing..." << endl;
            break;
        case 3:
            cout << "Quitting..." << endl;
            break;
        default:
            cout << "Please select a item from the menu." << endl;
    }

    return 0;
}