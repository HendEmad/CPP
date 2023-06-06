#include<bits/stdc++.h>
using namespace std;

class Student
{
    char name[20];  // member private
    int ID;  // member private
public:
    // empty constructor
    Student()
    {
        cout << "Object is created..." << endl;
    }

    // destructor
    ~Student()
    {
        cout << "Object is destructed..." << endl;
    }

    // Function to set the name and id
    void set_name_id(char n[], int id)  // member function
    {
        strcpy_s(name, n);
        ID = id;
    }

    // Function to print
    void print()  // member function
    {
        cout << "The student name is " << name << ", and its ID is " << ID << endl;
    }
};  // end of the Student class definition

void F(Student S)  // non member function
{
    Student S1;  // object from class Student
    S1 = S;  // Store the object passed to the function in S1
    S.set_name_id("Hend", 32018228);
    S.print();
    S1.print();
}

int main()
{
    Student st1, st2;
    st1.set_name_id("Ahmed", 11111);
    st2.set_name_id("Ali", 22222);
    cout << "Going to function..." << endl;
    F(st1);
    cout << "Back from function..." << endl;
    st1.print();
}

/*
Object is created...
Object is created...
Going to function...
Object is created...
The student name is Hend, and its ID is 32018228
The student name is Ahmed, and its ID is 11111
Object is destructed...
Object is destructed...
Back from function...
The student name is Ahmed, and its ID is 11111
Object is destructed...
Object is destructed...
*/
