#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ALIASING
    int x;
    int &y = x;  //alias --> which means any change in x will affect y
                 // this makes y and x having the same address
    x = 5;  //the change in y will change the value of x
    int &z = y;

    cout << "X = " << x << " " << ", Y = " << y << " " << ", Z = " << z << endl;
    //X = 5, Y = 5, Z = 5
    y = 7;
    cout << "X = " << x << " " << ", Y = " << y << " " << ", Z = " << z << endl;
    //X = 7, Y = 7, Z = 7
    y = x + z - 3; //11
    cout << "X = " << x << " " << ", Y = " << y << " " << ", Z = " << z << endl;
    //X = 11, Y = 11, Z = 11
    cout << "---------------------" << endl;

    //CONSTANT VARIABLE
    cout << "CONSTANT VARIABLE" << endl;
    double pi = 3.14;
    pi = 20;
    cout << "PI = " << pi << endl;

    const double PI = 3.14;
    //PI = 20; //error
    cout << "PI = " << PI << endl;
    cout << "PI + 2 = " << PI + 2 << endl;

    return 0;
}
