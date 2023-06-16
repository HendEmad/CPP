#include<bits/stdc++.h>
using namespace std;

class mother
{
public:
    mother()
    {
        cout << "mother: empty constructor" << endl;
    }
    mother(int a)
    {
        cout << "mother: parameterized constructor = " << a << endl;
    }
};

class daughter : public mother
{
public:
    daughter()
    {
        cout << "daughter: empty constructor " << endl;
    }
    daughter(int a)
    {
        cout << "daughter: parameterized constructor = " << a << endl;
    }
};

class son : public mother
{
public:
    son(int a) : mother(a)
    {
        cout << "son: parameterized constructor = " << a << endl;
    }
};

class husband : public mother
{
public:
    husband(int a, int b) : mother(b)
    {
        cout << "husband: parameterized constructor = " << a << "\t" << b << endl;
    }
};

int main()
{
    daughter sara(6);
    /* Output:
    mother: empty constructor
    daughter: parameterized constructor = 6
    */

    son ahmed(20);
    /* Output:
    mother: parameterized constructor = 20
    son: parameterized constructor = 20
    */

    husband adel(50, 30);
    /* Output:
    mother: parameterized constructor = 30
    husband: parameterized constructor = 50 30
    */
}
