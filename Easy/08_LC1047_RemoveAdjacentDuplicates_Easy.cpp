// LeetCode 1047 - Remove All Adjacent Duplicates In String (Easy)
// Approach: Use a string as a stack; pop when the incoming character matches the top.
// Time: O(n), Space: O(n)
class Solution {
public:
    string removeDuplicates(string s) {
        string st;
        for (char ch : s) {
            if (!st.empty() && st.back() == ch) st.pop_back();
            else st.push_back(ch);
        }
        return st;
    }
};
