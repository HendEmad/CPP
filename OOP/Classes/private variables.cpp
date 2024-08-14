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

    string getName(){
        return this -> name;
    }

    void setName(string name){
        this -> name = name;
    }

    void setAge(int age){
        this -> age = age;
    }
};

int main()
{
    Human x("Jack", 24);
    cout << x.getName() << " " << x.getAge() << endl;
    cout << x.name << " " << x.age << endl;
    return 0;
}
//name and age are private and not accessable to be printed, so the output will be an error:
// ||=== Build file: "no target" in "no project" (compiler: unknown) ===|
//C:\Users\Data\OneDrive\Desktop\C++\OOP\private variables.cpp||In function 'int main()':|
//C:\Users\Data\OneDrive\Desktop\C++\OOP\private variables.cpp|37|error: 'std::__cxx11::string Human::name' is private within this context|
//C:\Users\Data\OneDrive\Desktop\C++\OOP\private variables.cpp|7|note: declared private here|
//C:\Users\Data\OneDrive\Desktop\C++\OOP\private variables.cpp|37|error: 'int Human::age' is private within this context|
//C:\Users\Data\OneDrive\Desktop\C++\OOP\private variables.cpp|8|note: declared private here|
//C:\Users\Data\OneDrive\Desktop\C++\OOP\private variables.cpp|37|note: field 'int Human::age' can be accessed via 'int Human::getAge()'|
//||=== Build failed: 2 error(s), 0 warning(s) (0 minute(s), 2 second(s)) ===|
