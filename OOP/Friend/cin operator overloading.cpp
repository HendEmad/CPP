#include<iostream>
using namespace std;

class Distance
{
    int feet, inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int x, int y)
    {
        feet = x;
        inches = y;
    }

    friend istream &operator>> (istream &input, Distance &d)
    {
        input >> d.feet >> d.inches;
        return input;
    }

    friend ostream &operator<< (ostream &output, Distance &d)
    {
        output << "Feet = " << d.feet << "\t" << "Inches = " << d.inches << endl;
        return output;
    }

};

int main()
{
    Distance D1(11, 10), D2(5, 11), D3;
    cin >> D3;  // operator>>(D3)  ==>  Friend operator function
    cout << D3;  // operator<<(D3)  == > Friend operator function
}
