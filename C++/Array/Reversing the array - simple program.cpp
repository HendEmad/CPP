
#include<iostream>
using namespace std;

// Function for reversing the array
void reverseArray(int arr[], int size_)
{
    for(size_t i = 0; i < size_/2; i++){
        swap(arr[i], arr[size_ - i - 1]);
    }
}

int main()
{
    int list_[] = {6, 5, 4, 1, 2};
    //The second task is to reverse the array; print 2 1 4 5 6

    /* Swap the first and the last element 2 1 4 5 6
     * Swap the second and the previous of last element 6 1 4 5 2
     */

    reverseArray(list_, 5);
    for(size_t i = 0; i < 5; i++){
        cout << list_[i] << " ";
    }

    return 0;
}
