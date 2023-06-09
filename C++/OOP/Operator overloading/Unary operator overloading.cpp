#include<bits/stdc++.h>
using namespace std;

class unary
{
    int x, y;
public:
//    unary(){};  // default constructor
    unary(int i = 0, int j = 0)  // initial value instead of default construtor
    {
        x = i;
        y = j;
    }

    void show()
    {
        cout << x << " " << y << endl;
    }

    unary operator++()
    {
        x++;
        y++;
        return *this;
    }

    unary operator++(int)
    {
        unary t;
        t = *this;  // store the variable address content inside an object
        x++;
        y++;
        return t;
    }

    unary operator-()
    {
        x = -x;
        y = -y;
        return *this;
    }

    unary operator-(unary u2)  // minus binary operator
    {
        unary r;
        r.x = x - u2.x;
        r.y = y - u2.y;
        return r;
    }
};

int main()
{
    unary v(10, 20), k, l;
    k = v++;
    v.show(); // 11 21
    k.show();  // 10 20
    l = ++v;
    v.show(); // 12 22
    l.show();  // 12 22

    // minus operator
    unary m(1, 2);
    -m;
    m.show();  // -1 -2
    unary m2(-1, 2);
    -m2;
    m2.show();  // 1 2

    // binary minus operation
    unary n1(5, 10), n2(2, 3), r2;
    r2 = n1 - n2;  // the compiler sees this as: r2=n1.operator-(n2);
    r2.show();  // 3 7
}
