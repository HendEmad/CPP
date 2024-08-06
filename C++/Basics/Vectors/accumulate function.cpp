#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector <int> nums;
    int sum = 0;
    nums = {10, 20, 30, 40, 50};
    sum = accumulate(nums.begin(), nums.end(), 0); // 0 is the initial valuen for the summation
    cout << sum;  // 150
}