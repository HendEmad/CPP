#include<bits/stdc++.h>
using namespace std;

class Polygon
{
protected:
    int width, height;
public:
    void set_values(int w, int h)
    {
        width = w;
        height = h;
    }

    virtual int area() = 0;  // Pure virtual function ==> A virtual function but without body
};

int main()
{
//    Polygon poly;  // error, we can't create an object from the abstract class
    Polygon *poly;  // correct; we can create only pointers from the abstract class
}
