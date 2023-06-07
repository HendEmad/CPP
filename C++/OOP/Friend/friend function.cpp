#include<bits/stdc++.h>
using namespace std;

class myclass
{
    int a, b;
public:
    myclass(int i, int j)
    {
        a = i;
        b = j;
    }
    friend int sum(myclass obj);
};

int sum(myclass obj)
{
    return obj.a + obj.b;
}

int main()
{
    myclass obj2(10, 20);
    cout << sum(obj2) << endl;
}
