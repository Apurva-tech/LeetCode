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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL) return head; 
        ListNode *sl = head, *fast = head; 
        while(fast!=NULL && fast->next!=NULL){
            sl = sl->next; 
            fast = fast->next->next; 
            if(sl == fast) break; 
        }
        return sl;
    }
};