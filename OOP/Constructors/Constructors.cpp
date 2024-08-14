/*
    The constructor will be called once the object is created from the class
    It is very similar to functions, BUT,
    It runs at the first of execution automatically, no need to call it as functions.
    It has 3 types: empty, parameterized, and copy constructor.
    1. Empty constructor -> does not take any argument
        If we create one object, the constructor will be executed once, but
        if we create two objects, the constructor will be executed twice, and so on..
    2. Parameterized constructor -> Takes arguments
*/

#include<bits/stdc++.h>
using namespace std;

namespace example1 {
    class Triangle
    {
    private:
        float base;
        float height;

    public:
        // CONSTRUCTOR
        // 1. Empty constructor
        Triangle()
        {
            cout << "Empty constructor" << endl;
            // Initial values for class attributes to avoid garbage values
            base = 0;
            height = 0;
        }
        // 2. Parameterized constructor
        Triangle(float b, float h)
        {
            base = b;
            height = h;
            cout << "p Constructor" << endl;
        }
        // 3.

        // SET function
        void setBase_height(float b, float h)
        {
            base = b;
            height = h;
        }

        // GET area
        float getArea()
        {
            return 0.5*base*height;
        }

        // print function
        void print()
        {
            cout << "Base = " << base << endl <<
                    "Height = " << height << endl <<
                    "Area = " << getArea() << endl;
        }
    };

    void run()
    {
        cout << "EMPTY CONSTRUCTOR WITH FUNCTION FOR SETTING ATTRIBUTES VALUES" << endl;
        Triangle t1;  //empty constructor
        t1.setBase_height(10, 20);
        t1.getArea();
        t1.print();  // 10 20 100
        cout << "----------------------------------------------------------------" << endl;

        cout << "PARAMETERIZED CONSTRUCTOR, for SETTING ATTRIBUTES VALUES" << endl;
        Triangle t2(5, 10);  // Parameterized constructor  // (base, height)
        t2.print();  // 5 10 25
        cout << "----------------------------------------------------------------" << endl;

        cout << "EMPTY CONSTRUCTOR WITH FUNCTION FOR SETTING ATTRIBUTES VALUES - 2" << endl;
        t2.setBase_height(80, 30);
        t2.print();
    }
}

namespace example2 {
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

    void run()
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
    }
}

int main() {
    example1::run();
    example2::run();
}