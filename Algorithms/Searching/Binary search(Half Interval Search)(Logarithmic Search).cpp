// The idea is based on divide and conquer
#include<bits/stdc++.h>
using namespace std;

//binary searching in iterative way
int binarySearch(int arr[], int l, int h, int key)
{
    while(l <= h){
        //find the index of middle element
        int m  = (l+h) / 2;
        //return the element if it is the first one in the array
        if(arr[m] == key) //best case
            return m;
        //search in the left sub-array if the element is greater than the middle one
        if(key < arr[m])
            h = m - 1;
        //search in the right sub-array if the element is less then the middle one
        if(key > arr[m])
            l = m + 1;
    }
    return -1;
}

//binary searching in recursive way
int RecBinarySearch(int arr[], int l, int h, int key)
{
    if(h >= l){
        int m = (l+h) / 2;
        if(arr[m] == key)
            return m;
        if(arr[m] > key)
            RecBinarySearch(arr, l, m-1, key);
        return RecBinarySearch(arr, m+1, h, key);
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int result = binarySearch(arr, 0, size-1, num);
    int recRes = RecBinarySearch(arr, 0, size - 1, num);

    //Iteration way
    if(result == -1)
        cout << "the num " << num << " is not exist" << endl;
    else
        cout << "the num " << num << " ix exist in index " << result << endl;

    //Recursive way
    cout << "\t\t\nRecusrsion way\t\t\n";
    if(recRes == -1)
        cout << "the num " << num << " is not exist" << endl;
    else
        cout << "the num " << num << " ix exist in index " << recRes << endl;

}
