#include <bits/stdc++.h>
using namespace std;

const int MAX_SPECIALIZATIONS = 20;
const int MAX_QUEUE = 5;

string names[MAX_SPECIALIZATIONS][MAX_QUEUE];
int status[MAX_SPECIALIZATIONS][MAX_QUEUE];  // 0, regular and 1, urgent
int queue_length[MAX_SPECIALIZATIONS];  // how many patients for each specialization?

int menu()
{
    int choice = -1;
    while (choice == -1){
            cout << "\n Enter your choice: \n";
            cout <<  "1) Add new patient\n";
            cout << "2) Print all patients\n";
            cout << "3) Get next patient\n";
            cout << "4) Exit\n";
        cin >> choice;
        if (choice < 1 || choice > 4){
            cout << "Error, enter number from 1 to  4: ";
            choice = -1;
        }
    }
    return choice;
}

void shift_right(int spec, string names_sp[], int status_sp[])
{
    int len = queue_length[spec];
    for (int i = len - 1; i >= 0; i--) {
       // start from the end to not override the data
        names_sp[i + 1] = names_sp[i];
        status_sp[i + 1]  = status_sp[i];
    }
    queue_length [spec]++;

}

bool add_patients()
{
    int sepc, st;
    string name;

    cout << "Enter specialization, name, and status: ";
    cin >> sepc >> name >> st;

    int pos = queue_length[sepc];
    if (pos >= MAX_QUEUE){
        cout << "Sorry, we can't add more patients for this specialization current now...\n";
        return false;
    }

    if (status == 0){  // regular
        names[sepc][pos] = name;
        status[sepc][pos] = st;
        queue_length[sepc]++;
    }
    else{  // urgent
        shift_right(sepc, names[sepc], status[sepc]);
        names[sepc][0] = name;
        status[sepc][0] = st;
    }
    return true;
}

void print_patient(int spec, string names_sp[], int status_sp[])
{
    int len = queue_length[spec];
    if (len == 0)
        return;

    cout << "There are " << len << "Patients in specialization " << spec << "\n";
    for(int i = 0; i < len; i++){
        cout << names_sp[i] << " ";
        if (status_sp[i]) // == 1
            cout << "urgent\n";
        else
            cout << "Regular\n";
    }
}

void print_patients()
{
    cout << "**********************************\n";
    for(int i = 0; i < MAX_SPECIALIZATIONS; i++){
        print_patient(i, names[i], status[i]);
    }
}

void shift_left(int spec, string names_sp[], int status_sp[])
{
    int len = queue_length[spec];
    for(int i = 1; i < len; i++){
        names_sp[i -1] = names_sp[i];
        status_sp[i - 1] = status_sp[i];
    }
    queue_length[spec]--;
}

void get_next_patient()
{
    int spec;
    cout << "Enter the specialization: ";
    cin >> spec;

    int len = queue_length[spec];

    if(len == 0){
        cout << "No patients in this specialization\n";
        return;
    }
    // get the top patient
    cout << names[spec][0] << "Please go with the doctor\n";
    // remove the top patient
    shift_left(spec, names[spec], status[spec]);
}

void hospital_system()
{
    while(true){
        int choice = menu();
        if(choice == 1)
            add_patients();
        else if (choice == 2)
            print_patients();
        else if (choice == 3)
            get_next_patient();
        else
            break;
    }
}

int main()
{
    hospital_system();
    return 0;
}
