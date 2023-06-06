#include<bits/stdc++.h>
using namespace std;

int main()
{
    int var1 = 11;
    int var2 = 22;
    cout << &var1 << endl;  // address in memory
    cout << &var2 << endl;  // address in memory

    int *ptr;
    ptr = &var2;
    *ptr = 5000;
    cout << ptr << endl;  // the same address as var2
    cout << *ptr << endl;  // 5000
    cout << var2 << endl;  // 5000

    int *ptr1;
    ptr1 = &var1;
    var1 = 50;
    cout << *ptr1 << endl;  // 50
    cout << var1 << endl;  // 50
    cout << ptr1 << endl;  // address
    cout << &var1 << endl;  // same address as ptr1
}
