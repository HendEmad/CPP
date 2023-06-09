#include<bits/stdc++.h>
using namespace std;

class relational
{
    int x, y, z;
public:
    relational()
    {
        x = y = z = 0;
    }
    relational(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }

    // == operator overloading
    int operator==(relational b)
    {
        /*
        if(x == b.x && y == b.y && z == b.z)
            return true
        else
            return false;
        */
        return (x == b.x && y == b.y && z == b.z);
    }

    // <= operator overloading
    int operator<=(relational a)
    {
        return (x <= a.x && y <= a.y && z <= a.z);
    }

    // >= operator overloading
    int operator>=(relational c)
    {
        return (x >= c.x && y >= c.y && z >= c.z);
    }

    // != operator overloading
    int operator!=(relational d)
    {
        return (x != d.x && y != d.y && z != d.z);
    }
};

int main()
{
    // == operator overloading
    relational a(10, 10, 10), b(10, 10, 10);
    if (a == b)  // a.operator==(b)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;  // Equal

    // <= operator overloading
    relational a1(12, 23, 26), a2(10, 20, 25);
    if (a1 <= a2)
        cout << "True" << endl;
    else
        cout << "False" << endl;  // False

    // >= operator overloading
    relational c1(12, 23, 26), c2(15, 25, 30);
    if (c1 >= c2)
        cout << "true" << endl;
    else
        cout << "false" << endl;  // false

    // != operator overloading
    relational d1(10, 10, 10), d2(20, 20, 20);
    if (d1 != d2)
        cout << "not equal" << endl;
    else
        cout << "equal" << endl;  // not equal
}
