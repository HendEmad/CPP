#include<bits/stdc++.h>
using namespace std;

class Human
{
protected:
    string name;
    int age;
public:
    Human(string name, int age) : name(name), age(age) {}
    string displayObject(){
        return "name: " + this -> name + '\n' +
               "age: " + to_string(this -> age) + '\n';
    }
};

class employee: public Human{
public:
    string department;
    int salary;
public:
    employee(string name, int age, int salary, string department)
        : Human(name, age), salary(salary), department(department) {}
    string displayObject(){
        return Human:: displayObject() +
        "salary: " + to_string(this -> salary) + '\n' +
        "department: " + this -> department + '\n';
    }
};

int main()
{
    Human x("Jack", 24);
    cout << x.displayObject() << '\n';

    employee y("Robert", 26, 4000, "IT");
    cout << y.displayObject() << '\n';
    return 0;
}
