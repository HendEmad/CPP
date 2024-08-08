#include<bits/stdc++.h>
using namespace std;

class parent
{
protected:
    string parentName;
public:
    parent(string name) : parentName(name) {}
    string getName(){
        return this -> parentName;
    }
};

class child: public parent{
public:
    string childName;
public:
    child(string firstName, string lastName) :
        parent(lastName), childName(firstName) {}
    string getName(){
        return this -> childName + ' ' + this -> parentName;
    }
};

int main()
{
    child x("Mark", "Bill");
    cout << x.getName() << '\n';
    return 0;
}
