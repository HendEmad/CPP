#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Guess program output
    int num1, num2, num3;

    num1 = 0, num2 = 1, num3 = num1 + num2; // num3 = 0 +1 = 1
    cout << num3 << endl;
    num1 = num2; // num1 = 1
    num2 = num3; // num2 = 1
    num3 = num1 + num2; // num3 = 2
    cout << num3 << endl;
    num1 = num2; // num1 = 1
    num2 = num3; // num2 = 2
    num3 = num1 + num2; // num3 = 3
    cout << num3 << endl;
    num1 = num2; // num1 = 2
    num2 = num3; // num2 = 3
    num3 = num1 + num2; // num3 = 5
    cout << num3 << endl;
    num1 = num2; // num1 = 3
    num2 = num3;  // num2 = 5
    num3 = num1 + num2;  // num3 = 8
    cout << num3 << endl;
    num1 = num2;  // num1 = 5
    num2 = num3;  // num2 = 8
    num3 = num1 + num2;  // num3 = 13
    cout << num3 << endl;
    num1 = num2;  // num1 = 8
    num2 = num3;  // num2 = 13
    num3 = num1 + num2;  // num3 = 21
    cout << num3 << endl;
    num1 = num2;  // num1 = 13
    num2 = num3;  // num2 = 21
    num3 = num1 + num2;  // num3 = 34
    cout << num3 << endl;
    num1 = num2;  // num1 = 21
    num2 = num3;  // num2 = 34
    num3 = num1 + num2;  // num3 = 55
    cout << num3 << endl;
    num1 = num2;  // num1 = 34
    num2 = num3;  // num2 = 55
    num3 = num1 + num2;  // num3 = 89
    cout << num3 << endl;


    // Swapping 2 numbers
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << " " << num2 << endl;
    return 0;
 }
