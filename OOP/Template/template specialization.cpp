#include <bits/stdc++.h>
using namespace std;

template <class T>
class A_char
{
public:
    A_char(T x)
    {
    cout << x << " is not a character..." << endl;
    }
};

template <>  // template specialization
class A_char <char>
{
public:
    A_char(char x)
    {
        cout << x << " is a character...." << endl;
    }
};

int main()
{
    A_char <int> obj1(10);  // 10 is not a character
    A_char <double> obj2(10.5);  // 10.5 is not a character
    A_char <char> obj3('A');  // A is a character
    A_char <char> obj4(10);  //  is a character
}
