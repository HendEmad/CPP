#include <iostream>
#include <vector>
using namespace std;

class base {
public:
    base() {
        cout << "Base constructor is called\n";
    }
    ~base() {
        cout << "Base destructor is called\n";
    }
};

class derived : public base {
public:
    derived() {
        cout << "Derived constructor is called\n";
    }
    ~derived() {
        cout << "Derived destructor is called\n";
    }
};

int main() {
    derived d;  
    base b = d; // object slicing
}

/*
Ouput: 
Base constructor is called
Derived constructor is called
Base destructor is called
Derived destructor is called
Base destructor is called
*/


/*
What happened is:
- The object of derived class is created
- The derived class contains a copt of the base class, so the base class constructor will be called firstly --> `Base constructor is called`
- Then the constructor of derived class is callled --> `Derived constructor is called`
- At this point, the full constructing of the object is completed, with both base and derived parts.
------------------------------------------------------------------------------------------------------------------------------------------------
// Object slicing part: 
------------------------
- For the second line, the derived class is assigned to the base class, then the derived part of the object d will be sliced off 
leaving out the base parts only. In this case, the compiler creates a temp. base object from the derived object.
    By this, I mean that in the memort, the derived d object contains a copy of the base object as it inherits from that base object
    In case of object slicing `caused by assignning an object of the derived class to an object of the base class`, the copy of base obejct
    inside the derived object will the only thing that will be extracted. 
- Thus, the base part of the derived class will the only thing to be assigned to the base object.
- Thus the constructor of this base part will be called --> `Base constructor is called`. This line may not appear at the output may be due to 
the compiler optimization to delete any unneeded constructors.
------------------------------------------------------------------------------------------------------------------------------------------------
- then the base destructor is called --> `Base destructor is called`.
- Then the first line object will be destructed, so the derived class destructor is called then the base class destructor (as normal) -->
`Derived destructor is called`
`Base destructor is called`
*/