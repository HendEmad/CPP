//**********************PROGRAM 2*******************
#include<bits/stdc++.h>
using namespace std;


//Function for swapping two elements
int swap_(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int list_[] = {6, 5, 4, 1, 2};
    //The task is to re-arrange this array;; Sorting

    /*
    Bubble sort algorithm
    pass 1:
                5 6 4 1 2
                5 4 6 1 2
                5 4 1 6 2
                5 4 1 2 6
    pass 2:
                5 4 1 2 6
                4 5 1 2 6
                4 1 5 2 6
                4 1 2 5 6
    pass 3:
                4 1 2 5 6
                1 4 2 5 6
                1 2 4 5 6
                1 2 4 5 6
    */

    for(size_t i = 0; i < 3; i++){
     for(size_t j = 0; j < 4-i; j++){
        if(list_[j] > list_[j+1]){
            swap(list_[j], list_[j+1]);
        }
     }
    }

    for(size_t i = 0; i < 5; i++){
        cout << list_[i] << " ";
    }

    return 0;
}
