#include<bits/stdc++.h>
using namespace std;

int main()
{
    // even and odd numbers
    /*
    int num;
    cin >> num;

    // Is even using % 2
    bool is_even1 = (num % 2 == 0);

    // Is even using /2
    double r = double(num) / 2;
    r = r - int(r);
    bool is_even2 = (r == 0);

    // Is even using %10
    int last_digit = num % 10;
    bool is_even3 = (last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8);
    */

    // Sum of the last three numbers
    /*
    int n;
    cin >> n;
    int last1 = n % 10;
    n /= 10;
    int last2 = n % 10;
    n /= 10;
    int last3 = n % 10;
    n /= 10;

    cout << last1 + last2 + last3;
    return 0;
    */

    // 4th digit from the end
    /*
    int n;
    cin >> n;
    cout << (n / 1000) % 10 << "\n";
    */

    // 100 or 7?
    /*
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << 100 << endl;
    else
        cout << 7 << endl;
    */

    // years
    int days;
    cin >> days;
    int years = days / 360;
    days = days % 360;
    int months = days / 30;
    days = days % 30;
    cout << years << " " << months << " " << days;
}
