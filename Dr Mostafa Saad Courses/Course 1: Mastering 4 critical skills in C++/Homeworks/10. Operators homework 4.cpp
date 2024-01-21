#include<bits/stdc++.h>
using namespace std;

int main()
{
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
}
