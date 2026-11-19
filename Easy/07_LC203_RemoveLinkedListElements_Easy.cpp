// LeetCode 203 - Remove Linked List Elements (Easy)
// Approach: Dummy node simplifies deleting matching nodes, including the head.
// Time: O(n), Space: O(1)
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* current = &dummy;
        while (current->next != nullptr) {
            if (current->next->val == val) current->next = current->next->next;
            else current = current->next;
        }
        return dummy.next;
    }
};
