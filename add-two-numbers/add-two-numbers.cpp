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
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode res(0); 
        ListNode *t1 = l1,*t2 = l2; 
        ListNode *ans = &res, *temp, *prev = NULL; 
        int carry = 0, sum; 
        while(t1!=NULL || t2!=NULL){
            int a,b; 
            if(t1){
                a = t1->val; 
                t1=t1->next;
            }else{
                a = 0; 
            }
            
            if(t2){
                b = t2->val; 
                t2=t2->next;
            }else{
                b = 0; 
            }
            
            sum = carry + a + b; 
            
            carry = (sum >= 10) ? 1 : 0; 
            sum = sum%10; 
            // ListNode p(sum); 
            ans->next = new ListNode(sum); 
            ans = ans->next; 
            
        }
        
        if(carry > 0){
            ans->next = new ListNode(carry); 
        }
        
        return res.next; 
    }
};