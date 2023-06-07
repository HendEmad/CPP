#include<bits/stdc++.h>
using namespace std;

class student
{
    static int count;
    char name[20];
    int first, second, final, total, ID;
public:
    static void print_count()
    {
        cout << "Students constructed: " << count << endl;
    }

    student()
    {
        strcpy_s(name, "No name");
        ID = 0;
        first = second = final = 0;
        count++;
        print_count();
    }
}; // end of class
int student::count = 0;

int main()
{

    // Ways to call the static function
    // 1. Using the object --> the default way to call the class member function
//    student s1;
//    s1.print_count();

    // 2.
    student::print_count();
    cout << "construct 2 objects..." << endl;
    student s1, s2;
    cout << "Construct 3 objects..." << endl;
    student st[3];
}
