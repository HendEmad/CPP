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
        count++;
        cout << "Number of students constructed = " << count << endl;
    }
};
int student::count = 0;

int main()
{
    student s1;
    student s2;
    student s3;
}
