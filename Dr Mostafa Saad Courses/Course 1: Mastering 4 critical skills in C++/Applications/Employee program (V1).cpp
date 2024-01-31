#include<bits/stdc++.h>
using namespace std;
# define MAX 10000
int main()
{
    string names[MAX];
    int ages[MAX];
    double salaries[MAX];
    char genders[MAX];
    int no_of_employees = 0;

    while(true){
        cout << "Enter your choice: " << "\n";
        cout << "1) Add new employees" << "\n";
        cout << "2) Print all employees" << "\n";
        cout << "3) Delete by age" << "\n";
        cout << "4) Update salary by name" << "\n";

        int choice = -1;
        cin >> choice;

        if(!(1 <= choice && choice <= 4)){
            cout << "Invalid choice, Try again.\n";
            continue;
        }

        if(choice == 1){
            cout << "Enter name: ";
            cin >> names[no_of_employees];
            cout << "\nEnter age: ";
            cin >> ages[no_of_employees];
            cout <<"\n Enter salary: ";
            cin >> salaries[no_of_employees];
            cout << "\n Enter gender (M/ F): ";
            cin >> genders[no_of_employees];
            no_of_employees++;
        }

        else if (choice == 2){
            cout << "***********************************\n";
            for(int i = 0; i < no_of_employees; i++){
                if (ages[i] != 1){
                    cout << names[i] << " " << ages[i] << " " <<
                                   salaries[i] << " " << genders[i] << "\n";
                }
            }
        }
        else if (choice == 3){
            int start, end;
            cout << "Enter start and end age: ";
            cin >> start >> end;
            for(int i = 0; i < no_of_employees; i++){
                if (start <= ages[i] && ages[i] <= end){
                    ages[i] = -1;
                }
            }
        }
        else{
            cout << "Enter the name and salary: ";
            string name;
            int salary;
            cin >> name >> salary;

            bool is_found = false;
            for(int i = 0; i < no_of_employees; i++){
                if (ages[i] != -1 && names[i] == name){
                        is_found = true;
                        salaries[i] = salary;
                        break;
                }
            }
            if (! is_found)
                cout << "No employee with this name! \n";
        }
    }
}
