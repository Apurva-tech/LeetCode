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
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode *left = head, *right = head;
        ListNode *first = NULL, *second = NULL;
        
        for (k; k > 1; --k)
            right = right->next;
        first = right;
        
        while (right->next)
        {
            left = left->next;
            right = right->next;
        }
        second = left;
        
        k = first->val;
        first->val = second->val;
        second->val = k;
        
        return head;
    }
};