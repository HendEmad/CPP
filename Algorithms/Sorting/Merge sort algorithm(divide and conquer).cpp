#include<bits/stdc++.h>
using namespace std;

// This function performs merge(conqour) to two arrays
//l--> left index, r --> right index, m --> middle index
void Merge(int arr[], int l, int m, int r) //m = l + (r-l) / 2 //l=0, r=6, m=3
{
    int i, j, k;
    int nLeft = m - l + 1; //size of left sub-array   //4
    int nRight = r - m; //size of right sub-array     //3
    // two dynamic arrays as the size is not constant
    int *leftArray = new int[nLeft], *rightArray = new int[nRight];

    //put elements into their arrays
    //loop to put the left elements on their left array
    for(i = 0; i < nLeft; i++)
        leftArray[i] = arr[l + i]; //leftArray[0] = arr[0],...
    //loop to put the right elemetns on their right array
    for(j = 0; j < nRight; j++)
        rightArray[j] = arr[m+1+j];  //rightArray[0] = [4],000

    //comparing
    i = j = 0;
    k = l;  //0

    while(i < nLeft && j < nRight){
        if(leftArray[i] <= rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        }
        else{
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    //remain elements
    while(i < nLeft){
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while(j < nRight){
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

//sorting function
void mergeSort(int arr[], int l, int r) //l=0; r=6
{
    //base case
    if(l < r){
        int m = l + (r - l) / 2; //3
        mergeSort(arr, l, m); //sort left sub-array
        mergeSort(arr, m + 1, r); //sort right sub-array

        Merge(arr, l, m, r);
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
    int arr[] = {60, 10, 20, 5, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n-1);
    print(arr, n);
}
