#include<bits/stdc++.h>
using namespace std;

class cRectangle
{
    int *width, *height;
public:
    cRectangle(int, int);  //constructor
    ~cRectangle();  //destructor

    int area()
    {
        return (*width * *height);
    }
};

//constructor
cRectangle::cRectangle(int a, int b)
{
    width = new int;
    height = new int;
    *width = a;
    *height = b;
}

//destructor
cRectangle::~cRectangle()
{
    delete width;
    delete height;
}

int main()
{
    cRectangle rect(3, 4), rectb(5, 6);
    cout << "rect area = " << rect.area() << endl;
    cout << "Rectb area = " << rectb.area() << endl;
}
