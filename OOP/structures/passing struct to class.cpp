 #include<bits/stdc++.h>
using namespace std;

struct exam
{
    float first;
    float second;
    float final;

    void f()
    {
        cout << "The program is starting...." << endl;
    }
};

class subject
{
    char name[10];
    exam Exam;
public:
    subject()  // empty constructor; initial values for name and exam
    {
        strcpy_s(name, "no name");

        /*
        Exam.first = 0;
        Exam.second = 0;
        Exam.final = 0;
        */  // ORRR
        Exam = {0, 0, 0};  // Struct initial value
    }

    subject(char n[], float fst, float sec, float fin)  // parameterized constructor
    {
        Exam.f();
        strcpy_s(name, n);

        Exam = {fst, sec, fin};
        // or
        /*
        Exam.first = fst;
        Exam.second = sec;
        Exam.final = fin;
        */
    }

    float total()
    {
        return Exam.first + Exam.second + Exam.final;
    }

    void print()
    {
        cout << "The subject name is " << name << endl
             << ", its first exam mark is " << Exam.first
             << ", and the second exam mark is " << Exam.second
             << ", and the third exam mark is " << Exam.final << endl
             << "So, your total mark is " << total() << endl;
    }
};

int main()
{
    subject e("OOP", 25, 24, 49);  // call parameterized constructor
    e.print();

}
