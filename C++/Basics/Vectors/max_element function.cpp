#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <int> nums;
    nums = {10, 25, 63, 29, 23};
    auto maxx = max_element(nums.begin(), nums.end());
    cout << *maxx;  // 63

    //or
    int maxx2 = *max_element(nums.begin(), nums.end());
    cout << *maxx;  // 63

    //or
    vector<int>::iterator maxx3 = max_element(nums.begin(), nums.end());  // It explicitly indicates that the iterator is for a vector of integers
    cout << *maxx;  // 63


    //or
    cout << *max_element(nums.begin(), nums.end());  // 63
}