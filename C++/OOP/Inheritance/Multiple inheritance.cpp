#include<iostream>
#include<string>
using namespace std;

class father{
protected:
    string fatherName;
public:
    father(string name) : fatherName(name) {}
    string displayObject(){
        return "Father name: " + this -> fatherName + '\n';
    }
};

class mother{
protected:
    string motherName;
public:
    mother(string name) : motherName(name) {}
    string displayObject(){
        return "Mother name: " + this -> motherName + '\n';
    }
};

class child: public father, public mother{
public:
    string name;
public:
    child(string fatherName, string motherName, string name):
        father(fatherName), mother(motherName), name(name) {}
    string displayObject(){
        return father::displayObject() +
               mother::displayObject() +
               "Child name: " + this -> name + '\n';
    }
};

int main()
{
    child x("Bill", "Alexa", "Adam");
    cout << x.displayObject() << '\n';
}
