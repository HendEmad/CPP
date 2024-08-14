#include<bits/stdc++.h>
using namespace std;

int main()
{
    int answer = 0;
    cout << "5 + 7 = " << endl;
    try
    {
        cin >> answer;
        if (answer != 12)
            throw string("Wrong answer, try again...\n");
        cout << "Right answer, bravoo..." << endl;
    }

    catch(string str)
    {
        cout << "Exception: " << str;
    }
}
