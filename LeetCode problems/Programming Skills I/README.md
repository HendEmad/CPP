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
