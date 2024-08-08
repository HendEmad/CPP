#include<bits/stdc++.h>
using namespace std;

class student
{
    static int count;
    char name[20];
    int first, second, final, total, ID;
public:
    student()
    {
        strcpy_s(name, "no name");
        ID = 0;
        first = second = final = 0;
//        count = 0;
//        count++;
//        cout << "Number of students constructed = " << count << endl;
    }

    student(char n[], int f, int s, int fi, int t, int id)
    {
        strcpy_s(name, n);
        first = f;
        second = s;
        final = fi;
        total = t;
        ID = id;
        count++;
        cout << "student no. " << count << endl;
    }

    void p()
    {
        cout << "The student name = " << name << endl
             << "The first exam marks = " << first << endl
             << "The second exam marks = " << second << endl
             << "The final exam marks = " << final << endl
             << "The total marks = " << total << endl;
    }
}; // end of class
int student::count = 0;

int main()
{
    student s1("Ahmed", 25, 25, 50, 100, 32018221);  // Number of students constructed = 1
    s1.p();
    student s2("Roaa", 24, 24, 50, 98, 32018222);  // Number of students constructed = 2
    s2.p();
    student s3("Asmaa", 23, 25, 49, 97, 32018223);  // Number of students constructed = 3
    s3.p();

    student st[3] = {
        student("Ola", 25, 25, 45, 95, 32018224),
        student("Heba", 20, 20, 50, 90, 32018225),
        student("Hana", 23, 23, 48, 94, 32018226)
    };  // array of objects

    for(int i = 0; i < 3; i++)
    {
        st[i].p();
    }
} // end of main
