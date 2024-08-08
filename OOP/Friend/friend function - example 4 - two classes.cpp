#include<bits/stdc++.h>
using namespace std;

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

int main() {
    A a1(1, 2);
    B b1(2, 3);
    B bb;
    bb = sum(a1, b1);
    // bb attributes are private, so we need a method to give us the access to them...
    cout << bb.getH() << endl;  // 3
    cout << bb.getI() << endl;  // 5
    return 0;
}
