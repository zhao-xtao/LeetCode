/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode l3;
        ListNode *node = &l3;
        int t = 0;
        while(l1 || l2) {
            if (l1) t += l1->val, l1 = l1->next;
            if (l2) t += l2->val, l2 = l2->next;
            node->next = new ListNode(t % 10);
            node = node->next;
            t /= 10;
        }
        if (t) node->next = new ListNode(t);
        return l3.next;
    }
};
