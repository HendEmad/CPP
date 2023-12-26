#include<bits/stdc++.h>
using namespace std;

class Complex
{
    float real;
    float img;
public:
    void setReal(float r);
    void setImg(float i);
    float getReal();
    float getImg();
    Complex add(Complex x);
    Complex sub(Complex y);
    void print();
};

void Complex::setReal(float r)
{
    real = r;
}
void Complex::setImg(float i)
{
    img = i;
}
float Complex::getReal()
{
    return real;
}
float Complex::getImg()
{
    return img;
}
Complex Complex::add(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}
Complex Complex::sub(Complex c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}
void Complex::print()
{
    cout << real << ", " << img << endl;
}

int main()
{
    Complex myComp1, myComp2, resultComp;
    myComp1.setReal(5);
    myComp1.setImg(3);
    myComp2.setReal(10);
    myComp2.setImg(7);

    myComp1.print();
    myComp2.print();

    resultComp = myComp1.add(myComp2);
    resultComp.print();

    resultComp = myComp1.sub(myComp2);
    resultComp.print();

    return 0;
}
