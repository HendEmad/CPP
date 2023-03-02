#include<bits/stdc++.h>
using namespace std;

enum week_days {sat, sun, mon, tue, wed, thu, fri}; // 0 1 2 3 4 5 6
// each element is represented by its index

enum week {SAT = 5, SUM, MON, TUE, WED = 15, THU, FRI};  // 5 6 7 8 15 16 17

enum month {jan = 1, feb, march, april, may};  // 1 2 3 4 5

enum Data
{
    SUCCESS,
    FAIL,
    DEFAULT
};
void fun(Data d)
{

}

int main()
{
    week_days day1 = fri;  // the assignment value must be from the enum
    cout << day1 << endl;  // 6
    cout << fri << endl;  // 6
    int i = mon;
    cout << i << endl;

    week day2 = WED;
    cout << day2 << endl;  // 15
    cout << FRI << endl;  // 17

    month m = may;
    int n;
    cout << "Enter the month:" << endl;
    cin >> n;
    switch(n)
    {
        case 1: cout << "jan" << endl;
        break;
        case 2: cout << "feb" << endl;
        break;
        case 3: cout << "march" << endl;
        break;
        case 4: cout << "april" << endl;
        break;
        case 5: cout << "may" << endl;
        break;
        default: cout << "not found" << endl;
    }

    for(int i = 0; i <= m; i++){
        cout << i << endl;  // 0 1 2 3 4 5
    }

    month m2;
    m2 = month(3);  // = month m2 = march
    cout << m2 << endl;  // 3

    // 1. Direct
    Data d = SUCCESS;
    cout << d << endl;  // 0

    // 2. Conversions
    // *Error invalid conversion from `int` to `Data`
    // Data d2 = 2;
    Data d2 = static_cast<Data>(2);
    // fun(5);
    // *Otherwise, it works
    int x = SUCCESS;

    return 0;
}
