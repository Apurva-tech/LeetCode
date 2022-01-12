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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next == NULL) return head;
        ListNode small(0); 
        ListNode big(0);
        ListNode *sm = &small, *bg = &big; 
        while(head!=nullptr){
            if(head->val < x){
                sm -> next = head; 
                sm = sm->next; 
            }
            else{
                bg->next = head;    
                bg = bg->next; 
            }
            head = head->next; 
        }
        // cout << bg->val; 
        bg->next = NULL; 
        
        sm->next = big.next; 
        
        return small.next; 
    }
};