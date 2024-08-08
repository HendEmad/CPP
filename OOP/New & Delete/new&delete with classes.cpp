// pass pointers as the class private members

#include<bits/stdc++.h>
using namespace std;

class CRectangle
{
    int *height, *width;
public:
    CRectangle(int, int);  // constructor
    ~CRectangle();  // destructor
    int area()
    {
        return (*width * *height);
    }
};

CRectangle::CRectangle(int a, int b)
{
/*
    width = &a;
    height = &b;
*/             //OR

    width = new int;
    height = new int;
    *width = a;
    *height = b;

}

CRectangle::~CRectangle()
{
    delete width;
    delete height;
}

int main()
{
    CRectangle rect(3, 4), rectb(5, 6);
    cout << "Rect. area = " << rect.area() << endl;  //12
    cout << "Rectb. area = " << rectb.area() << endl;  // 30
}
