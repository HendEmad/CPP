#include<bits/stdc++.h>
using namespace std;

class name
{
    char n[20];
protected:
    void set_name(char N[])
    {
        strcpy_s(n, N);
    }
    void print_name()
    {
        cout << "Name: " << n << endl;
    }
};

class id
{
    int id;
protected:
    void set_id(int ID)
    {
        id = ID;
    }
    void print_id()
    {
        cout << "ID: " << id << endl;
    }
};

class student : public name, public id
{
public:
    student(char name[], int Id)
    {
        set_name(name);
        set_id(Id);
    }

    void print()
    {
        print_name();
        print_id();
    }
};

int main()
{
    student ST("Hend", 32018228);
    ST.print();
    /* Output:
    Name: Hend
    ID: 32018228
    */
}
