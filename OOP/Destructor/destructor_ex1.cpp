#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    int W, H;
public:
    // default constructor to avoid errors if we created an object that calls an empty constructor
    Rectangle(): W(0), H(0)
    {
        cout << "W = " << W << "H = " << H << endl;
    }

    // parameterized constructor
    Rectangle(int a, int b): W(a), H(b)
    {
        cout << "A rectangle has been created\n" << endl;
        // Create an object inside the parameterized constructor
        Rectangle ob;  // It will call the empty constructor
//        Rectangle ob2(10, 20);  // It will call the parameterized constructor
    }

    // destructor
    ~Rectangle()
    {
        cout << W << " " << H << " A rectangle has been deleted\n" << endl;
    }

};

int main()
{
    Rectangle R1(3, 4), R2(5, 6);
    Rectangle R3;
    /*
    A rectangle has been created

    W = 0H = 0
    0 0 A rectangle has been deleted

    A rectangle has been created

    W = 0H = 0
    0 0 A rectangle has been deleted

    W = 0H = 0
    0 0 A rectangle has been deleted

    5 6 A rectangle has been deleted

    3 4 A rectangle has been deleted
    */
}
