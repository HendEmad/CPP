#include<bits/stdc++.h>
using namespace std;

enum days {sat=1, sum, mon, tue, wed, thur, fri};

int main()
{
    string d[7] = {"Sat", "Sun", "Mon", "Tue", "Wed", "Thur", "Fri"};
    days m[7] = {sat, sum, mon, tue, wed, thur, fri};
    for(int i = 0; i < 7; i++){
        cout << m[i] << " - " << d[i] << endl;
    }
    cout << endl;


    // Direst access
    days d3 = sat;
    cout << d3 << endl;  // 1

    // Conversion; we can't convert in the default way as the enum values are constants.
    days d4 = static_cast<days>(3);
    cout << d4 << endl;  // 3

    int x = sat;
    cout << x << endl;  // 1

    days m2 = sat;
    cout << m2 << endl;  // 1
    cout << mon << endl;  // 3

    int n;
    cout << "enter the day number: " << endl;
    cin >> n;
    switch(n)
    {
        case 1: cout << "SAT" << endl;
        break;
        case 2: cout << "SUN" << endl;
        break;
        case 3: cout << "MON" << endl;
        break;
        case 4: cout << "TUE" << endl;
        break;
        case 5: cout << "WED" << endl;
        break;
        case 6: cout << "THUR" << endl;
        break;
        case 7: cout << "FRI" << endl;
        break;
        default: cout << "Not found" << endl;
    }
}
