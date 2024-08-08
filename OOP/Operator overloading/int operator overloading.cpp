#include<bits/stdc++.h>
using namespace std;

class number
{
    int Num;
public:
    number()
    {
        Num = 0;
    }

    number(int x)
    {
        Num = x;
    }

    number(const number &ob)
    {
        Num = ob.Num;
    }

    int getNum()
    {
        return Num;
    }

    friend ostream &operator<< (ostream &output, number n)
    {
        output << n.Num << endl;
        return output;
    }

    operator int()
    {
        return int(Num);
    }
};

int main()
{
    number n;
    int a = 10;
    n = a;
    cout << n << endl;

    number n2(50);
    int b;
    b = n2;  // b = operator=(n2);
    cout << b;
}
