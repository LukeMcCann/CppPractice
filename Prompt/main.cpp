#include <iostream>

using namespace std;

int main()
{
    string password = "hello";
    cout << "Enter your password > " << flush;

    string input;
    cin >> input;

    if (input == password)
    {
        cout << "You are now logged in!" << endl;
        return 0;
    }

    if (input != password)
    {
        cout << "Password incorrect!" << endl;
        return 1;
    }

    return 0;
}