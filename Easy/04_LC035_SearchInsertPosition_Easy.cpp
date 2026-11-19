// LeetCode 35 - Search Insert Position (Easy)
// Approach: Binary search for the first position whose value is >= target.
// Time: O(log n), Space: O(1)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = (int)nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) left = mid + 1;
            else right = mid;
        }
        return left;
    }
};
