#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    // Attributes
    char name[20];
    int id;

public:
    // constructors
    // 1) empty constructor:
    student()
    {
        cout << "Empty constructor";
        strcpy(name, "No name");
        id = 0;
    }

    // 2) parameterized constructor
    student(char n[], int i)
    {
        cout << "Parameterized constructor" << endl;
        strcpy(name, n);
        id = i;
    }

//    student(char n[], float i = 32016216.0)
//    {
//        cout << "Parameterized constructor" << endl;
//        strcpy(name, n);
//        id = i;
//    }

    student(char n[])
    {
        strcpy(name, n);
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    cout << "EMPTY CONSTRUCTOR" << endl;
    student s1;
    s1.print();
    cout << "----------------------------------------------------------------" << endl;


    cout << "PARAMETERIZED CONSTRUCTOR, WITHOUT SETTING ID TO 32018216 TO ID PARAMETER" << endl;
    student s2("Samaa", 32018213);
    s2.print();
    cout << "----------------------------------------------------------------" << endl;

    cout << "PARAMETERIZED CONSTRUCTOR, WITH SETTING ID TO 32018216 TO ID PARAMETER" << endl;
    student s3("Samaa");
    s3.print();
    cout << "----------------------------------------------------------------" << endl;

    cout << "PARAMETERIZED CONSTRUCTOR, WITH SETTING ID TO 32018216 TO ID PARAMETER" << endl;
    student s4("Afnan", 32016001);
    s4.print();
    cout << "----------------------------------------------------------------" << endl;

    cout << "PARAMETERIZED CONSTRUCTOR WITH NAME PARAMETER ONLY" << endl;
    student s5 ("Laila");
    s5.print();

    return 0;
}
