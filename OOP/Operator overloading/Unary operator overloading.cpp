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


    // prefix operator overloading
    unary operator++()
    {
        x++;
        y++;
        return *this;
    }


    // postfix operator overloading
    unary operator++(int)
    {
        unary t;
        t = *this;  // store the variable address content inside an object
        x++;
        y++;
        return t;
    }


    // binary minus operator
    unary operator-()
    {
        x = -x;
        y = -y;
        return *this;
    }


    // minus binary operator
    unary operator-(unary u2)
    {
        unary r;
        r.x = x - u2.x;
        r.y = y - u2.y;
        return r;
    }

    // not unary operator; optional bool or not
    bool operator!()
    {
        /*
        if (x==0 && y == 0)
            return 1;  // return true;
        else
            return 0;  // return false;
        */
        return (x == 0 && y == 0);
    }

    // x = x + y ==> x += y
    unary operator+=(unary b2)
    {
        x += b2.x;
        y += b2.y;
        return *this;
    }

    // x = x - y; x -= y
    unary operator-=(unary c2)
    {
        x -= c2.x;
        y -= c2.y;
        return *this;
    }
};

int main()
{
    // postfix and prefix oeprators
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

    // not operator
    unary x(1, 1);
    if (!x)
        cout << "true" << endl;
    else
        cout << "false" << endl;  // false

    // x+= y
    unary b(1, 2), b2(2, 3);
    b += b2;  // b.operator+=(b2);
    b.show();  // 3 5

    // x-= y;
    unary c(3, 3), c2(4, 4);
    c2 -= c;  // c2.operator-=(c)
    c2.show();  // 1 1
}
