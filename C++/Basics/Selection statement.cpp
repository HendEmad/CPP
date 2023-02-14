#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x = 0;
    cin >> x;

    // Relational operators are: >, <, >=, <=, ==, !=
    if (x > 0)
        cout << "This number is positive" << endl;
    else
        cout << "This number is negative" << endl;




    int mark = 0;
    cin >> mark;
    if (mark >= 90)
        cout << "A" << endl;
    else if (mark >= 80)
        cout << "B" << endl;
    else if (mark >= 70)
        cout << "C" << endl;
    else if (mark >= 60)
        cout << "D" << endl;
    else
        cout << "F" << endl;




    int x = 0, y = 0;
    cout << "Enter 2 numbers: " << endl;
    cin >> x >> y;
    if(x < y)
        cout << "Y is greater then x" << endl;
    else if (x > y)
        cout << "X is greater than y" << endl;
    else
        cout << "X is equal y" << endl;
    cout << ",,,,,,,,,,,,,," << endl;




    int x = 0;
    cin >> x;
    if (x % 2 == 0){
        cout << "The number is even" << endl;
        cout << "The x = " << x << endl;
    }
    else{
        cout << "The number is odd" << endl;
        cout << "The x = " << x << endl;
    }




    int x = 0;
    cin >> x;
    if (x % 2 == 0){
        if (x > 50)
            cout << "It is ok!" << endl;
        else
            cout << "It is not ok!" << endl;
    }

    else{
        cout << "The number is odd" << endl;15
    }




    int x = 0, y = 0;
    cin >> x >> y;
    if (x == y)
        cout << "Ok!" << endl;
    else
        cout << "Not ok!" << endl;




    int x = 0;
    if (-100)  // any number rather than 0 will give true
        cout << "true" << endl;
    else
        cout << "false" << endl;



    int x = 0;
    cin >> x;
    if (x)
        cout << "Ok" << endl;
    else
        cout << "Not ok" << endl;
}
