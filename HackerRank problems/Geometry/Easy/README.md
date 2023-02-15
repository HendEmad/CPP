# [Points On a Line](https://www.hackerrank.com/challenges/points-on-a-line?isFullScreen=true)
```
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int x0, y0;
    int x, y;
    bool test_x = true, test_y = true;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if (i == 0){
            x0 = x;
            y0 = y;
        }
        if(i >= 1){
            if (x != x0)
                test_x = false;
            if(y != y0)
                test_y = false; 
        }
    }
    
    if(test_x || test_y) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
//time complexity = O(n)
```
