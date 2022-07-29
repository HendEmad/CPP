#include<bits/stdc++.h>
using namespace std;

// Algorithm function
void selectionSort(int arr[], int n) //n --> array size
{
    int minIdx;
    //for loop from the first index alogn the array to the last index's previous element
                                    // 0  1  2  3  4  5
    for(int i = 0; i < n - 1; i++){ // 60 40 50 30 10 20
        //Initialize the minIndx with the ith element
        minIdx = i; //0 //60
        //loop for comparing each ith element with its next one, starting from the (j+1)th element
        for(int j = i + 1; j < n; j++)
            if(arr[j] < arr[minIdx])
                minIdx = j;
        swap(arr[minIdx], arr[i]);
    }
}

//****************Recursion****************************
//function to find the minimum index
int minIdx(int arr[], int i, int j)
{
    if(i == j)
        return i;
    int k = minIdx(arr, i+1, j);
    return (arr[i] < arr[k]) ? i : k;
}

//function of selectionSort
void selectionSortRec(int arr[], int n, int index = 0)
{
    if(index == n)
        return;
    int k = minIdx(arr, index, n - 1);
    if(k != index)
        swap(arr[k], arr[index]);
    selectionSortRec(arr, n, index+1);
}

//function to print array elements
void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {60, 40, 50, 30, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Array after selection sort: \n";
    print(arr, n);
}
