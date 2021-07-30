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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return nullptr; 
        if(head->next == head) return head; 
        
        ListNode *slow = head, *fast = head; 
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next; 
            slow = slow->next; 
            if(slow == fast) break; 
        }
        if(slow!=fast) return NULL; 
        
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next; 
        }
        
        return slow;
    }
};