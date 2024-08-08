#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    for(int i = 0; i < 3; i++)
        cout << arr[i] << " ";  // 1 2 3
        cout << endl;
    cout << "/////////////////////" << endl;

    //The previous code can be written by using ranged for loop
    for(int i : arr)
        cout << i << " ";  // 1 2 3
        cout << endl;

    // The ranged for loop iterate over a collection as array, taking one step for each iteration.
    // It has one cons, it consumes more instructions than the normal for loop.
    // For example: for loop needs about 4 instructions, but ranged for loop needs about 14 instructions which is very much in comparing with the normal for loop.
    return 0;
}
