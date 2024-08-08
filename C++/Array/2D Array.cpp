#include<bits/stdc++.h>
using namespace std;

void f(int arr[][5], int rows)
{
    for(size_t r = 0; r < rows; r++){
        for(size_t c = 0; c < 5; c++){
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }
}

int main()
{
    //********************EXAMPLE 1********************
    int a[3][4];  // Array of 3 rows and 4 columns

    // Taking input
    for(size_t i = 0; i < 3; i++){  // rows
        for(size_t j = 0; j < 4; j++){  // columns
            cin >> a[i][j];
        }
    }

    // Printing
    for(size_t i = 0; i < 3; i++){
        for(size_t j = 0; j < 4; j++){
            cout << a[i][j] << " ";
        }
         cout << endl;
    }


    //********************EXAMPLE 2********************
    int a[2][3] = {1, 2, 3,
                   4, 5, 6}
    //OR
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};


    //********************EXAMPLE 3********************
    // The task is to calculate the sum of all elements of the array
    int arr[2][4] = {{1, 1, 1, 1}, {2, 2, 2, 2}};
    int sum = 0;

    for(size_t i = 0; i < 2; i++){
        for(size_t j = 0; j < 4; j++){
            sum += arr[i][j];
        }
    }

    cout << sum;


    //********************EXAMPLE 4********************
    // The task is to find the average of students marks
    int marks[10][5];   // 5 marks for each of the 10 students
    int sum = 0;
    float average[10];

    for(size_t i = 0; i < 10; i++){
        for(size_t j = 0; j < 5; j++){
            cout << "Enter mark #" << j + 1 << " of student #" << i + 1 << endl;
            cin >> marks[i][j];
        }
    }

    for(size_t i = 0; i < 10; i++){
        for(size_t j = 0; j < 5; j++){
            sum += marks[i][j];
        }
        average[i] = sum / 5;
        cout << "Average of student #" << i + 1 << " = " << average[i] << endl;
    }


    //********************EXAMPLE 5********************
    // The task is to print the diagonal of the array
    char MTXchar[5][5] = {{'*', '$', '$', '$', '$'},
                          {'$', '*', '$', '$', '$'},
                          {'$', '$', '*', '$', '$'},
                          {'$', '$', '$', '*', '$'},
                          {'$', '$', '$', '$', '*'}
                         };
    for(size_t r = 0; r < 5; r++){
        for(size_t c = 0; c < 5; c++){
            if(r == c)
                cout << MTXchar[r][c] << " ";
            else
                cout << " ";
        }
        cout << endl;
    }


    //********************EXAMPLE 6********************
    // Another method for 2D array initialization
    char n[2][5] = {'A', 'H', 'M', 'E', 'D', "Emad"};

    for(size_t r = 0; r < 2; r++){
        for(size_t c = 0; c < 5; c++){
            cout << n[r][c];
        }
        cout << endl;
    }


    //********************EXAMPLE 7********************
    // Passing 2D array into a function
    // We must specify at least the size of the rows or the columns
    int a[2][5] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50};
    f(a, 2);


    //********************EXAMPLE 8********************
    // The task is to find the transpose of the array
    int arr[3][3];

    for(size_t r = 0; r < 3; r++){
        for(size_t c = 0; c < 3; c++){
            cin >> arr[r][c];
        }
    }

    cout << "Matrix before the transpose = " << endl;
    for(size_t r = 0; r < 3; r++){
        for(size_t c = 0; c < 3; c++){
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    cout << "Matrix after the transpose = " << endl;
    for(size_t r = 0; r < 3; r++){
        for(size_t c = 0; c < 3; c++){
            cout << arr[c][r] << " ";
        }
        cout << endl;
    }
}
