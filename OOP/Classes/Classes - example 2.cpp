#include<bits/stdc++.h>
using namespace std;

class triangle
{
private:
    float base;
    float height;

public:
    // SET function
    void setBase_height(float b, float h)
    {
        base = b;
        height = h;
    }

    // GET area
    float getArea()
    {
        return 0.5*base*height;
    }

    // print function
    void print()
    {
        cout << "Base = " << base << endl <<
                "Height = " << height << endl <<
                "Area = " << getArea() << endl;
    }
};

int main()
{
    triangle t1;
    t1.setBase_height(10, 20);
    t1.getArea();
    cout << t1.getArea() << endl;  // 100
    t1.print();  // 10 20 100
    return 0;
}
