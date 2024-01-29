#include<bits/stdc++.h>
using namespace std;

int main()
{
    // program 1
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool increasing = 1;
    for(int i = 1; i < n; i++){
        if (arr[i]  < arr[i-1]){
            increasing = 0;
            break;
        }
    }
    if (increasing)
        cout << "YES\n";
    else
        cout << "NO\n";


    // Problem 2
    int n;
    cin >> n;
    int arr[n];
    int max_val = -10000, min_val = 10000;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max_val)
            max_val = arr[i];
        if (arr[i] < min_val)
            min_val = arr[i];
    }

    for (int i = 0; i < n; i++){
        if (arr[i] == min_val)
            arr[i] = max_val;
        else if (arr[i]  == max_val)
            arr[i] = min_val;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    // Problem 3
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << arr[0] << " ";
    for (int i = 1; i < n; i++){
        assert(arr[i] >= arr[i-1]);  // make sure input is ordered
        if (arr[i] != arr[i - 1])
            cout << arr[i] << " ";
    }


}
