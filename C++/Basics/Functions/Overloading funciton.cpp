//over loading means that we have more than one function with the same name
//if we need to create two functions with the same name, pass different data type to the second function
//not the returned type of the function itself
// we can also increase no of arguments of one function


#include<bits/stdc++.h>
using namespace std;

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



void fun(int x, int y)
{
    cout << "int, int" << endl;
}

void fun(int x, float y)
{
    cout << "int, float" << endl;
}

int main()
{
    // In calling, we can call them in the normal way, but float type is a bit different.
    // If we call the function with float argument without calling the int one,
    // the compiler will not know it pass it to the function with float argument, or cast it and then pass it
    // to the function with int argument, so we have to specify if we want the float arg. with 'F' keyword.
    
    print(2.5F);
    fun(2, 2.5F);
}
