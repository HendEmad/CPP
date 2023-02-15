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

# [Rectangular game](https://www.hackerrank.com/challenges/rectangular-game/problem?isFullScreen=true)
```
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    long long int a, b, min_a, min_b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if (i == 0){
            min_a = a;
            min_b = b;
        }
        if (a < min_a)
            min_a = a;
        if (b < min_b)
            min_b = b;
     }
    cout << min_a * min_b; 
}

//time complexity = O(n)
```
