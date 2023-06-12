#include<bits/stdc++.h>
using namespace std;

class arr
{
    int a[3];
public:
    arr()
    {
        for (int i = 0; i < 3; i++)
            a[i] = i + 2;
    }

    int &operator[] (int in)
    {
        return a[in];
    }
};

int main()
{
    arr ob;
    cout << "Object value before editing = " << ob[2] << endl;  // need [] operator overloading => ob.operator[](int)
    // for editing
    ob[2] = 20;
    cout << "Object value after editing = " << ob[2] << endl;
    return 0;
}
