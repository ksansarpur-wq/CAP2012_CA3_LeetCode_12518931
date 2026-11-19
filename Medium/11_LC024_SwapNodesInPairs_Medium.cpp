// LeetCode 24 - Swap Nodes in Pairs (Medium)
// Approach: Use a dummy node and swap links for each adjacent pair.
// Time: O(n), Space: O(1)
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        while (prev->next != nullptr && prev->next->next != nullptr) {
            ListNode* first = prev->next;
            ListNode* second = first->next;
            first->next = second->next;
            second->next = first;
            prev->next = second;
            prev = first;
        }
        return dummy.next;
    }
};
