# [1523. Count Odd Numbers in an Interval Range](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/)
```
class Solution {
public:
    int countOdds(int low, int high) {
        int counter = 0;
        for (int i = low; i <= high; i++){
            if(i % 2 != 0)
                counter ++;
        }
        return counter;
    }
};
// Time complexity = O(n)
```

```
class Solution {
public:
    int countOdds(int low, int high) {
        return ((high + 1) / 2) - (low / 2);
    }
};
// Time complexity = O(1)
```

# [1491. Average Salary Excluding the Minimum and Maximum Salary](https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/?envType=study-plan&id=programming-skills-i)
```
class Solution {
public:
    double average(vector<int>& salary) {
        int mimimum= INT_MAX, maximum = 0;
        double sum = 0;
        for(int i = 0; i < salary.size(); i++){
            sum += salary[i];
            mimimum = min(salary[i], mimimum);
            maximum = max(salary[i], maximum);
        }
        return (sum - (maximum + mimimum)) / ((salary.size()) - 2);
    }
};
//Time complexity = O(n)
```

# [191. Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/description/?envType=study-plan&id=programming-skills-i)
```
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0;
        while(n > 0){
            if(n&1 != 0){
                counter++;
            }
            n = n >> 1;
        }
        return counter;
    }
};
//Time complexity = O(n)
```

# [1281. Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/?envType=study-plan&id=programming-skills-i)
```
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int multiply = 1;
        while(n > 0){
            sum += (n % 10);
            multiply *= (n % 10);
            n /= 10;
        }
        return multiply - sum;
    }
};
//Time complexity = O(n)
```
# [976. Largest Perimeter Triangle](https://leetcode.com/problems/largest-perimeter-triangle/description/?envType=study-plan&id=programming-skills-i)
```
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxPerimeter = 0;
        for(int i = 0; i <= nums.size() - 3; i++){
            if(nums[i] + nums[i+1] > nums[i+2])
                maxPerimeter = max(maxPerimeter, nums[i] + nums[i+1] + nums[i+2]);
        }
        return maxPerimeter;
    }
};
//Time complexity = O(nlog(n))
```

# [1779. Find Nearest Point That Has the Same X or Y Coordinate](https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/?envType=study-plan&id=programming-skills-i)
```
#include<bits/stdc++.h>
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int smallest_distance = INT_MAX, ans = -1;
        for(int i = 0; i < points.size(); i++){
            if (x == points[i][0] || y == points[i][1]){
                int dis = abs(y-points[i][1]) + abs(x-points[i][0]);
                if(dis < smallest_distance){
                    smallest_distance = dis;
                    ans = i;
                }
            } 
        }
        return ans;
    }
};
//Time complexity = O(n)
```

# [1822. Sign of the Product of an Array](https://leetcode.com/problems/sign-of-the-product-of-an-array/?envType=study-plan&id=programming-skills-i)
```
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product = 1, ans = 0;
        for(int i = 1; i <= nums.size(); i++){
            product *= i;
            if (product > 0)
                ans = 1;
            else if (product < 0)
                ans = -1;
            else
                ans = 0;
        }
        return ans;
    }
};
//Time complexity = O(n)
```

***This code is suitabe for array with small values only, but it returns run time error for bigger values.***
***To avoid this error, we will check if any value equals 0 in the array, then it returns 0. We then we will calculate number of negative values, if the number of them is even, so it returns positive value which makes it returns 1, and if odd, the returned value will be negative so the output will be -1.***

```
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative_values = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0)
                return 0;
            else if (nums[i] < 0)
                negative_values ++;
        }
        if (negative_values % 2 == 0)
            return 1;
        else 
            return -1;
    }
};
//Time complexity = O(n)
```
