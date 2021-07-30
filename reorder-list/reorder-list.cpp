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
    ListNode* reverse(ListNode *head){
        if(head == NULL || head->next == NULL) return head; 
        ListNode* t = reverse(head->next); 
        head->next->next = head; 
        head->next = NULL; 
        return t; 
    }
    
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return; 
        ListNode *temp = head; int n =0; 
        while(temp!=NULL){
            n++; 
            temp = temp->next; 
        }
        temp = head; 
        if(n%2!=0){
            for(int i = 1; i <= n/2 ; i++)
            temp = temp->next;
        }
        
        else{
            for(int i = 1; i < n/2 ; i++)
            temp = temp->next;
        }
           
        ListNode *nwHead = temp->next, *nxt = head->next,*t; 
        
        nwHead = reverse(nwHead); 
         
        temp->next = NULL; 
        temp = head; 
        int count = 1; 
        
        while(nwHead!=NULL){
            nxt = temp->next; 
            temp->next = nwHead; 
            t = nwHead; 
            nwHead = nwHead->next; 
            t->next = nxt; 
            // increase ptr
            temp = nxt; 
        }
        
    }
};