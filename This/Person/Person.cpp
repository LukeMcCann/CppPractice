#include <iostream>
#include <sstream>

#include "Person.hpp"

using namespace std;

Person::Person()
{
    name = "undefined";
    age = 0;
}

Person::Person(string name, int age)
{
    this->name = name;
    this->age = age;

    // This refers to the location in memory
    cout << "Location in memory: " << this << endl;
}

string Person::toString()
{
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;

    return ss.str();
}