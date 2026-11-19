// LeetCode 876 - Middle of the Linked List (Easy)
// Approach: Slow pointer moves one step; fast pointer moves two steps.
// Time: O(n), Space: O(1)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
