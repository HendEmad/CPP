#include<bits/stdc++.h>
using namespace std;

class polygon
{
protected:
    int width, height;
public:
    void set_values(int w, int h)
    {
        width = w;
        height = h;
    }

    virtual int area() = 0;
    void print_area()   // polymorphism
    {
        cout << this -> area() << endl;
    }
};

class rectangle : public polygon
{
    int area()
    {
        return width * height;
    }
};

class triangle : public polygon
{
public:
    int area()
    {
        return width * height / 2;
    }
};

int main()
{
    rectangle rect;
    triangle trgl;
    polygon *p1 = &rect;  // early binding
    polygon *p2 = &trgl;
    p1 -> set_values(4, 5);
    p2 -> set_values(4, 5);
    p1 -> print_area();  // means substract this with p1 which points to the address of rect that is an object of class rectangle, go there and calculate 4 * 5 [p1 -> area]
    p2 -> print_area();
    /*Output:
    20
    10
    */

    cout << "-------------------------------------------------------------------" << endl;
    polygon *p[2] = {&rect, &trgl};  // array of pointers to objects
    for(int i = 0; i < 2; i++)
    {
//          p[i] -> area();
        p[i] -> print_area();
        /* Output:
        20
        10
        */
    }
}
