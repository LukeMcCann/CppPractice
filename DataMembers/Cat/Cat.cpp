#include <iostream>

#include "Cat.hpp"

using namespace std;

// Speak is a member of the Cat class.
void Cat::speak() {
    if (happy) {
        cout << "Meow!" << endl;
    } else {
        cout << "Hiss!" << endl;
    }
}

bool Cat::isHappy() {
    return this->happy;
}

void Cat::setMood(bool mood) {
    this->happy = mood;
}
