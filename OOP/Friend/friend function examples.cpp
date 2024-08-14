#include<bits/stdc++.h>
using namespace std;

namespace example1 {
    class rectangle
    {
    private:
        friend rectangle duplicate(rectangle);
        int width, height;
    public:
        void set_values(int, int);
        int area()
        {
            return width * height;
        }
    }; // end of class definition.

    void rectangle::set_values(int a, int b)
    {
        width = a;
        height = b;
    }

    rectangle duplicate(rectangle r)
    {
        rectangle t;
        t.width = r.width * 2;
        t.height = r.height * 2;
        return t;
    }

    void run()
    {
        rectangle rect, rectb;
        rect.set_values(2, 3);
        cout << "the area before duplication = " << rect.area() << endl;  // 6
        rectb = duplicate(rect);
        cout << "The area after duplication = " << rectb.area() << endl;  // 24
    }
}

namespace example2 {
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

    void run()
    {
        Rectangle r;
        r.set_values(2, 3);
        Tri l(5, 10);
        cout << sum(l, r) << endl;  // 7(5+2)
    }
}

namespace example3 {
    class B;
    class A
    {
    private:
        friend B sum(A, B);
        int k, l;
    public:
        A(int a, int b)
        {
            k = a;
            l = b;
        }
    };

    class B
    {
    private:
        friend B sum(A, B);
        int h, i;
    public:
        B()
        {
            h = 0;
            i = 0;
        }

        B(int c, int d)
        {
            h = c;
            i = d;
        }

        int getH()
        { // public member function to access h
            return h;
        }

        int getI()
        {
            return i;
        }
    };

    B sum (A a, B b)
    {
        B bb;
        bb.h = a.k + b.h;
        bb.i = a.l + b.i;
        return bb;
    }

    void run() {
        A a1(1, 2);
        B b1(2, 3);
        B bb;
        bb = sum(a1, b1);
        // bb attributes are private, so we need a method to give us the access to them...
        cout << bb.getH() << endl;  // 3
        cout << bb.getI() << endl;  // 5
    }
}

int main() {
    example1::run();
    example2::run();
    example3::run();
}