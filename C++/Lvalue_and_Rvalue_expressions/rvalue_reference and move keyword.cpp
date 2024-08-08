#include <iostream>
using namespace std;

namespace intro {
/*
rvalue reference always expect to be assigned to right value
To convert the lvalue to rvalue, we use move() keyword

// What is the difference between int&& k = 10, and int k2 = 10?
1) int k2 = 10;
    here, 10 is stored firstly at temp. variable, then it is copied from temp. var into k2 var.
2) int&& k = 10;   // &&k is right value; has no address
    here, 10 is stored at temp. variable, and k will points also to the same memory address of 
    temp. variable. So this is more optimized way, no copying happens.
*/

    void run() {
        int l = 12;
        cout << &l << endl;

        // int &&k = l;  // error; the rvalue reference expects rvalue not lvalue
        int &&k = move(l);  // here k points to the address of l without copying
        cout << &k << endl;  // k and l has the same address
        cout << k << endl << l << endl;  // 12  // 12
    }

/*
output:
0x61fe14
0x61fe14
*/
}  

namespace function{
    // note that this function can't handle const rvalue arguments

    void fun(int &&k) {
        cout << k << endl;
    }

    void run() {
        int p = 20;
        fun(6);  // accepted rvalue
        // fun(p);  // error; p is lvalue
        fun(move(p));  // accepted; the p lavlue is converted into rvalue using move()
    }

/*
output:
6
20
*/
}

namespace constRvalueArg{
    // to handle passing argument as a constant rvalue not a normal rvalue
    // we need to overload the function to pass const ravlue instead of normal rvalue
    void fun(const int &&x) {
        cout << x << endl;  // 50
    }
    void run() {
        const int u = 50;
        fun(move(u));
    }
} 

int main() {
    cout << "Running intro example: \n";
    intro::run();

    cout << "Running function example: \n";
    function::run();

    cout << "Running function overloading example: \n";
    constRvalueArg::run();
}