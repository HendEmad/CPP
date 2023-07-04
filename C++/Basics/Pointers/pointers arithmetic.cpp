#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr + 2;  // 30
    int val;

    cout << ptr - arr << "\n";  // 2 - 0 = 2

    val = *ptr++; // print ptr content then move the pointer one step
    cout << val << " " << ptr - arr << "\n";  // 30 3

    ptr = arr + 2;  // ptr = 2
    val = *++ptr;  // val = 3; move the pointer one step and then print its content
    cout << val << " " << ptr - arr << "\n";  // 40 3

    ptr = arr + 2;  // 2
    val = *ptr --;  // print ptr content, then move it a step back; 1
    cout << val << " " << ptr - arr << "\n";  // 30 1

    ptr = arr + 2;  // 2
    val = *--ptr;
    cout << val << " " << ptr - arr << "\n";  // 20 1

    ptr = arr + 2;  // 2
    val = (*ptr)++;  //
    cout << val << " " << ptr - arr << "\n";  // 30 3
}
