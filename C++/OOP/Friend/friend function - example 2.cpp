#include<bits/stdc++.h>
using namespace std;

class rectangle
{
private:
    friend rectangle duplicate(rectangle);
    int width, height;
public:
    void set_values(int, int);
    int area()
    {
        return width * height;
    }
}; // end of class definition.

void rectangle::set_values(int a, int b)
{
    width = a;
    height = b;
}

rectangle duplicate(rectangle r)
{
    rectangle t;
    t.width = r.width * 2;
    t.height = r.height * 2;
    return t;
}

int main()
{
    rectangle rect, rectb;
    rect.set_values(2, 3);
    cout << "the area before duplication = " << rect.area() << endl;  // 6
    rectb = duplicate(rect);
    cout << "The area after duplication = " << rectb.area() << endl;  // 24
}
