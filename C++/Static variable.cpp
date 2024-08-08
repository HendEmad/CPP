#include<bits/stdc++.h>
using namespace std;

//function with normal variable
void fun()
{
    int x = 0;
    x++;
    cout << x << endl;
}

//function with static variable
void func()
{
    static int x = 0;
    x++;
    cout << x << endl;
}

int main()
{
    fun();  //1
    fun();  //1
    cout << "-------------------------------------------" << endl;
    func(); //1
    func();  //2 --> static variable makes x changes each call with the new result

    return 0;
}
