#include<bits/stdc++.h>
using namespace std;

class employee
{
public:
    string name;
    float salary;

    string combineName(string firstName, string lastName){
        return firstName + " " + lastName;
    }

    float calcNetSalary(float salary){
        return salary * 0.85;
    }

    employee(string firstName, string lastName, float salary){
        this -> name = combineName(firstName, lastName);
        this -> salary = calcNetSalary(salary);
    }
};

int main()
{
    employee x("Jack", "Bill", 10000);
    cout << x.name << " " << x.salary << endl;
    return 0;
}
