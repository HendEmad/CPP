#include<bits/stdc++.h>
using namespace std;

class student
{
    char name[20];
    int ID;
public:
    student()  // empty constructor
    {
        cout << "Empty constructor..." << endl;
        strcpy_s(name, "No name");
        ID = 0;
    }

    student(char n[], int id)  // parameterized constructor; constructor overloading
    {
        cout << "parameterized constructor..." << endl;
        strcpy_s(name, n);
        ID = id;
    }

    void print()
    {
        cout << name << "\t" << ID << endl;
    }
};

int main()
{
    student s1("Ali", 123), s2("Ahmed", 456);
    s1.print();
    // array of object --> array of user defined data type
    // array of student data type; as array of int for example
    cout << endl << "The array of objects is printing now..." << endl;
    student arr[3] = {student("Hend", 32018228), student("Nada", 32018221)};


    // This array of objects has 3 objects inside itself, each element/object has its name and its id; each element/object has its constructors, methods, and destructors.

     for(int i = 0; i < 3; i++)
     {
         arr[i].print();
         // if there is no values for each object, it will automatically call the empty constructor.
     }

     /*
     parameterized constructor...
     parameterized constructor...
     Ali     123

     The array of objects is printing now...
     parameterized constructor...
     parameterized constructor...
     Empty constructor...
     Hend    32018228
     Nada    32018221
     No name 0
     */



     cout << "*********************************" << endl;
     student s3("noha", 1234), s4("khaled", 1234566);
     student arr2[3] = {s3, s4};
     for(int i = 0; i < 3; i++){
        arr2[i].print();
     }
     /*
     parameterized constructor...
     parameterized constructor...
     Empty constructor...
     noha    1234
     khaled  1234566
      No name 0
     */
}
