#include<bits/stdc++.h>
using namespace std;

namespace example1 {
    class Rectangle
    {
        int W, H;
    public:
        // default constructor to avoid errors if we created an object that calls an empty constructor
        Rectangle(): W(0), H(0)
        {
            cout << "W = " << W << "H = " << H << endl;
        }

        // parameterized constructor
        Rectangle(int a, int b): W(a), H(b)
        {
            cout << "A rectangle has been created\n" << endl;
            // Create an object inside the parameterized constructor
            Rectangle ob;  // It will call the empty constructor
    //        Rectangle ob2(10, 20);  // It will call the parameterized constructor
        }

        // destructor
        ~Rectangle()
        {
            cout << W << " " << H << " A rectangle has been deleted\n" << endl;
        }

    };

    void run()
    {
        Rectangle R1(3, 4), R2(5, 6);
        Rectangle R3;
        /*
        A rectangle has been created

        W = 0H = 0
        0 0 A rectangle has been deleted

        A rectangle has been created

        W = 0H = 0
        0 0 A rectangle has been deleted

        W = 0H = 0
        0 0 A rectangle has been deleted

        5 6 A rectangle has been deleted

        3 4 A rectangle has been deleted
        */
    }
}

namespace example2 {
    class Phone
    {
        char name[10];
        char model[10];
        int price;
    public:
        Phone(){}
        Phone(char n[], char m[], int p)
        {
            strcpy_s(name, n);
            strcpy_s(model, m);
            price = p;
        }

        void print();  // prototype for print function as a member of the class Phone; the full definition can be created outside the class
        ~Phone();
    };

    void Phone::print()
    {
        cout << "The phone name: " << name << endl
            << ", and model: " << model << endl
            << ", and its price: " << price << endl;
    }

    Phone::~Phone()
    {
        cout << "Object destructed..." << endl;
    }

    void run()
    {
        Phone p1, p2("HUAWI", "MATE 9", 400);
        p2.print();
        /*
        The phone name: HUAWI
        , and model: MATE 9
        , and its price: 400
        Object destructed...
        Object destructed...
        */
    }
    /*
    Why the destructor is not called after the end of p1 object life time?
    --> Because the destructor is not called at the end of the default constructor.
    */
}

namespace example3 {
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

    void run()
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
}

int main() {
    example1::run();
    example2::run();
    example3::run();
}