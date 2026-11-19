// LeetCode 84 - Largest Rectangle in Histogram (Hard)
// Approach: Monotonic increasing stack of indices; calculate rectangle when a shorter bar arrives.
// Time: O(n), Space: O(n)
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int best = 0;
        int n = (int)heights.size();
        for (int i = 0; i <= n; ++i) {
            int currentHeight = (i == n ? 0 : heights[i]);
            while (!st.empty() && heights[st.top()] > currentHeight) {
                int height = heights[st.top()];
                st.pop();
                int leftBoundary = st.empty() ? -1 : st.top();
                int width = i - leftBoundary - 1;
                best = max(best, height * width);
            }
            st.push(i);
        }
        return best;
    }
};
