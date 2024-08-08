#include<bits/stdc++.h>
using namespace std;

int main()
{
    //********************bool********************
    bool x = true;
    bool x1 = false;
    bool x2 = 1;
    bool x3 = 0;
    bool x4 = -3;

    cout << x << endl;  // 1
    cout << x1 << endl;  // 0
    cout << x2 << endl;  // 1
    cout << x3 << endl;  // 0
    cout << x4 << endl;  // 1

    // To print the boolean value in alphabet (true/false); use boolalpha
    cout << boolalpha << x << endl;  // true


    //********************wchar********************
    // char has 1 byte in memory which is from 0 to 255 in ASCII table, but there are some characters have value > 255, so we can't store it in char data type
    // This is the usage of wide character data type, and it has 2 or 4 bytes depending on the compiler

    wchar_t z = 'ء';
    cout << "The size of z is = " << sizeof(z) << ", and the value is = " << z << endl;  // The size of z is = 2, and the value is = 55457
    // The value printed is the decimal form of the value(d8a1) corresponding to "ء" in ASCII table.
}
