#include<bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Print range
    int x, y;
    cin >> x >> y;
    while(x <= y)
    {
        cout << x << endl;
        x++;
    }

    // 2. Line of characters
    int n, i = 1;
    char c;
    cin >> n;
    cin >> c;
    while (i <= n){
        cout << c;
        i++;
    }

    // 3. Print left angled triangle
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // 4. Print face down left angled triangle
    int n;
    cin >> n;
    for (int i = 0; i < n; i++ ){
        for(int j = 0; j < n - i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // 5. Special Average
    int n, num, sumodd = 0, sumeven = 0, averageodd = 0, averageeven = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        if (i % 2 == 0){
            sumeven += num;
            averageeven = sumeven / (n/2);
        }
        else{
            sumodd += num;
            averageodd = sumodd / (n/2);
        }
    }
    cout << averageeven << " " << averageodd;
}
