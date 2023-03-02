#include<bits/stdc++.h>
using namespace std;

const int ll = 10;

int main()
{
    // const with switch statement
    int var = 97;
    const int x = 97;
    switch(var)
    {
    case x:
        cout << x << endl;  // 97
        break;
    }

    // const with array
    const int max_foos = 12;
    int foos{max_foos};
    cout << sizeof(foos) << endl;  // 4
    cout << foos << endl;  // 12

    // const with pointer
    const int var2 = 10;
    //int *ptr = &var2;  // error in c++; as the compiler can't cast from const int into int
    const int *ptr = &var2;
    int *ptr1 = const_cast<int *>(ptr);
    cout << *ptr1 + 10 << endl;  // 20

    return 0;
}
