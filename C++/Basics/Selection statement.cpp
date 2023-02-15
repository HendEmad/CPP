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
        cout << "not ok" << endl;




    // Shortest if
    cout << (5 < 10) ? true : false; // 1
    if (5 < 10)
        cout << true << endl;
    else
        cout << false << endl;




    int x = (5 < 7) ? 11 : 10;
    cout << x << endl;  // 11



    ///////////////**** Logical Operators(AND, OR, NOT)****///////////
    // && for and ,,,,,, || for or



    int x = 0;
    cout << "Enter num: " << endl;
    cin >> x;
    if(1 <= x <= 100)
        cout << "Ok!" << endl;
    else
        cout << "Out of range!" << endl;




    int x = 1 && 1;  // 1 represents true --> so 1 && 1 means true && true which results 1 (true)
    cout << x << endl;  //1




    int x = 0 && 1;
    cout << x << endl;  // 0




    int x = 1 || 1;
    cout << x << endl;  //1




    int x = 1 || 0;
    cout << x << endl;  //1




    int x = 0 || 0;
    cout << x << endl;  //0




    // program to check age and gender
    // If there are many logical operators in the condition, the priority is to '<' and '>' and then '==' then finally '&&' and '||'
    int age = 0;
    cout << "Enter your age: " << endl;
    cin >> age;
    char gender = '\0';  // '\0' --> initial value for char
    cout << "Enter your gender: " << endl;
    cin >> gender;

    if (age < 18 && gender == 'm')
        cout << "Male, boy" << endl;
    else if (age >= 18 && gender == 'm')
        cout << "Male, young man" << endl;
    else if (age < 18 && gender == 'f')
        cout << "Female, girl" << endl;
    else
        cout << "Female, young girl" << endl;




    if (true)
        cout << "g" << endl;
    else
        cout << "b" << endl;

}
