#include<bits/stdc++.h>
using namespace std;

void printN(int n)
{
    /*
    for(int i = n; i >= 1; i--){
        cout << "round: " << i << endl;
    }
    */

    if(n < 1)  //base case; the smallest value of the operation
        return;
    else
        cout << "round: " << n << endl;  //logic
    printN(n - 1);  //sub problem
}

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);

    /*
    5 * factorial(4)            // 5 * 24 = 120
            |
     4 * factorial(3)          // 4 * 6 = 24
            |
      3 * factorial(2)        // 3 * 2 = 6
            |
       2 * factorial(1)      // 2 * 1 = 2
                 |
                 1          //1
    */
}

//fibonacci series
// 0 1 2 3 4 5 6 7 8 9..........
// 0 1 1 2 3 5 8 13 21 34........
int fib(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}
/*
fib(2) + fib(1)  // 1 + 1 = 2
  |
 fib(1) + fib(0) // 1
   |
   1
*/


int main()
{
    cout << "PRINT ROUNDS...." << endl;
    printN(5);
    cout << "-----------------------------------------------" << endl;
    cout << "FACTORIAL...." << endl;
    cout << "5! = " << factorial(5) << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "FIBONACCI SERIES....." << endl;
    cout << "Fib. 3 = " << fib(3) << endl;
}
