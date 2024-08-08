#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hour;
    try
    {
        cin >> hour;
        if (int(hour) < 0 || int(hour) > 12)
            throw string("error, the hour is not right!");  // throw "error, the hour is not right!";
        cout << "The time now is " << hour << ":00" << endl;
    }
    catch(string str)  // catch(const char* str)
    {
        cout << "Exception: " << str;
    }
}
