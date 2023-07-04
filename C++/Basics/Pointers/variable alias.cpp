#include<bits/stdc++.h>
using namespace std;

int main()
{
    int val = 131363;
    cout << "Size = " << sizeof(val) << "\n";  // 4 (byte)
    cout << "Value = " << val << "\n";  // 131363
    cout << "Address = " << &val << "\n";  // 0x61fe0c

    int cpy  = val;  // copy two variables
    int &ref = val;  // both ref and val point to the same memory locations

    cout << &ref << "\n";  // 0x61fe0c
    cout << &cpy << "\n";  // 0x61fe10

    val += 10;
    cout << cpy << "\n";  // 131363
    cout << ref << "\n";  // 131373

    ref *= 10;
    cout << val << "\n";  // 1313730
}
