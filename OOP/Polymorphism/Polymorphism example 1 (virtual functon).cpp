#include<iostream>
using namespace std;

class CPolygon
{
protected:
    int width, height;
public:
    void set_values(int w, int h)
    {
        width = w;
        height = h;
    }

    virtual int area()  // virtual function
    {
        return 0;
    }
};

class CTriangle : public CPolygon
{
public:
    int area()
    {
        return width * height / 2;
    }
};

class CRectangle : public CPolygon
{
public:
    int area()
    {
        return width * height;
    }
};

int main()
{
    CRectangle rect;
    CTriangle trgl;
    CPolygon *p1, *p2;
    p1 = &rect;
    p2 = &trgl;
    p1 -> set_values(4, 5);
    p2 -> set_values(4, 5);
//    cout << p1 -> area();  // error; as the function called by pointers must be in the base class[class CPolygon' has no member named 'area']
    cout << rect.area() << "    " << trgl.area() << endl;  // 20    10

    /////////////////////////////After creating the virtual fucntion////////////////////////////////////
    cout << p1 -> area() << "    " << p2 -> area() << endl;  // 20    10

    CRectangle rect1;
    CTriangle trgl1;
    CPolygon poly;
    CPolygon *p11, *p21, *p3;
    p11 = &rect1;
    p21 = &trgl1;
    p3 = &poly;
    p11 -> set_values(4, 5);
    p21 -> set_values(4, 5);
    p3 -> set_values(9, 8);
    cout << p11 -> area() << "    " << p21 -> area() << endl;  // 20    10
    cout << p3 -> area() << endl;  // 0
}
