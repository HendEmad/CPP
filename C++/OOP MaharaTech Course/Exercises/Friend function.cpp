#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, img;
public:
    //Setter
    void setReal(int r)
    {
        real = r;  //this -> real = r
    }
    void setImg(int i)
    {
        img = i;  // this -> img = i
    }
    //getter
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    friend Complex addTo(int, Complex);
};

Complex addTo(int v, Complex c)
{
    Complex b;
    // b.setReal(c.getReal() + v);
    b.real = c.real + v;
    // We can't write this line: (b.real = c.real + v), we will get a compilation error as real variable is private in class Complex.
    // To be able to write this line without errors, we need to make a prototype of this function and make it as a friend function.
    return b;
}

int main()
{
    Complex a;
    a.setReal(2);
    a.setImg(3);
    a = addTo(4, a);
    cout << a.getReal();  // 6 (2 + 4)
}
