#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
    p = new int;  // get address from the compiler to be able to add values to it
    *p = 10;
    cout << &p << endl; // address
    cout << *p << endl;  // 10
    cout << p << endl;  // different address from &p

    delete p;  // give the compiler back its address (format the pointer content)
    cout << p << endl;  // the same address
    cout << *p << endl;  // garbage

    p = new int;  // cannot be in another type; the same as first one --> MUST
    *p = 22;
    cout << p << endl;  // the same address
    cout << *p << endl;  // 22
}

// note that the address of pointer p differs from the address the compiler giving us.
