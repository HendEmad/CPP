#include<bits/stdc++.h>
using namespace std;

class Csquare;
class Crectangle
{
    int width, height;
public:
    int area()
    {
        return width * height;
    }
    void convert(Csquare);  // Function of object from the other class.
};

class Csquare
{
    int side;
public:
    void set_side(int x)
    {
        side = x;
    }
    friend class Crectangle;  // to allow convert function which is a member function of Crectangle class to get an object from it.
};

void Crectangle::convert(Csquare a)
{
    width = a.side;
    height = a.side;
}

int main()
{
    Csquare sqr;
    Crectangle rect;
    sqr.set_side(4);
    rect.convert(sqr);
    cout << rect.area() << endl;  // 16
}
