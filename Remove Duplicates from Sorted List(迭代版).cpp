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
    ListNode *deleteDuplicates(ListNode *head) {
        if (!head) return head;
        ListNode *pre = head, *ne = head->next;
        
        while(ne) {
            if(pre->val == ne->val) {
                pre->next = ne->next;
                delete ne;
            }
            else
                pre = ne;
            ne = ne->next;
        }
        return head;
    }
};
