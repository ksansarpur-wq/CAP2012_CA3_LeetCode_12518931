// LeetCode 977 - Squares of a Sorted Array (Easy)
// Approach: Two pointers compare absolute values from both ends and write squares backward.
// Time: O(n), Space: O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1, write = n - 1;
        while (left <= right) {
            int l = nums[left] * nums[left];
            int r = nums[right] * nums[right];
            if (l > r) {
                result[write--] = l;
                ++left;
            } else {
                result[write--] = r;
                --right;
            }
        }
        return result;
    }
};
