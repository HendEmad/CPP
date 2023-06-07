#include<bits/stdc++.h>
using namespace std;

class student
{
    char name[20];
    int ID;
public:
    student()
    {
        cout << "Empty constructor..." << endl;
        strcpy_s(name, "No name");
        ID = 0;
    }

    student(char n[], int id){
        cout << "parameterized constructor..." << endl;
        strcpy_s(name, n);
        ID = id;
    }

    void print()
    {
        cout << name << "\t" << ID << endl;
    }
};

int main()
{
    student s1("Ali", 123), s2("Ahmed", 456), *p;
    student arr[3] = {s1, s2};
    p = arr;

    for(int i = 0; i < 3; i++)
    {
        (p+i) -> print();  // p++ -> print()
    }
}
