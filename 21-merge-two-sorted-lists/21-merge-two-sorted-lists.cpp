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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *t1 = list1, *t2 = list2;
        
        if(!t1 && !t2) return NULL; 
        if(!t1 && t2) return t2; 
        if(t1 && !t2) return t1;
        
        ListNode *nw = new ListNode(0), *nwT = nw;
        while(t1 && t2){
            if(t1->val < t2->val){
                nwT->next = new ListNode(t1->val); 
                nwT = nwT->next; 
                t1 = t1->next; 
            }
            else if(t1->val > t2->val){
                nwT->next = new ListNode(t2->val); 
                nwT = nwT->next; 
                t2 = t2->next; 
            }
            else if(t1->val == t2->val){
                nwT->next = new ListNode(t2->val); 
                nwT = nwT->next; 
                t2 = t2->next;
                
                nwT->next = new ListNode(t1->val); 
                nwT = nwT->next; 
                t1 = t1->next; 
            }
        }
        
        if(!t1 && t2) {
            nwT->next = t2; 
        }
        if(t1 && !t2) {
            nwT->next = t1; 
        }
        
        return nw->next; 
    }
};