// It is a pointer points to the object that calls a member function and returns its address.

#include<bits/stdc++.h>
using namespace std;

class stud
{
public:
    void address()
    {
        cout << this;
    }
};

int main()
{
    stud s1, s2, s3;
    cout << "The address of s1: ";
    s1.address();
    cout << endl << "The address of s2: ";
    s2.address();
    cout << endl << "The address of s3: ";
    s3.address();
}
