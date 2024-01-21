#include<bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Guess program output
    /*
    int a = 0, b = 1;
    cout << a++ << "\n";  // 0
    cout << ++a << "\n";  // 2

    a += 2 * b + 1;  // a = 2 + 3 = 5
    b = ++a * 2;  // b = 6 * 2 = 12
    cout << a << " " << b << "\n";  // 6 12

    b = a;  // b = 6
    a = 12 + a / 3 / 2 - 2 + 2; // a=12+6/3/2-2+2 = 13
    cout << a << "\n";  // 13

    a = b;  // a = 6
    a = ((12 + a) / 3 / 2 - 2) * 2;  // a = (18/ 3 / 2 - 2) * 2 = 2
    cout << a << "\n";  // 2
    */

    // 2. Guess program output
    /*
    int a = 1, b = 1, c;
    cout << (c = a + b, a = b, b = c,
                     c = a + b, a = b, b = c,
                     c = a + b, a = b, b = c,
                     c = a + b, a = b, b = 2) << endl; // 2\
    */

    // 3. Guess program output
    int a = 210;
    a /= 2;  // a = 210/2 = 105
    cout << a << "\n";  // 105

    cout << (a /= 3) << "\n";  // 35
    cout << (a /= 5) << "\n";  // 7
    cout << (a /= 7) << "\n";  // 1

    cout << (2 + 3) * (5 - (-3)) / 5 / 8 << "\n";  // 40/5/8 = 1

    a = 10;
    cout  << a++ + 10 << "\n";  // 20
    cout << ++a + 10 << "\n";  // 22
    cout << a-- + 10 << "\n";  // 22
    cout << --a  + 10 << "\n";  // 20

    int b = 20;
    cout << a++ + ++b << "\n";  // 31

    cout << a << "\n";  // 11
    ++a += 10;
    cout << a << "\n";  // 22
    return 0;
}
