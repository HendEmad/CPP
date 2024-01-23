#include<bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Averages
    double n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    // a)
    cout << (n1 + n2 + n3 + n4 + n5) / 5 << "\n";
    // b)
    cout << (n1 + n2 + n3) / (n4 + n5) << "\n";
    // c)
    cout << ((n1 + n2 + n3) / 3) / ((n4 + n5) / 2) << "\n";
    // yes, c is 2 / 3 of b.

    // 2. Fractional part
    double a, b, r;
    cin >> a >> b;
    r = a / b;
    cout << r - int(r);

    // 3. Our remainder
    int d, dby, r;
    cin >> d >> dby;
    /*
    while(d > dby){
        d -= dby;
    }
    */
    r = d - (d / dby) * dby;
    cout << r << "\n";
}
