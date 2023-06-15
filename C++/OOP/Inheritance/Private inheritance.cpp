#include<bits/stdc++.h>
using namespace std;

class A
{
    int i;
protected:
    int j;
public:
    int k;
    void set_i (int x)
    {
        i = x;
    }
    int get_i()
    {
        return i;
    }

    void set_j(int y)
    {
        j = y;
    }
    int get_j()
    {
        return j;
    }
};

class B : A  // Private inheritance
{
    int x;
public:
    int y;
    // As the inheritance is private, we need to convert all public and protected members of class A into public for class  B
//    A :: i;  // private members of the private inheritance on base class can not be converted into a public one at the derived class
    A :: j;
    A :: set_i;
    A :: get_i;
    A :: set_j;
    A :: get_j;
};

int main()
{
    B op;
    op.j = 5;
    cout << op.j << endl;  // 5
    op.set_i(3);
    cout << op.get_i() << endl;  // 3
    op.set_j(6);
    cout << op.get_j() << endl;  // 6
    op.j = 9;
    cout << op.j << endl;  // 9
}
