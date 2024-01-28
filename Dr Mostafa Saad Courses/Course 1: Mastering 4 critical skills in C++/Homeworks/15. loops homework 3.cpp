#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Problem 1..." << "\n";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if (str == "no" || str == "No" || str == "nO" || str == "NO"
            || str == "on" || str == "ON" || str == "oN" || str == "On"){
            cout << str << " ";
        }
    }

    cout << "Problem 2 ...Reverse number" << "\n";
    int n2;
    cin >> n2;

    int number = 0;
    while (n2 > 0){
        int last_digits = n2 % 10;
        n2 /= 10;
        number = number * 10 + last_digits;
    }
    cout << number << " " << number * 3 << "\n";

    cout << "\n" << "Problem 3... Multiplication table" << "\n";
    int n3, m;
    cin >> n3 >> m;
    int i = 1;
    while (i <= n3){
        int j = 1;
        while (j <= m){
            cout << i << " x " << j << " = " << i * j << "\n";
            j++;
        }
        i ++;
    }

    cout << "\n" << "Problem 4 ... Special sum" << "\n";
    int t;
    cin >> t;
    while (t){
        int n4;
        cin >> n4;
        int i = 1, sum = 0;
        while (i <= n4){
            int num;
            cin >> num;

            int k = i;
            int result = 1;
            while(k > 0){
                result *= num;
                k --;
            }
            sum += result;
             i++;
        }
        cout << sum;
        t --;
    }
}
