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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1 || head == NULL || head->next == NULL) return head; 
        
        ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }
        
        ListNode *curr = NULL, *nxt = head, *prev = NULL; 
        int count = 0; 
        
        while(nxt && count < k){
            prev = curr; 
            curr = nxt; 
            nxt = nxt->next; 
            curr->next = prev; 
            count++; 
        }
        if(nxt) head->next = reverseKGroup(nxt, k); 
        
        return curr; 
    }
};