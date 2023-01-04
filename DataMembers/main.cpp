#include <iostream>

#include "Cat/Cat.hpp"

using namespace std;

int main()
{
    Cat garfield;
    Cat snowball;

    garfield.setMood(true);
    garfield.speak();

    snowball.setMood(false);
    snowball.speak();

    return 0;
}