#include<bits/stdc++.h>
using namespace std;

//It means passing initial value to the argument, so
//if we pass few arguments while calling, it will take this initial value as default value
//in this way, we avoid error occurring from passing few arguments while calling
//it is not allowable to pass initial value for the middle argument only, it will lead to an error

int sum(int a, int b = 15)
{
    return a + b;
}

int main()
{
    cout << sum(10, 35) << endl;

    return 0;
}
