#include<bits/stdc++.h>
using namespace std;

//algorithm function
void insertionSort(int arr[], int n) // n: size of the array
{
    //loop iterates over the elements of the array starting with the second one
    //we will consider the first element is sorted and will sort the other elements based on this first element.
    for(int i = 1; i < n; i++){ //80 90 60 30 50 70 40
        int key = arr[i]; //90
        int j = i - 1; //0

        //loop to compare each element with the remain previous elements
        while(j >= 0 && arr[j] > key){ //f // '<' for descending
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {80, 90, 60, 30, 50, 70, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    print(arr, n);
}
