// LeetCode 80 - Remove Duplicates from Sorted Array II (Medium)
// Approach: Keep at most two copies; compare with the element two positions behind the write index.
// Time: O(n), Space: O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0;
        for (int value : nums) {
            if (write < 2 || value != nums[write - 2]) nums[write++] = value;
        }
        return write;
    }
};
