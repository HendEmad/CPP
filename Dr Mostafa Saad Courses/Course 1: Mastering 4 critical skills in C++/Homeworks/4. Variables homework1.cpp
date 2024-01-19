#include<bits/stdc++.h>
using namespace std;

int main()
{
    // math operations homework
    cout << "math operations homework...." << endl;
    int x = 0, y = 0;
    cin >> x >> y;
    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    cout << x << " / " << y << " = " << x / y << endl;
    cout << x << " * " << y << " = " << x * y << endl;


    // students grades homework
    cout << "students grades homework...." << endl;
    string name1 = " ", name2 = " ";
    int id1 = 0, id2 = 0;
    double grade1 = 0.0, grade2 = 0.0;
    cout << "What is student 1 name: ";
    cin >> name1;
    cout << "His id: ";
    cin >> id1;
    cout << "His math exam grade: ";
    cin >> grade1;

    cout << "What is student 2 name: ";
    cin >> name2;
    cout << "His id: ";
    cin >> id2;
    cout << "His math exam grade: ";
    cin >> grade2;

    cout << endl;
    cout << "Students grades in math..." << endl;
    cout << name1 << " (With id " << id1 << ") " << "got grade: " << grade1 << endl;
    cout << name2 << " (with id " << id2 << ") " <<  "got grade: " << grade2 << endl;
    cout << "Average grade is " << (grade1 + grade2) / 2 << endl;


    // Even and Odd sum homework
    cout << endl;
    cout << "Even and Odd sum homework...";
    cout << "Enter 8 numbers: ";
    int n = 0, evensum = 0, oddsum = 0;
    int i = 0;
    while (i < 8){
        cin >> n;
        if (n % 2 == 0){
            evensum += n;
        }
        else{
            oddsum += n;
        }
        i++;
    }
    cout << evensum << " " << oddsum << endl;
}
