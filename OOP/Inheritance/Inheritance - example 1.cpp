#include<bits/stdc++.h>
using namespace std;

namespace example1 {
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

    void run()
    {
        Rectangle r;
        Triangle t;
        r.set_values(4, 5);
        cout << "Rectangle area =  " << r.area()<< endl;  // 20
        t.set_values(4, 5);
        cout << "Triangle area = " << t.area();  // 10
    }
}

namespace example2 {
    class A
    {
        int i;
    protected:
        int j;
    public:
        int k;
    };

    class B : public A
    {
        int x;
    public:
        int y;
        // error, as i is a private member of class A
        /*
        int get_i()
        {
            return i;
        }
        */
        // This doesn't return an error, as the protected members can be accessed in the derived class.
        int get_j(){
            return j;
        }
    };

    void run()
    {
        B op;
    //    op.i = 10;  // error, i is a private member of class A
    //    op.j = 5;  // error, j is a protected member pf class A; Can't be accessed in main.
    //    op.x = 20;  // error, x is a private member of class A.
        op.y = 12;
        op.k = 20;
        cout << op.y;
        cout << endl << op.k << endl;
    }
}

int main() {
    example1::run();
    example2::run();
}