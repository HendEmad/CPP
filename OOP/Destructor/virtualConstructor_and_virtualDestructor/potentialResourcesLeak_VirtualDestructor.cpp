#include <iostream>
#include <vector>
using namespace std;

class base {
public:
    base() {
        cout << "Base constructor is called\n";
    }
    // ~base() {
    //     cout << "Base destructor is called\n";
    // }

    virtual ~base() {
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
    base* b = new derived();
    delete b;
}

/*
The expected output is:
Base constructor is called
Derived constructor is called
Derived destructor is called
Base destructor is called
-----------------------------
But the actual output is:
Base constructor is called
Derived constructor is called
Base destructor is called
-------------------------------
The derived object will not be destructed, leadint to potential resouece leaks
because the derived class allocates resources that need to be cleaned up.
*/

// What has happeded leaded to this behaviour?
/*
- For the line `base* b = new derived();`:
    The base class constructor is called first, 
    then the derived constructor is called.

- For the decond line `delete b;`:
    The destructor of derived class is not called. the reason is:
    We have a base class pointer `base*` that points to the derived class object.
    When we delete this pointer, the c++ runtime will look at the type of the pointer
    (which is of base class) to determine which destructor to call. Since the base
    class destructor is not virtual, the destructor gets called is only the one of 
    base class.

- Finally, the destructor of the base class is called, because b is a base* class pointer.
*/


// The solution:
/*
To make the destructor of the base class virtual destructor.
*/