#include<bits/stdc++.h>
using namespace std;

/*
 passing an argument by reference with a pointer or reference argument can modify the original value in memory,
 while passing an argument by value creates a copy and operates on the copy, leaving the original value unchanged.
*/

// pass by value
int square1(int n)
{
    cout << "Address of n in square1: " << &n << "\n";  // 0x61fe0c
    n *= n;
    return n;  // copy of the original n, the function operates on this copy
}

// pass  by pointer
void square2(int* n)
{
    cout << "Address of n in square2: " << n << "\n";
    *n *= *n;
}

// pass by reference
void square3(int &n)
{
    cout << "Address of n in square3: " << &n << "\n";
    n *= n;
}

int main()
{
    // call by value
    int n1 = 5;
    cout << "Address of n1 in main: " << &n1 << "\n";
    cout << "Square of n1: " << square1(n1) << "\n";
    cout << "no change in n1: " << n1 << "\n";
    cout << "-----------------------------------------------------" << "\n";

    // call by reference with a pointer argument
    int n2 = 3;
    cout << "Address of n2 in main: " << &n2 << "\n";
    cout << "n2 before squaring: " << n2 << "\n";
    square2(&n2);
    cout << "Square of n2: " << n2 << "\n";
    cout << "n2 after applying square2: " << n2 << "\n";
    cout << "Change reflected in n2: " << n2 << "\n";
    cout << "-----------------------------------------------------" << "\n";

    int n3 = 4;
    cout << "Address of n3 in main: " << &n3 << "\n";
    cout << "n3 before squaring: " << n3 << "\n";
    square2(&n3);
    cout << "Square of n2: " <<  n3 << "\n";
    cout << "Change reflected in n2: " << n3 << "\n";
}

/*
Output:

Address of n1 in main: 0x61fe0c
Square of n1: Address of n in square1: 0x61fde0
25
no change in n1: 5
-----------------------------------------------------
Address of n2 in main: 0x61fe08
n2 before squaring: 3
Address of n in square2: 0x61fe08
Square of n2: 9
n2 after applying square2: 9
Change reflected in n2: 9
-----------------------------------------------------
Address of n3 in main: 0x61fe04
n3 before squaring: 4
Address of n in square2: 0x61fe04
Square of n2: 16
Change reflected in n2: 16
*/
