#include<bits/stdc++.h>
using namespace std;

// program 1
int max(int a, int b, int c)
{
    return max(a, max(b, c));
}

int max(int a, int b, int c, int d)
{
    return max(a, max(b, c, d));
}

int max(int a, int b, int c, int d, int e)
{
    return max(a, max(b, c, d, e));
}

int max(int a, int b, int c, int d, int e, int f)
{
    return max(max(a, b, c, d, e), f);
}

// program 2: reverse a string
void reverse_str(const string &str)
{
    for(int i = str.size(); i >= 0; i--){
        cout << str[i];
    }
}

// program 3: Calculator
int menu()
{
    int choice = -1;
    while (choice == -1){
            if (true){
                cout << "\nWelcome to calculator.....\n";
                cout << "1. Add 2 numbers\n";
                cout << "2. Subtract 2 numbers\n";
                cout << "3. Multiply 2 numbers\n";
                cout << "4. Divide 2 numbers\n";
                cout << "5. End the program\n";
            }
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice < 1 || choice > 5){
                cout << "Error, enter number from 1 to 5: ";
                choice = -1;
            }
    }
    return choice;
}

void read(double &a, double &b)
{
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
}
void add(double a, double b)
{
    cout << "a + b = " << a + b;
}

void sub(double a, double b)
{
    cout << "a - b = " << a - b;
}

void mul(double a, double b)
{
    cout << "a * b = " << a * b;
}

void div(double a, double b)
{
    if (b == 0)
        cout << "Can't divide by 0..." << endl;
    cout << "a / b = " << a / b;
}

// Program 4:
int read_array(int arr[])
{
    int len;
    cin >> len;
    for(int i = 0; i < len; i++){
        cin >> arr[i];
    }
    return len;
}

bool is_palindrome(int arr[], int n)
{
    int st = 0, en = n - 1;
    while (st < en){
        if(arr[st] != arr[en])
            return false;
      st++, en--;
    }
    return true;
}

// Program 5
void set_powers(int arr[], int len = 5, int m = 2)
{
    arr[0] = 1;
    for(int i = 1; i < len; i++){
        arr[i] = arr[i - 1] * m;
    }
}

// Program 6
bool is_prime(int num)
{
    if(num <= 1)
        return false;
    for(int i = 2; i < num; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int nth_prime(int n)
{
    for(int i = 2; ; i++){
        if(is_prime(i)){
            --n;
            if(n == 0)
                return i;
        }
    }
    return -1;
}



int main()
{
    // program 1;
    cout << max(1, 2, 3, 4, 5, 6);

    // program 2: reverse a string
    string str = "hend";
    reverse_str(str);

    // Program 3: Calculator
    int total_operations = 0;
    double a, b;

    while(true)
    {
        int choice = menu();
        if (choice == 5)
            break;

        total_operations ++;

        read(a, b);
        if(choice == 1)
            add(a, b);
        else if (choice == 2)
            sub(a, b);
        else if (choice == 3)
            mul (a, b);
        else if (choice == 4)
            div(a, b);
    }
    cout << "Total operations: " << total_operations << endl;

    // Program 4:
    int arr[100];
    int len = read_array(arr);
    cout << is_palindrome(arr, len);

    // Program 5
    int arr[100];
    int len, m;
    cin >> len >> m;
    set_powers(arr, len, m);
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }

    // program 6
    for(int i = 1; i < 20; i++){
        cout << nth_prime(i) << " ";
    }
    cout <<  "\n" <<nth_prime(6);
}
