#include<bits/stdc++.h>
using namespace std;

// This algorithm have two procedures: partitioning & sorting
// partitioning function: to put each element in its right place
//right place means to be sorted in its position

int partition1(int arr[], int beginIdx, int endIdx)
{
    int i = beginIdx, j = endIdx;
    int pivotLoc = i; // set pivot to 1st element
    while(true){
        while(arr[pivotLoc] <= arr[j] && pivotLoc != j)
            j--;
        if(pivotLoc == j) //the element is sorted
            break;
        else if(arr[pivotLoc] > arr[j]){
            swap(arr[j], arr[pivotLoc]);
            pivotLoc = j;
        }
        while(arr[pivotLoc] >= arr[i] && pivotLoc != i)
            i++;

        if(pivotLoc == i)
            break;
        else if(arr[pivotLoc] < arr[i]){
            swap(arr[i], arr[pivotLoc]);
            pivotLoc = i;
        }
    }
    return pivotLoc;
}

//Another partitioning
//1- increase i till element greater than pivot
//2- decrease j till element less than pivot
//3- swap the rwo elements in case true for eacg case
//4- once crossing, the element is sorted, divide from the pivot into right and left subtree and then repeat steps

int partition2(int arr[], int l, int r)
{
    int p = arr[l];
    int i = l, j = r;
    while(i < j){
        do{
            i++;
        }while(arr[i] <= p);
        do{
            j--;
        }while(arr[j] > p);

    if(i < j)
        swap(arr[i], arr[j]);
    }
    //put pivot in the right place(j)
    swap(arr[l], arr[i]);
    return j;
}

//function for sorting
void quickSort1(int arr[], int l, int r) //l for left index and r for right index of the array
{
    if(l < r){
        int pivot = partition1(arr, l, r);
        quickSort1(arr, l, pivot - 1); // left sub-array
        quickSort1(arr, pivot + 1, r); //right sub-array
 }
}

int main()
{
    int arr[] = {2, -1, 4, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort1(arr, 0, n-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
