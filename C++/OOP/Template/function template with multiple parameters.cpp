#include<bits/stdc++.h>
using namespace std;

template <class first, class second>
first smaller(first a, second b)
{
    return (a < b ? a : b);
}

int main()
{
    int x = 89;
    double y = 56.78;
    cout << smaller(x, y) << endl;  // 56; first = int, second = double
    cout << smaller(y, x) << endl;  // 56.78; first = double, second = int
    cout << smaller <double> (x, y) << endl;  // 56.78; first = double, second = int
    cout << smaller <double, int> (y, x) << endl;  // 56.78; first = double, second = int
    cout << smaller <int, double> (x, y) << endl;  // 56; first = int, second = double
}
