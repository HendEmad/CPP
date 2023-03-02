#include<bits/stdc++.h>
using namespace std;

int main()
{
    // auto is a datatype which is smart enough to specify the datatype of the variable assigned in its type.

    auto var = 10;  // int
    auto var2 = 10.5F;  // float
    auto var3 = 'a';  // char

    /*
    Quick note:
    sizeof('a'):
    - In c -> = sizeof(int) -> 4
    - In c++ -> = sizeof(char) -> 1
    This is one of the small differences between c and c++
    */

    auto var4 = "const char*";  // const chat*; const pointer to char
    auto var5 = string("hello world");  // string


    // auto with const
    const int x = 10;
    auto var6 = x;  // the type of x will be 'int' not 'const int'
    // to make the type of x is 'const int'
    const auto var7 = x;  // the type of x will be 'const int'

    // auto with reference const
    // the type of x will be 'const int' in case reference const and pointer const
    auto &var8 = x;  // const int &
    auto ptr = &x;  // const int *

    //initializer list
    auto lst = {1, 2, 3, 4, 5};  // initializer list
    //auto lst{1, 2, 3, 4, 5};  // error
    //most common used
    vector<int> obj{1, 2, 3, 4, 5};
    auto it = obj.begin();  // vector<int>::iterator; this is the data type which can be replaced with auto, as it is smart enough to specify this data type without the need to write it.

    return 0;
}
