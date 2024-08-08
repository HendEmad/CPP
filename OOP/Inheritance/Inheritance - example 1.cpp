#include<bits/stdc++.h>
using namespace std;

class Cpolygon
{
protected:
    int width, height;
public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
};

class Rectangle : public Cpolygon
{
public:
    int area()
    {
        return width * height;
    }
};

class Triangle : public Cpolygon
{
public:
    int area()
    {
        return (height * width) / 2;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    r.set_values(4, 5);
    cout << "Rectangle area =  " << r.area()<< endl;  // 20
    t.set_values(4, 5);
    cout << "Triangle area = " << t.area();  // 10
}
