#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
    //make p ready to get new variables
    //any random variable to be related to the pointer p--> int variables only
    p = new int;
    *p = 10;
    cout<< *p << endl;  //location of new --> p

    //delete p --> reset it
    delete p;

    p = new int;
    *p = 20;
    cout << *p << endl;  //location of new --> p

    //EXAMPLE
    int *p1, *p2;
    p1 = new int;
    *p1 = 10;
    cout << &p1 << endl; //location of pointer p1
    cout << "Memory location of new int: " << p1 << " contains " << *p1 << endl;

    p2 = new int;
    *p2 = 10;
    cout << &p2 << endl; //location of pointer p2
    cout << "Memory location of new int: " << p2 << " contains " << *p2 << endl;

    delete p1;
    delete p2;
}
