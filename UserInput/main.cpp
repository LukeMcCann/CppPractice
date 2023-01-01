#include <iostream>

using namespace std;

int main()
{
    string msg = "Hello";
    string name;


    cout << "Enter your name: " << flush;
    cin >> name;

    cout << msg << " " << name << "!" << endl;

    return 0;
}