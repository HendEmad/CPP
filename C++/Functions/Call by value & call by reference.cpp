#include<bits/stdc++.h>
using namespace std;

//call by value
void Swap(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}

void fun(int x, int y)
{
    x += 1;
    y += 2;
}

//call by reference
void Swap2(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

void fun2(int &x, int &y)
{
    x += 1;
    y += 2;
}

//CALL BY VALUE + CALL BY REFERENCE
void swap3(int &x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
}


int main()
{
    int x = 10, y = 20;
    cout << "CALL BY VALUE" << endl;
    cout << "Swapping result:" << endl;
    Swap(x, y);
    cout << "x = " << x << " " << "Y = " << y << endl;
    cout << "Changing result: " << endl;
    fun(x, y);
    cout << "X = " << x << " " << "Y = " << y << endl;
    cout << "--------------------------------------" << endl;
    cout << "CALL BY REFERENCE" << endl;
    cout << "Swapping result:" << endl;
    Swap2(x, y);
    cout << "X = " << x << " " << "Y = " << y << endl;
    cout << "Changing result: " << endl;
    fun2(x, y);
    cout << "X = " << x << " " << "Y = " << y << endl;
    cout << "---------------------------------------" << endl;
    cout << "CALL BY VALUE + CALL BY REFERENCE" << endl;
    cout << "Swapping result: " << endl;
    swap3(x, y);
    cout << "X = " << x << " " << "Y = " << y << endl;
    cout << "-----------------------------------------------" << endl;

    //MORE IDEAS FOR SWAPPING WITHOUT USING THIRD VARIABLE
    int a = 10, b = 5;
    b = a + b;
    a = b - a;
    b = b - a;
    cout << "OTHER IDEA" << endl;
    cout << "After swapping: " << endl;
    cout << "A = " << a << " " << "B = " << b << endl;

    //SECOND IDEA
    int h = 15, e = 25;
    e = h ^ e;
    h = e ^ h;
    e = e ^ h;
    cout << "OTHER IDEA" << endl;
    cout << "After swapping: " << endl;
    cout << "H = " << h << " " << "E = " << e << endl;
}
