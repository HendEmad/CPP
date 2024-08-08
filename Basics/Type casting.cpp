#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5;
    double y = 5.5;
    cout << x + y << endl;  // 10.5 // double output
    // to convert this double output into int output
    cout << x + int(y) << endl;  // 10
    // or
    cout << x + static_cast<int> (y) << endl;  // 10
}
