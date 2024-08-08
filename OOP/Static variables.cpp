#include<bits/stdc++.h>
using namespace std;

class employee{
public:
    static float raiseAmount;
    string firstName;
    string lastName;
    employee(string firstName, string lastName){
        this -> firstName = firstName;
        this -> lastName = lastName;
    }

    void updateRaiseAmount(float raiseAmount){
        this -> raiseAmount = raiseAmount;
    }
};
float employee::raiseAmount = 0.15;

int main()
{
    employee x("Jack", "Bill");
    employee y("Mark", "Petter");

    cout << x.firstName << ' ' << x.lastName << ' '
         << x.raiseAmount << endl;
    cout << y.firstName << ' ' << y.lastName << ' '
         << y.raiseAmount << endl;
    x.updateRaiseAmount(0.13);
    cout << x.firstName << ' ' << x.lastName << ' '
         << x.raiseAmount << endl;
    cout << y.firstName << ' ' << y.lastName << ' '
         << y.raiseAmount << endl;
    return 0;
}
