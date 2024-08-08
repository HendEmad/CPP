#include<bits/stdc++.h>
#include<cmath>
using namespace std;

// USER DEFINED FUNCTION
//---------------------------------------------------------

//function for summation
int sum(int m1, int m2, int m3)
{
    int s = m1 + m2 + m3;
    return s;
}

//function for average(3 numbers)
double avg(int m1, int m2, int m3)
{
    return (m1 + m2 + m3) / 3;
}

//Function to find maximum number out of 3 numbers
int maxNum(int m1, int m2, int m3)
{
    //10 20 30
    int mn = m1;  // mn = 10
    if(mn < m2)  // true
        mn = m2;  // mn = 20
    if(mn < m3) // true
        mn = m3;  // mn = 30
    return mn;
}

//function to find minumun number out of 3 numbers
int minNum(int m1, int m2, int m3)
{
    int mn = m1;
    if(mn > m2)
        mn = m2;
    if(mn > m3)
        mn = m3;
    return mn;
}

//-------------------------------------------------------------

//BUILT-IN FUNCTION
//------------------------------------------------------------
/*
header: #include<cmath>
sqrt(x)  //square root
sin(x)  //trigonometric sine of x(in radians)
cos(x)  //trigonometric cosine of x(in radians)
tan(x)  //trigonometric tangent of x(in radians)
exp(x)  //exponential function
log(x)  //natural logarithm of x(base e)
log10(x)  //logarithm of x to base 10
fabs(x)  //absolute value(float)
ceil(x)  //rounds x up to nearest integer
floor(x)  //rounds x down to nearest integer
pow(x, y)  //x to the power of y
fmod(x, y)  //x modulus y(float)
*/

/*
header: #include<algorithm>
max(x, y)  //find maximum of TWO numbers
min(x, y)  //find minimum of TWO numbers
swap(x, y)  //swap two numbers
*/

/*
// RANDOM FUNCTION
header: #include<cstdlib>
*/

int main()
{
    cout << "***USER DEFINED FUNCTIONS***" << endl;
    cout << "Sum = " << sum(90, 66, 99) << endl; //255
    cout << "Average = " << avg(90, 66, 99) << endl; //85
    cout << "Maximum number is = " << maxNum(90, 66, 99) << endl; //99
    cout << "Minimum number is = " << minNum(90, 66, 99) << endl; //66
    cout << "-----------------------------------------------" << endl;
    cout << "***BUILT IN FUNCTION***" << endl;
    cout << "Ceil function of 10.9 = " << ceil(10.9) << endl; //11
    cout << "Mod function of 10.6 = " << fmod(10.6, 10) << endl; //0.6
    cout << "-----------------------------------------------" << endl;
    cout << "***RANDOM FUNCTION***" << endl;
    cout << "Random number is = " << rand() << endl; //generate numbers from 0 to 32767
    cout << "Rnadom numbers in range (0...9 randomly) = " << rand() % 10 << endl;
    cout << "Rnadom numbers in range (1...9 randomly) = " << rand() % 10 + 1 << endl;

    return 0;
}
