//************PROGRAM 1************************
#include<bits/stdc++.h>
using namespace std;

// Convert passing the inputs into function
void set_(int arr[], int size_)
{
    cout << "Enter 5 numbers: " << endl;
    for(size_t i = 0; i < size_; i++){
        cin >> arr[i];
    }
}

// Convert passing the inputs into function
void print(int arr[], int size_)
{
    for(size_t i = 0; i < size_; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int array_[5];

//
//    for(size_t i = 0; i < 5; i++){
//        cin >> arr[i];
//    }
//
//    for(size_t i = 0; i < 5; i++){
//        cout << arr[i];
//    }


    // set_(&arr[0]) // We must pass the first element
    // OR
    set_(array_, 5);
    print(array_, 5);

    return 0;
}
