# include<bits/stdc++.h>
using namespace std;

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

int main()
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
