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
        stack<int> s1, s2;
        for (ListNode *t1 = l1; t1; t1 = t1->next) s1.push(t1->val);
        for (ListNode *t2 = l2; t2; t2 = t2->next) s2.push(t2->val);
        int t = 0;
        ListNode *l3 = nullptr;
        while(!s1.empty() || !s2.empty() || t) {
            if (!s1.empty()) t += s1.top(), s1.pop();
            if (!s2.empty()) t += s2.top(), s2.pop();
            ListNode *new_head = new ListNode(t % 10);
            new_head->next = l3;
            l3 = new_head;
            t /= 10;
        }
        if (t) {
            ListNode *new_head = new ListNode(t % 10);
            new_head->next = l3;
            l3 = new_head;
        }
        return l3;
    }
};
