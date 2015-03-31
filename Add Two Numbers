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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int carry = 0, sum = 0;
        ListNode ret(0), *p = &ret;
        
        while(l1 || l2 || carry) {
            carry += (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            p->next = new ListNode(carry % 10);
            
            if(carry > 0)
                carry /= 10;
            
            p = p->next;
            l1 = (l1 ? l1->next : NULL);
            l2 = (l2 ? l2->next : NULL);
        }
        return ret.next;
    }
};
