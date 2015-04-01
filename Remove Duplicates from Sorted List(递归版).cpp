/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    static void recur(ListNode *pre, ListNode *cur) {
        if(cur)
            if (pre->val == cur->val) {
                pre->next = cur->next;
                delete cur;
                recur(pre, pre->next);
            }
            else
                recur(pre->next, cur->next);
    }
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if(!head)
            return head;
        ListNode pre(head->val+1);
        pre.next = head;
        recur(&pre, head);
        return pre.next;
    }
};
