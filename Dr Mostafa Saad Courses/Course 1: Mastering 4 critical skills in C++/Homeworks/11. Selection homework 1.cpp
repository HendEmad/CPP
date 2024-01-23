#include<bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Arithmetic
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 % 2 != 0 && num2 % 2 != 0)
        cout << num1 * num2;
    else if (num1 % 2 == 0 && num2 % 2 == 0)
        cout << num1 / num2;
    else if (num1 % 2 != 0 && num2 % 2 == 0)
        cout << num1 + num2;
    else
        cout << num1 - num2;

    // 2. Sort 3 numbers
    int a, b, c, temp;
    cin >> a >> b >> c;
    if (b < a){  // swap them
        temp = a;
        a = b;
        b = temp;
    }
    if (c < b){  // swap them
        temp = b;
        b =c;
        c = temp;

        if (b < a){
            temp = a;
            a = b;
            b = temp;
        }
    }
    cout << a << " " << b << " " << c << "\n";
    return 0;

    // maximum but considered
    int a, b, c;
    cin >> a >> b >> c;
    int res = -1;
    if (a < 100 && a > res)
        res = a;
    if (b < 100 && b > res)
        res = b;
    if (c < 100 && c > res)
        res = c;

    cout << res << "\n";

    // Conditional count
    int x, n1, n2, n3, n4, n5, countless;
    cin >> x >> n1 >> n2 >> n3 >> n4 >> n5;
    if (n1 <= x)
        countless++;

    if (n2 <= x)
        countless++;

    if (n3 <= x)
        countless++;

    if (n4 <= x)
        countless++;

    if (n5 <= x)
        countless++;

    cout << countless << " " << 5 - countless << endl;

    // Find maximum of 10
    int result, num;
    cin >> result;  // 1st number
    cin >> num;
    if (num > result)
        result = num;
    cin >> num;
    if (num > result)
        result = num;
    cin >> num;
    if (num > result)
        result = num;
    cin >> num;
    if (num > result)
        result = num;
    cin >> num;
    if (num > result)
        result = num;
    cin >> num;
    if (num > result)
        result = num;
    cin >> num;
    if (num > result)
        result = num;
    cin >> num;
    if (num > result)
        result = num;
    cin >> num;
    if (num > result)
        result = num;
    cout << result;
}
