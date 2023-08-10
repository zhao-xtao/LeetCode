/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head, *low = head, *ans = head;
        if (head == nullptr) return nullptr;
        while(fast) {
            fast = fast->next;
            low = low->next;
            if (fast == nullptr || fast->next == nullptr) return nullptr;
            fast = fast->next;
            if (fast == low) {
                while(ans != low) ans = ans->next, low = low->next;
                break;
            }
        }
        return ans;
    }
};
