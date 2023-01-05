#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
    private:
        int age_;
        string name_;

    public:
        Person();
        Person(string name, int age);

        string getName();
        int getAge();
        string toString();

};

#endif // !PERSON_H_