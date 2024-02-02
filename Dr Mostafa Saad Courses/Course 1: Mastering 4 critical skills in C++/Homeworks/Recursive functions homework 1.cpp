#include<bits/stdc++.h>
using namespace std;

// Program 1
int length_3n_plus_1(int n)
{
    if (n == 1)
        return 1;

    if (n % 2 == 0){
        return 1 + length_3n_plus_1(n / 2);
    }
    else{
        return 1 + length_3n_plus_1(3 * n + 1);
    }
}

// Program 2
int my_pow(int value, int p = 2)
{
    if(p == 0)
        return 1;
    return value * my_pow(value, p - 1);
}

// Program 3
int arr_max(int arr[], int len)
{
    if(len == 1)
        return arr[0];
    int sub_result = arr_max(arr, len - 1);
    return max(sub_result, arr[len - 1]);
}

// Program 4
int arr_sum(int arr[], int len)
{
    if(len == 1)
        return arr[0];

    int sub_sum = arr_sum(arr, len - 1);
    // if len = 5, get the sum of the first 4 numbers and add the 5th one to it
    return sub_sum + arr[len - 1];
}

// Program 5
double arr_average(double arr[], int len)
{
    if(len == 1)
        return arr[0];
    double sub_result = arr_average(arr, len - 1);
    sub_result = sub_result * (len - 1);  // convert average to sum
    return (sub_result + arr[len - 1]) / len;
}

int main()
{
    // program 1
    cout << length_3n_plus_1(6);

    // program 2
    cout << my_pow(3);

    // Program 3
    int arr[] = {1, 8, 2, 10, 3};
    cout << arr_max(arr, 5);

    // Program 4
    int arr[] = {1, 8, 10, 2, 3};
    cout << arr_sum(arr, 5);

    // Program 5
    double arr[] = {1, 8, 2, 10, 3};
    cout << arr_average(arr, 5);
}
