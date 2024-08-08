#include<bits/stdc++.h>
using namespace std;

int fun(int *p)
{
    *p += 1;
    return *p;
}

int main()
{
    //********************PART 1********************
    int val = 5;
    cout << "The address of `val` variable = " << &val << endl;  // Print the address of val variable

    int *ptr;  // Pointer holds/points to the address of the variable
    ptr = &val;

    cout << ptr << endl;  // returns the address of val variable
    cout << &val << endl;  // returns the same address as ptr
    cout << *ptr << endl;  // returns the content of the pointer ptr

    *ptr = 100;
    cout << *ptr << endl;  // 100
    cout << val << endl;  // 100

    val = 0;
    cout << *ptr << endl;  // 0
    cout << val << endl;  // 0


    //********************PART 2********************
    //int *ptr;
    void *ptr;
    int val1 = 5;
    float val2 = 10;
    //ptr = &val1;
    //ptr = &val2; // error: cannot convert 'float*' to 'int*' in assignment.

    ptr = &val2;
    float *i = static_cast<float*>(ptr);
    cout << *i << endl;  // 10


    //********************PART 3********************
    int *p;
    int v = 9;
    p = &v;
    cout << "p = " << p << endl;  // Address
    cout << "&*p = " << &*p << endl;  // Address
    cout << "&v = " << &v << endl;  // Address

    cout << "*p = " << *p << endl;  // 9
    cout << "*&*p = " << *&*p << endl;  // 9
    cout << "v = " << v << endl;  // 9

    v++;
    cout << "p after v++ = " << p << endl;  // Address of variable v
    cout << "*p after v++ = " << *p << endl;  // 10


    //********************PART 4********************
    // Array vs. pointer
    int arr[3] = {11, 22, 33};
    cout << "arr = " << arr << endl;  // Returns the address of the first element of the array
    cout << "arr + 1 = " << arr + 1 << endl;  // Returns the address of the second element of the array
    cout << "arr + 2 = " << arr + 2 << endl;  // Returns the address of the second element

    cout << "*arr = " << *arr << endl;  // 11  // Returns the content of the first element
    cout << "*(arr + 1) = "<< *(arr + 1) << endl;  // 22  // Returns the content of the second element
    cout << "*(arr + 2) = " << *(arr + 2) << endl;  // 33  // Returns the content of the second element


    //********************PART 5********************
    // Other ways to get the array elements without indexing
    int arr[7] = {11, 22, 33, 44, 55, 66, 77};

    // Way 1

    for(size_t i = 0; i < 7; i++){
        cout << *(arr + i) << " ";  // 11 22 33 44 55 66 77
    }
    cout << endl;

    int *ptr = arr;
//    for(size_t i = 0; i < 7; i++){
//        cout << *(arr++) << endl;  // ERROR; as the array is a constant pointer where it is not allowed to change its address
//    }
    cout << "///////////////////////////////////////" << endl;

    // Way 2
    for(size_t i = 0; i < 7; i++){
        cout << *(ptr++) << " ";  // 11 22 33 44 55 66 77
    }
    cout << endl;
    cout << "///////////////////////////////////////" << endl;

    // Way 3
    for(size_t i = 0; i < 7; i++){
        cout << *(ptr+i) << " ";  // 11 22 33 44 55 66 77
    }
    cout << endl;
    cout << "///////////////////////////////////////" << endl;

    // Way 4
    for(size_t i = 0; i < 7; i++){
        cout << *ptr << " ";  // 11 22 33 44 55 66 77
        ptr++;
    }
    cout << endl;

    // To print the 1st, 3rd, and 5th elements
    for(size_t i = 0; i < 3; i++){
        cout << *ptr << " ";  // 11 33 55
        ptr += 2;
    }
    cout << endl;


    //********************PART 6********************
    // Passing pointer to function
    int x = 1;
    cout << fun(&x) << endl;  // 2
    cout << x << endl;  // 2
    cout << fun(&x) << endl;  // 3
    cout << x << endl;  // 3

    int y = 1;
    int *ptr = &y;
    cout << fun(ptr) << endl;  // 2
    cout << y << endl;  // 2
    cout << fun(ptr) << endl;  // 3
    cout << y << endl;  // 3

    return 0;
}
