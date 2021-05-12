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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return NULL; 
        ListNode *temp1, *temp2, *curr, *new_head = head->next; 
        temp1 = head; 
        
        if(head->next == NULL) return head; 
        while(true){
            curr = temp1->next; 
            temp2 = curr->next; 
            curr->next = temp1; 
            if(temp2 == NULL || temp2->next == NULL){
                temp1->next = temp2;
                break; 
            }
            temp1->next = temp2->next; 
            temp1 = temp2;
        }
        
        return new_head; 
        
    }
};