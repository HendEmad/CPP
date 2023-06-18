#include<bits/stdc++.h>
using namespace std;

template <class T>
class number
{
    T first, second;
public:
    number(T a, T b)
    {
        first = a;
        second = b;
    }
    T MAX();
};

template <class T>
T number <T> :: MAX()
{
    return (first > second ? first : second);
}

int main()
{
    number <int> obj(10, 20);
    cout << obj.MAX() << endl;  // 20
}
