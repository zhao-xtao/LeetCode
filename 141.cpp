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
    bool hasCycle(ListNode *head) {
        ListNode *p = head, *q = head;
        if (!p) return false;
        while(p) {
            p = p->next;
            q = q->next;
            if (!q || !q->next) return false;
            q = q->next;
            if (p == q) break;
        }
        return true;
    }
};
