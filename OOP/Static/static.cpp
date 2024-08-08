#include<bits/stdc++.h>
using namespace std;

int f()
{
    static int x = 0;
    x++;
    cout << x << endl;
}

int main()
{
    f();  // 1
    f();  // 2
    f();  // 3
}
