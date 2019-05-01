/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#define NEXT(x) (x == NULL ? NULL : x->next)
#define VALUE(x) (x == NULL ? 0 : x->val)

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int v1, v2, v3;
        ListNode* p = new ListNode(0);
        ListNode* l = p;
        while(l1 || l2) {
            v1 = VALUE(l1);
            v2 = VALUE(l2);
            v3 = v1 + v2;
            if(v3 > 9) {
                if(l1->next)
                    l1->next->val++;
                else
                    l1->next = new ListNode(1);
                v3 = v3 % 10;
            }
            p->next = new ListNode(v3);
            p = p->next;
            l1 = NEXT(l1);
            l2 = NEXT(l2);
        }
        return l->next;
    }
};