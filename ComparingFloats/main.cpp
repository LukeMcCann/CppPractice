#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Floats and Doubles in C++ have some
    // strange behaviour when we perform
    // comparative operations.

    float fValue1 = 1.1;
    float fValue2 = 1.1;

    if (fValue1 == fValue2) {
        cout << fValue1 << " is equal to " << fValue2 << endl;
    } else {
        cout << fValue1 << " is not equal to " << fValue2 << endl;
    }

    // Run this program enough times and you will see that
    // in some cases this returns "is equal to" in other cases
    // it returns "is not equal to", so what is going on?

    // If we look at this using iomanip
    // we can see that since there is only a set amount of memory
    // our floating point numbers cannot be stored accurately,
    // this means after a certain point the digits become somewhat
    // random meaning that the two numbers, although should equate,
    // do not necessarily do so. For this reason we should
    // not use "==" to compare floating point values.

    // we can instead use "<" or ">" to find if a number is less
    // or greater than a certain point.

    cout << setprecision(10) << fValue1 << endl;

    return 0;
}