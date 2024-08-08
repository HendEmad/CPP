#include<bits/stdc++.h>
using namespace std;

// Combining two data member of different classes using friend
class Tri;
class Rectangle
{
    friend int sum(Tri, Rectangle);
    int width, height;
public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
};

class Tri
{
    friend int sum(Tri, Rectangle);
    int W, H;
public:
    Tri(int a, int b)
    {
        W = a;
        H = b;
    }
};


int sum(Tri t, Rectangle r)
{
    return t.W + r.width;
}

int main()
{
    Rectangle r;
    r.set_values(2, 3);
    Tri l(5, 10);
    cout << sum(l, r) << endl;  // 7(5+2)
}
