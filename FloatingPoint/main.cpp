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

    return 0;
}