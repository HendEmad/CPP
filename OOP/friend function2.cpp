#include<bits/stdc++.h>
using namespace std;

class mother;
class father;

class mother{
private:
    string name;
    int age;
    friend void displayParents(mother, father);
public:
    mother(string name, int age) : name(name), age(age) {}
};

class father{
private:
    string name;
    int age;
    friend void displayParents(mother, father);
public:
    father(string name, int age) : name(name), age(age) {}
};

void displayParents(mother x, father y)
{
    cout << x.name << " " << y.name << endl;
    cout << x.age << " " << y.age << endl;
}

int main()
{
    mother x("Mary", 29);
    father y ("Adam", 30);
    displayParents(x, y);
    return 0;
}
