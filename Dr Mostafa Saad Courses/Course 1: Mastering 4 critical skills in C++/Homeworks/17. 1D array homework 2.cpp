#include<bits/stdc++.h>
using namespace std;
# define MAX 10000
int main()
{
    // program 1
    int n, firstMin = MAX, secMin = MAX, thirdMin = MAX;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < firstMin){
            thirdMin = secMin;
            secMin = firstMin;
            firstMin = arr[i];
        }
        else if(arr[i] < secMin){
            thirdMin = secMin;
            secMin = arr[i];
        }
        else if(arr[i] < thirdMin){
            thirdMin = arr[i];
        }
    }
    cout << firstMin << " " << secMin << " " << thirdMin << endl;


    // program 2
    int n, a[200], q;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> q;
    while(q--){
        int num;
        cin >> num;
        int pos = -1;
        for(int i = n - 1; i >= 0; i--){
            if(a[i] == num){
                pos = i;
                break;
            }
        }
        cout << pos << "\n";
    }

    // Problem 3
    int n;
    cin >> n;
    const int MAX = 270 + 500 + 1;
    int freq[MAX] = {0};

    for(int i = 0; i < n; i++){
        int value;
        cin >> value;

        value += 500; // shifting; to get rid of negative values
        freq[value] ++;
    }
    int mx_pos = 0;
    for(int i = 0; i < MAX; i++){
        if(freq[mx_pos] < freq[i])
            mx_pos = i;
    }
    cout << mx_pos - 500 << " has repeated " << freq[mx_pos] << "times";
}
