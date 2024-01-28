#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Problem 1" << "\n";
    int n;
    cin >> n;
    int row = 1;
    while (row <= n){
        int stars_count = 1;

        while(stars_count <= n - row){
            cout << " ";
            stars_count ++;
        }

        stars_count = 1;
        while (stars_count <= 2 * row - 1){
            cout << "*";
            stars_count ++;
        }
        cout << "\n";
        row ++;
    }

    row = n;
    while (row >= 1){
        int stars_count = 1;

        while (stars_count <= n - row){
            cout << " ";
            stars_count ++;
        }

        stars_count = 1;
        while (stars_count <= 2 * row - 1){
            cout << "*";
            stars_count ++;
        }
        cout << "\n";
        row --;
    }


    cout << "Problem 2" << "\n";
    int n2;
    cin >> n2;
    for(int i = 0; i < n2; i++){
        if (i % 8 == 0 || (i % 3 == 0 && i % 4 == 0)){
            cout << i << " ";
        }
    }

    cout << "\n" <<  "Problem 3" << "\n";
    int n3, result = 0, current_number = 0, cnt = 0;
    cin >> n3;
    while (cnt < n3){
        if (current_number % 3 == 0 && current_number % 4 != 0){
            cout << current_number << " ";
            cnt ++;
        }
        current_number ++;
    }

    cout << "Problem 4" << "\n";
    int t;
    cin >> t;
    while(t > 0){
        int n;
        cin >> n;
        int pos = 0, result;
        while (pos < n){
            int value;
            cin >> value;

            if (pos == 0)
                result = value;
            else if (value < result)
            result = value;
            pos ++;
        }
        cout << result << "\n";
        --t;
    }
}
