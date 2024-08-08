#include<bits/stdc++.h>
using namespace std;

//find sum of numbers from 1 to n
int finiteSeries(int n)
{
    if(n == 1)
        return 1;
    else
        return n + finiteSeries(n - 1);
}

//find sum of numbers between two numbers
int sum(int x, int y)
{
    if()
}

int main()
{
    cout << "SUMMATION OF FINITE SERIES (1.....n)" << endl;
    cout << "Sum of the series 0...5 = " << finiteSeries(5);
    cout << "-----------------------------------------------" << endl;

    return 0;
}
