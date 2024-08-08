#include <iostream>
using namespace std;

namespace case1 {  // lvalue
/*
In the function, if we pass a parameter of type `int` in the function prototype,
this parameter will be lvalue. In this case, it is available to pass rvalue as 
an argument while calling
*/


    void fun(int x) {
        cout << x << endl;
    }

    void run() {
        fun(1);  // accepted
        fun(2);  // accepted
        fun(3);  // accepted
    }

/*
output:
Running example 1:
1
2
3
*/
}

// ====================================================================================

namespace case2 {  // lvalue reference
/*
If we pass the arguments by reference to the function, the function expects lvalue
to be having an address. So, if the parameter passed is lvalue reference, we must 
pass lvalue as an argument while calling.
// (lvalue referenc can't hold temp. values [rvalue]).
*/

    void fun2(int &x) {
        cout << x << endl;
    }

    void run() {
        //fun2(1);  // compilation error; we can't pass rvalue to lvalue reference
        int x = 5;
        fun2(x);  // accepted; as x has an adress to be handled by the parameter &x;
                 // so we can pass lvalue as an argument to lvalue refernece parameter
        int &z = x;
        fun2(z);  // accepted; lvalue refernece can hold lvalue reference
    }
/*
output:
5
5
*/
}

namespace case3 {  // const lvalue reference
/*
const lvalue reference can hold rvalue/ temp. value.
*/

    void fun3(const int& x) {
        cout << x << endl;
    }

    void run() {
        fun3(1);  // accepted  // 1
        fun3(2);  // 2
    }
}

namespace case4 {  // function with return value; returned value is rvalue
/*
If the function returns a value, this returned value is stored in a temporary vatriable
which means that the returned value is rvalue, so it cannot be assigned to lvalue reference.
*/

    int fun4() {
        int x = 10;
        return x;
    }

    void run() {
        // int &y = fun4();  // error
        int y = fun4();  // accepted  
        cout << y << endl;  // 10
    }

    // fun4() = 10;  // error; as the rvalue is not assignable
}

namespace case5 {  // make the returned value be lvalue instead of rvalue
/*
we can alias the function; this will return x itself
Note: the returned value is lvalue so it is assignable
ex: `fun5() = 100`   // here we assigned the var. x itself to 100;
*/
    int x = 10;
    int& fun5() {  // this function returns a reference to local int x
        return x; 
    }
 
    void run() {
        int &y = fun5();
        cout << y << endl;  // 10

        fun5() = 100;
        cout << fun5() << endl;  // 100; fun5 returns lvalue, which is assignable
        
        // int z = fun5();  // error; as the function returns a reference which must also be stored in a reference
        // cout << z << endl;
    }
}

int main() {
    cout << "Running example 1: \n";
    case1::run();
 
    cout << "Running example 2: \n";
    case2::run();

    cout << "Running example 3: \n";
    case3::run();

    cout << "Running example 4: \n";
    case4::run();

    cout << "Running example 5: \n";
    case5::run();
}