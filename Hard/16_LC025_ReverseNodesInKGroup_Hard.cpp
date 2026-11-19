// LeetCode 25 - Reverse Nodes in k-Group (Hard)
// Approach: Find the kth node, reverse the group links, and connect it to the previous group.
// Time: O(n), Space: O(1)
class Solution {
private:
    ListNode* getKth(ListNode* current, int k) {
        while (current != nullptr && k > 0) {
            current = current->next;
            --k;
        }
        return current;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* groupPrev = &dummy;
        while (true) {
            ListNode* kth = getKth(groupPrev, k);
            if (kth == nullptr) break;
            ListNode* groupNext = kth->next;
            ListNode* prev = groupNext;
            ListNode* curr = groupPrev->next;
            while (curr != groupNext) {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            ListNode* oldGroupStart = groupPrev->next;
            groupPrev->next = kth;
            groupPrev = oldGroupStart;
        }
        return dummy.next;
    }
};
