#include <iostream>
using namespace std;

// The purpose of the delegation constructor is to `avoid redundance in two constructors`.
// For example if we have two parameterized constructors, one sets the number variable
// and the other sets the number variable and segmentLevel variable.
// Instead of setting number variables twice, we can set the last constructor to the first one.

class Segment {
    int number;
    string segmentLevel;
    int x;
public:
// The 1st constructor will forward 0 to the 2nd constructor.
// the 2nd constructor will forward number, "" to the 3rd constructor,
    Segment() : Segment(0) {
        cout << "Segment() : Segment(0)\n";
    }

    // Segment(int number) {
    //         this -> number = number;
    // }

    // note that we can't assign any values after or before the deligation
    // Segment(int number, int x) : Segment(number, ""), x(x) {  // error in x(x)
    // }

    // but we can assign it inside the body
    Segment(int number, int x) : Segment(number, "") {
        this -> x = x;
        cout << "Segment(int number, int x) : Segment(number, "") + x\n";
    }

    Segment(int number) : Segment(number, "") {
        cout << "Segment(int number) : Segment(number, "")\n";
    }  // here the number of this constructor will be assignmed to the number of the below constructor
    Segment(int number, string segmentLevel) {
        this -> number = number;
        this-> segmentLevel = segmentLevel;
        cout << "Segment(int number, string segmentLevel)\n";
    }
};

int main(){
    // the constructors are called one by one in stack manner. The 1st one leads to the 2nd one and the 2nd one leads to the 3rd one.
    // The execution is starting from the 3rd one up to the 1st one.

    Segment seg1;  // Segment(int number, string segmentLevel)
                  // Segment(int number) : Segment(number, )
                  // Segment() : Segment(0)
    Segment seg2(3);  // Segment(int number, string segmentLevel)  
                     // Segment(int number) : Segment(number, )

    Segment seg3(3, "Seg3");  // Segment(int number, string segmentLevel)

    Segment seg4 (4, 6);  // Segment(int number, string segmentLevel)
                          // Segment(int number, int x) : Segment(number, ) + x

    return 0;
}