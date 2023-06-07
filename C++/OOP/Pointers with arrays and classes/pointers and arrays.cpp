#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 50, 40, 77, 33};

    /*
    // print the address of the first element
    cout << arr << endl;  // address of the first element
    // print the content of the first element
    cout << *arr << endl;  // 10
    cout << *(arr+1) << endl;  // 50
    cout << arr+1 << endl;  // address of the second element
    // the second element address is 4 bytes + the first element address; as the int data type has 4 bytes in the memory
    */

    // print all elements of the array
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    cout << "Printing array elements..." << endl;
    for(int i = 0; i < arr_length; i++)
    {
        cout << *(arr+i) << " ";  // 10 50 40 77 33
        cout << endl;
    }
    cout << "-----------------------------------" << endl;


    int *p; // pointer points to integer variable
    // connect pointer with array
    p = arr;  // OR
//    p = &arr[0];
    cout << *p << endl;  // 10
    cout << *p + 1 << endl;  // 10+1=11
    cout << *(p+1) << endl;  // 50
    cout << *(p+3) << endl;  // 77

//    p += 2;  // add 2 to the address of the first element; which leads to the address 2 which is for element 3
//    cout << *p << endl;  // 40

    // print the array elements by using the pointer
    for(int i = 0; i < arr_length; i++)
    {
        cout << *(p+i) << " ";  // 10 50 40 77 33
    }
    cout << endl;

    cout << "===============================" << endl;
    for(int i = 0; i < arr_length; i++){
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    cout << "===============================" << endl;
    for(int i = 0; i < arr_length; i++){
        cout << *(p++) << " ";
    }
    cout << endl;
}

// note;;;the last and its previous can't be run simultaneously; as the ++p will change the initial value of p  which will be one address after the lase element
// So, when trying to print in the last way, we will get unexpected values as they are out of array range.
