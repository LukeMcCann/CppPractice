#include <iostream>
# include <iomanip>

using namespace std;

int main()
{
    // floats allow us to use decimal values.
    float cash = 0.02;
    cout << "Fixed float: " << fixed << cash << endl;

    // cout can output numbers in standard or scientific notation
    // we can prevent scientific notation using the iomanip library.
    // This is what the fixed operator does in this output stream.
    cout << "Scientific float: " << scientific << cash << endl;

    // Note that floats have about 7 digits floating-point precision.

    // cout also has a default significant digit output, in GCC this is 8:
    // we can modify this using setprecision:

    cout << setprecision(20) << fixed << cash << endl;

    // Notice how after the first 7 digits
    // our float is no longer valid
    // Double tends to be a more precise type
    // for having a greater number of significant
    // digits as it contains at least 15 significant digits

    double percentage = 0.234573232123453;
    cout << setprecision(20) << fixed << percentage << endl;

    // If we really want a highly precise number
    // conducting complex transactions then we can
    // use long double.

    long double ultraPrecise = 123.4567891231231231231123123;
    cout << setprecision(30) << fixed << percentage << endl;

    return 0;
}