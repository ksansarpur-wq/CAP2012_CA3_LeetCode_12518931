// LeetCode 2520 - Count the Digits That Divide a Number (Easy)
// Approach: Check each digit; count non-zero digits that divide num evenly.
// Time: O(number of digits), Space: O(1)
class Solution {
public:
    int countDigits(int num) {
        int original = num, count = 0;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && original % digit == 0) ++count;
            num /= 10;
        }
        return count;
    }
};
