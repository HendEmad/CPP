//For accessing private data, friend function must be done inside the body to the class starting with heyword friend

#include<bits/stdc++.h>
using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human(string name, int age){
        this -> name = name;
        this -> age = age;
    }

    int getAge(){
        return this -> age;
    }
    friend string displayName(Human);
    friend void incrementAge(Human&, int);
};

string displayName(Human y){
    return y.name;
}

void incrementAge(Human &y, int n){
    y.age += n;
}

int main()
{
    Human x("Jack", 24);
    cout << displayName(x) << ' ' << x.getAge() << endl;
    incrementAge(x, 10);
    cout << displayName(x) << ' ' << x.getAge() << endl;
    return 0;
}
