#include<bits/stdc++.h>
using namespace std;
//over loading means that we have more than one function with the same name
//if we need to create two functions with the same name, pass different data type to the second function
//not the returned type of the function itself
// we can also increase no of arguments of one function

void print(int a)
{
    cout << "Integer = " << a << endl;
}

void print(float a)
{
    cout << "Float = " << a << endl;
}

void print(char a)
{
    cout << "character = " << a << endl;
}

int main()
{
    print('a');
    return 0;
}
