#include<bits/stdc++.h>
using namespace std;

class time
{
    int h, m, s;
public:
    void print() const  // member function const
    {
        cout << "The time = " << h << ":" << m << ":" << s << endl;
    }

    time(int i, int j, int k)
    {
        h = i;
        m = j;
        s = k;
    }
}; // end of class

int main()
{
    const time noon(12, 0, 0);  // constant object
    noon.print();
}
