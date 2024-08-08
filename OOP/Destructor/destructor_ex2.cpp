#include<bits/stdc++.h>
using namespace std;

class Phone
{
    char name[10];
    char model[10];
    int price;
public:
    Phone(){}
    Phone(char n[], char m[], int p)
    {
        strcpy_s(name, n);
        strcpy_s(model, m);
        price = p;
    }

    void print();  // prototype for print function as a member of the class Phone; the full definition can be created outside the class
    ~Phone();
};

void Phone::print()
{
    cout << "The phone name: " << name << endl
         << ", and model: " << model << endl
         << ", and its price: " << price << endl;
}

Phone::~Phone()
{
    cout << "Object destructed..." << endl;
}

int main()
{
    Phone p1, p2("HUAWI", "MATE 9", 400);
    p2.print();
    /*
    The phone name: HUAWI
    , and model: MATE 9
    , and its price: 400
    Object destructed...
    Object destructed...
    */
}

/*
Why the destructor is not called after the end of p1 object life time?
--> Because the destructor is not called at the end of the default constructor.
*/
