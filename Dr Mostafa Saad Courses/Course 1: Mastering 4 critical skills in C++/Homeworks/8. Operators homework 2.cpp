#include<bits/stdc++.h>
using namespace std;

int main()
{
    // guess the output
    int a = 10, b = 20, c = 30, d = 40;

    cout << (a + b == c) << "\n";  // 1
    cout << (a + b + c >= 2 * d) << "\n";  // 0

    cout << (a > 5 || d < 30) << "\n";  // 1
    cout << (a > 5 && d < 30) << "\n";  // 0
    cout << (a <= b && b <= c) << "\n";  // 1

    cout << (a > 5 && d < 30 || c - b == 10) << "\n";  // 1
    cout << (a <= b && b <= c && c <= d) << "\n";  // 1

    cout << (a > 5 && d < 30 || c > d || d %2 == 0) << "\n";  // 1
    cout << (a > 5 && d < 30 || c > d && d %2 == 0) << "\n";  // 0

    cout << (a == 10 || b != 20 && c != 30 || d != 40) << "\n";  // 1
    cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n";  // 0

    // 2. Create logic
    int nb, ng, nt;
    cin >> nb >> ng >> nt;
    cout << (ng > 25);
    cout << (ng <= 30);
    cout << (nb > 20 && nt > 2 || ng > 30 && nt > 4);
    cout << (nb < 60 || ng < 70);
    cout << (!(nb >= 60) && !(ng >= 70))
    cout << (nb == ng + 10);
    cout << (nb - ng > 10 || nt > 5);
    cout << (nb = = ng + 10 || ng == nb + 15);

    // 3. Simplify expressions
    /*
    t && t && f && t = f
    t && t && f && t || t && t = t
    t && t && t && t || t && (t || f) = t
    t && t && t ||t && (f || (t && (t && t))) = t
    t && t || t && f && t || t && t && f || (t && (t ||f)) = t
    (t && t || t && f && t || t) && t && f || (t && (t || f)) = t
    t && t || t && (f && t || t && t) && f || (t && (t || f)) = t
    */
}
