#include<bits/stdc++.h>
using namespace std;

int main()
{
    //array is CONSTANT pointer
    int arr[5] = {10, 50, 40, 77, 33};
    cout << arr << endl; //address of the first element of the arr
    cout << *arr << endl; //first element
    cout << arr + 1 << endl; //address of 2nd elemetn
    cout << *(arr+1) << endl; //second element
    cout << "---------------------------------------" << endl;

    //print all elements of the array
    for(size_t i = 0; i < 5; i++){
        cout << *(arr+i) << endl;
    }

    //another way to print all array's elements
    int *p;
    p = arr;
    for(size_t i = 0; i < 5; i++)
    {
        cout << *(p+i) << endl;
    }
    cout << "---------------------------------------" << endl;

    for(size_t i = 0; i< 5; i++){
        cout << *(p++) << endl; //*(arr++) --> error
    }
    cout << "---------------------------------------" << endl;



}

