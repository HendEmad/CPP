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
        int mimimum= INT_MAX, maximum = 0, sum = 0;
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
