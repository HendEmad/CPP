#include<bits/stdc++.h>
using namespace std;

class Complex
{
public:
    float real, img;
    void setReal(int r)
    {
        real = r;
    }
    void setImg(int i)
    {
        img = i;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    Complex operator + (Complex a)
{
    Complex b;
    b.real = this -> real + a.real;
    b.img = this -> img + a.img;
    return b;
}

Complex operator + (float b)
{
    Complex c5;
    c5.real = this -> real + b;
    return c5;
}
    friend Complex operator + (int, Complex);
};

Complex operator + (int a, Complex x)
{
    Complex c;
    c.real = a + x.real;
    c.img = x.img;
    return c;
}

int main()
{
    Complex c1;
    c1.setReal(10);
    c1.setImg(3);
    Complex c2;
    c2.setReal(5);
    c2.setImg(2);
    Complex c3;
    c3 = c1 + c2;  // complex = complex + complex
    cout << c3.real << " & " << c3.img << endl;  // 15 & 5
    Complex c4, c5;
    c5.setReal(3);
    float b = 6.5;
    c4 = c5 + b;  // 9.5  // complex = complex + float
    cout << c4.real << endl;
    Complex c7, c6;
    c6.setReal(5);
    c6.setImg(2);
    c7 = 5 + c6;  // complex = int + complex
    cout << c7.real << " & " << c7.img <<endl;
}
