#include<bits/stdc++.h>
using namespace std;

//*******Heap building***********
//Function to convert from complete binary tree to heap tree
//time complexity = O()
void heapify(int arr[], int s, int i) //i for root, s for size
{
    int leftChild = 2 * i + 1;  //left child
    int rightChild = 2 * i + 2;  //right child
    int max = i;  //maximum child for each parent, initialy = root
    //check if the left child > root(max)
    if(arr[leftChild] > arr[max] && leftChild < s)
        max = leftChild;
    //check if the right child > root(max)
    if(arr[rightChild] > arr[max] && rightChild < s)
        max = rightChild;
    //swap if the max value is changed
    if(max != i){
        swap(arr[i], arr[max]);
    //repeat the same definition for the node changed(swapped) with max
    heapify(arr, s, max);
    }
}

//function to loop over each level to check both right and left children for each parent in each level
void buildHeap(int arr[], int s)
{
    for(int i = s/2 - 1; i >= 0; i--)
        heapify(arr, s, i);
}

//************Sorting**********************
//function to sort the heap array
void heapSort(int arr[], int s)
{
    buildHeap(arr, s);
    for(int i = s-1; i >= 0; i--){
        //put the first element on the last index as it is the maximum(root); this is the rule of heap tree
        swap(arr[0], arr[i]);
        //repeat the definition of heapify function to modify the tree to heap
        heapify(arr, i, 0);
    }
}

void print(int arr[], int s)
{
    for(int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {90, 10, 40, 70, 5};
    int s = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, s);
    print(arr, s);
    return 0;
}
