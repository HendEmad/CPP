#include<bits/stdc++.h>
using namespace std;

class employee
{
private:
    float salary;
    float getNetSalary()
    {
        return this -> salary * 0.85;
    }
public:
    employee(){
        this -> salary = 0;
    }
    void setSalary(float salary){
        this -> salary = salary;
    }
    float getSalary(){
        return getNetSalary();
    }
};

int main()
{
    employee x;
    x.setSalary(1000);
    cout << x.getSalary() << endl;
    cout << x.getNetSalary() << endl;
    return 0;
}
//error!!!!:
//||=== Build file: "no target" in "no project" (compiler: unknown) ===|
//C:\Users\Data\OneDrive\Desktop\C++\OOP\employee class.cpp||In function 'int main()':|
//C:\Users\Data\OneDrive\Desktop\C++\OOP\employee class.cpp|29|error: 'float employee::getNetSalary()' is private within this context|
//C:\Users\Data\OneDrive\Desktop\C++\OOP\employee class.cpp|8|note: declared private here|
//||=== Build failed: 1 error(s), 0 warning(s) (0 minute(s), 2 second(s)) ===|
