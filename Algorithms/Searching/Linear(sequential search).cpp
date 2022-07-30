#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {90, 10, 40, 70, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter a num to search: ";
    cin >> num;
    if(linearSearch(arr, size, num) == -1)
        cout << "The num " << num << " is not exist" << endl;
    else
        cout << "The num " << num << " is found at index " << linearSearch(arr, size, num) << endl;
}
