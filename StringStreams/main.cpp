#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string name = "Bob";
    int age = 32;
    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "\nAge is: ";
    ss << age;

    // Trying to concat string types with int causes an erro without stringStreams
    // C++ does not support type coercion as + is not a valid operator for string to int calculations
    // string info = "Name: " + name + "; age: " + age;

    cout << ss.str() << endl;

    return 0;
}