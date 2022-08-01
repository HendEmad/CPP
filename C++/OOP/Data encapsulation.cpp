#include<bits/stdc++.h>
using namespace std;

class Human
{
public:
    string name;
    int age;

    Human(string name, int age) //constructor
{
    this -> name = name;  //name = name;
    this -> age = age;  //age = age;
}

string getName()
{
    return this -> name;
}

void setName(string name)
{
    this -> name = name;
}

int getAge()
{
    return this -> age;
}

void setAge(int age)
{
    if(age < 0) return;
    this -> age = age;
}
};

int main()
{
    Human x("Jack", 24);
    cout << x.getName() << " " << x.getAge() << endl;
    x.setName("Muller");
    x.setAge(27);
    cout << x.getName() << " " << x.getAge() << endl;
    return 0;
}
