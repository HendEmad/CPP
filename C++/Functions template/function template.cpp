#include<bits/stdc++.h>
using namespace std;

template<class t>
t sum(t x, t y)
{
    return x + y;
}

int main()
{
    int x = 0, y = 0;
    cin >> x >> y;  // 10  20
    cout << sum(x, y) << endl;  // 30
}
