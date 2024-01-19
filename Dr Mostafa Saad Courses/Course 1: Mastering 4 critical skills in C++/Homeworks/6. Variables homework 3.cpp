#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Swapping 3 numbers
    int num1, num2, num3, temp;
    cin >> num1 >> num2 >> num3;
    temp = num1;
    num1 = num2;
    num2 = num3;
    num3 = temp;
    cout << num1 << " " << num2 << " " << num3 << endl;

    // Print me
    int a, b;
    cin >> a >> b;
    if (b == -1)
        cout << 2 * a + 1 << endl;
    else if (b == 1)
        cout << a * a << endl;

    //  Sum numbers from 1 to N
    int n, num, sum;
    cout << "Enter the number of numbers to be summed: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        sum += num;
    }
    cout << sum << endl;  // 55
}
