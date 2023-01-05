#include <iostream>
#include <sstream>

#include "Person.hpp"

Person::Person()
{
    this->name_ = "undefined";
    this->age_ = 0;
}

Person::Person(string name, int age)
{
    this->name_ = name;
    this->age_ = age;
}

string Person::getName()
{
    return this->name_;
}

int Person::getAge()
{
    return this->age_;
}

string Person::toString()
{
    stringstream ss;

    ss << "{ Name: ";
    ss << this->name_;
    ss << ", age: ";
    ss << this->age_;
    ss << " }";

    return ss.str();
}