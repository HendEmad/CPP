#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x = 0;
    x++;  // Postfix
    cout << "x++ = " << x << endl;  // 1



    int x = 0;
    ++x;  // Prefix
    cout << "++x = " << x << endl;  // 1



    int x = 0;
    cout << x++ << endl;  // 0    // Means to print x, the add 1 to it, so the output will be the first order to be printed.



    int x = 0;
    cout << ++x << endl;  // 1    // Means to add 1 to x, then print it, so the output will be x added to 1 which is the first order.



    int x = 0;
    cout << x++ << endl;  // 0
    cout << x << endl;  // 1



    int x = 0, y = 0;
    y = x++;
    cout << y << endl;  // 0



    int x = 0, y = 0;
    y = ++x;
    cout << y << endl;  // 1
    cout << x << endl;  // 1



    int x = 0, y = 0;
    y = ++x + x++;
    cout << y << endl;  // 3
    cout << x << endl;  // 2



    int x = 0, y = 0;
    cout << ++++++++y << endl;  // 4



    int x = 0, y = 0;
    cout << y++++++++ << endl;  // ERROR



    int x = 0;
    cout << ++x << " " << x++ << endl;  // Depends on the compiler, how will it understand it, so it is not fine to use it, but theoretically it will print "1 1".

}
