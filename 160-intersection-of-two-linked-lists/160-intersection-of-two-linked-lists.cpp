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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1 = headA, *t2 = headB, *ans=nullptr; 
        while(t1!=nullptr){
            // negating the values 
            t1->val = -t1->val; 
            t1 = t1->next; 
        }
        while(t2!=nullptr){
            // find intersection
            if(t2->val < 0) {
                ans = t2;
                break; 
            }
            t2 = t2->next; 
        }
        t1 = headA; 
        while(t1!=nullptr){
            t1->val = -t1->val; 
            t1 = t1->next; 
        }
        return ans; 
        
    }
};