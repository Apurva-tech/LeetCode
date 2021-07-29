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
    ListNode* deleteDuplicates(ListNode* head) { 
        if(head == NULL || head->next == NULL) return head; 
        ListNode *temp = new ListNode(-1); 
        ListNode *itr = temp, *curr = head->next;
        itr->next = head; 
        while(curr!=NULL){
            bool flag = false;
            while(curr!=NULL && itr->next->val == curr->val){
                flag = true; 
                curr = curr->next; 
            }
            
            if(flag) itr->next = curr;
            else itr = itr->next;
            
            if(curr != NULL) curr = curr->next; 
            
        }
        return temp->next; 
        
    }
};