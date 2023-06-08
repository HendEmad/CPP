#include<bits/stdc++.h>
using namespace std;

class triangle
{
    float width, height;
public:
    triangle(float a = 0, float b = 0)
    {
        width = a;
        height = b;
    }

    void getdata()
    {
        cout << "Enter the width \n";
        cin >> width;
        cout << "Enter the height \n";
        cin >> height;
    }

    void showdata()
    {
        cout << "Width and height = (" << width << ", " << height << ")" << endl;
    }

    triangle operator+ (triangle t2)  // operator- in case of subtraction
    {
        triangle t3;
        t3.width = width + t2.width;  // c3 = c1.add(c2)
        t3.height = height + t2.height;  // c3 = c1.add(c2)
        return t3;
    }
};

int main()
{
    triangle c1, c2(3.5, 1.5), c3;
    c1.getdata();
//    c3 = c1.add(c2);
    c3 = c1 + c2;  // c3 = c1.operator +(c2)
    c3.showdata();
    return 0;
}
