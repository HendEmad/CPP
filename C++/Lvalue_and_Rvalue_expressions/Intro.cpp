#include <iostream>
using namespace std;

/*
lvalue: has a name/identity --> address --> assignable
rvalue: hasn't a name  --> temporaty created in runtime --> no address
*/

int main() {
    int x = 5;  // x lvalue  // 5 rvalue
    #define SIZE 10  // rvalue
    int a = x + 1;  // x+1 is rvalue as the x is added to 1 and the result is stored in a temp. variable

    // lvalue reference
    // int &z = 10;   // error; can't assign lvalue reference int& to an rvalue of type int
    
    int &z = x;  // no errors, as lvalue reference can hold an address to another variable  // &z is lvalue reference // x is lvalue
}