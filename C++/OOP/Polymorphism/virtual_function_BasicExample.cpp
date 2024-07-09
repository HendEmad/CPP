#include <iostream>
using namespace std;

class Base {
    public:
    virtual void print () {cout << "Base class\n";}
};

class Derived : public Base {
    public:
    void print() {cout << "Derived class\n";}
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b -> print();  // Base class
    return 0;
}