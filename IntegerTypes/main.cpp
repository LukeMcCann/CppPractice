#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    // We have limits into the integer
    // size we can store in a variable.

    // The below will simply output 77 as we would expect.
    // int value = 777;
    // cout << value << endl;

    // This is to do with memory allocation
    // in binary form we store data in bits.

    // a number like 777 is a decimal number
    // this means that we represent the number
    // in 10s:
    //
    // | 7x100  | 7x10  | 7x1  |
    // |--------|-------|------|
    // |   7    |   7   |  7   |
    // -------------------------
    //
    // In each numeric column we
    // take 10 to the next power
    // to represent the next column.
    //
    // Binary works in the same manner
    // but is much more simplistic using
    // base 1 rather than base 10.
    //
    // | 1x4    | 0x2   | 1x1  |
    // |--------|-------|------|
    // |   1    |   0   |  1   |
    // -------------------------
    //
    // in decimal this would represent 5
    // as we have 1^4 and 1^1 adding
    // these together produces 5.
    //
    // When we store data in computer memory
    // we store binary data in a series of cells
    // known as bits. Every bit has two possible
    // states on/off (or 1/0).
    //
    // Bits themselves are organised into bytes
    // when we have 8 bits together we call this a byte.
    // This acts as a hard limit to the largest
    // number that we can represent in a single byte in memory.
    //
    // In the example below we will try and put a too larger number
    // into memory, and you will see we receive a nonsensical response.

    // int value = 667888788797979779797;
    // cout << value << endl; // 159015637

    // note how your editors error handler is likely showing
    // an error along the lines of: "integer constant is too large for its type".

    // This is because an integer has a maximum value of:
    // 2147483647
    // 1111111111111111111111111111111
    //
    // As we know already 1 byte is 8 bits.
    // What you may not know is in 32bit Windows and UNIX applications
    // an integer is 4 bytes, meaning, we have a maximum storage value of
    //
    //   byte4   byte3     byte2   byte1
    // 11111111 11111111 11111111 11111111
    //
    // 8*4=32
    //
    // This means that in total we have 32bits in 4 bytes.
    // Thus the maximum values we can store in our integer
    // is the value which occurs when all 32bits are "on"
    // (when they all have a value of 1).
    //
    // 1111111111111111111111111111111
    //
    // in binary would equate to:
    //
    // | 1x1073741824 | 1x536870912 | 1x268435456 | 1x134217728 | 1x67108864 | 1x33554432 | 1x16777216 | 1x8388608 | 1x4194304 | 1x2097152 | 1x1048576 | 1x524288 | 1x262144 | 1x131072 | 1x65536 | 1x32768 | 1x16384 | 1x8192 | 1x4096  | 1x2048 | 1x1024 | 1x512 | 1x256 | 1x128 | 1x64 | 1x32 | 1x16 | 1x8 | 1x4 | 1x2 | 1x1 |
    // |--------------|-------------|-------------|-------------|------------|------------|------------|-----------|-----------|-----------|-----------|----------|----------|----------|---------|---------|---------|--------|---------|--------|--------|-------|-------|-------|------|------|------|-----|-----|-----|-----|
    // | 1073741824   |  536870912  |  268435456  |  134217728  |  67108864  |  33554432  |  16777216  |  8388608  | 4194304   |  2097152  |  1048576  |  524288  |  262144  |  131072  |  65536  |  32768  |  16384  |  8192  |  4096   |  2048  |  1024  |  512  |  256  |  128  |  64  |  32  |  16  |  8  |  4  |  2  |  1  |
    //
    // The sum of the decimal number representation values is: 2147483647
    // which is our maximum value of our integer in decimal.
    //
    // In short, the reason the maximum integer value is: 2147483647 is because we are running a 32bit application
    // and this is the largest possible representation given we have 4 bytes in which to represent an integer value.
    //
    // While it is important to understand how our memory storage works, there is no need to remember this number.
    // We can simply include the "limit" library to have access to ENUM values which represent our maximum and minimum
    // values of differing types. [Limits](https://learn.microsoft.com/en-us/cpp/c-language/cpp-integer-limits?view=msvc-170)

    cout << "Max integer: " << INT_MAX << endl;
    cout << "Min Integer: " << INT_MIN << endl;

    // Larger integers can be represented by other data types.
    long int lValue = 2345325345345;
    cout << lValue << endl;

    short int sValue = 23434;
    cout << sValue << endl;

    // We can also use the sizeof operator to see how much memory
    // our ints use:

    cout << "sizeof int: " << sizeof(int) << " bytes" << endl;

    // The size here will equate to approximately our 4 bytes
    // or 4*8 bits, which is 32bits, the number of bytes will
    // as such roughly be 2^32 bits, I say roughly as one bit
    // must be used to represent the sign of the value.

    cout << "sizeof short: " << sizeof(short) << " bytes" << endl;

    return 0;
}