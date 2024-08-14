#include <iostream>
using namespace std;

class A{
public:
    int a;
    void get_A(){
        cout << "Enter value of a: ";
        cin >> a;
    }
};

class B : public A {
public:
    int b;
    void get_B (){
        cout << "Enter value of b: ";
        cin >> b;
    }
};

class C: public B {
public:
    int c;
    void get_C() {
        cout << "Enter value of c: ";
        cin >> c; 
    }
    void print_sum() {
        int ans = a + b + c;
        cout << "the total sum = " << ans << endl;
    }
};

int main(){
    C obj;
    obj.get_A();
    obj.get_B();
    obj.get_C();
    obj.print_sum();
    return 0;
}