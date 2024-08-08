#include<iostream>
using namespace std;
int main(){
    cout<< "The largest value of the int type can hold is: " << INT_MAX << endl;
    cout<< "The smallest value of the int type can hold is: " << INT_MIN << endl;
    cout<< "The size the size_t type can hold is: " << (size_t)0 - 1 << endl;
}

//--------------------------------------------------------------------------------

//how to use and where to use size_t type
#include <cstddef>
#include <iostream>
#include <array>
using namespace std;
int main(){
    const size_t s = 500;
    int n[s];
    size_t Size = sizeof(n);
    printf("The maximum size of the variable s could be = %lu\n", SIZE_MAX);
    printf("\n");
    printf("The size_t type used with array of numbers is as follows ");
    array <size_t, 15> arr;
    for (size_t p = 0; p != arr.size(); ++p)
        arr[p] = p;
    for (size_t p = arr.size()-1; p <arr.size(); --p)
        cout<<arr[p] << " ";
}
