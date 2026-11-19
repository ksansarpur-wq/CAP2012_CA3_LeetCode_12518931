// LeetCode 283 - Move Zeroes (Easy)
// Approach: Write non-zero elements forward, then fill remaining positions with zero.
// Time: O(n), Space: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;
        for (int value : nums) {
            if (value != 0) nums[write++] = value;
        }
        while (write < (int)nums.size()) nums[write++] = 0;
    }
};
