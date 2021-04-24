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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1; 
        ListNode* temp2 = list2;
        
        while(temp2->next!=NULL){
            temp2 = temp2->next; 
        }
        ListNode* A=NULL; 
        ListNode* B=NULL;
        ListNode* temp3 = list1;
        int count=0; 
        while(temp3!=NULL){
            if(count == a)
                A = temp3; 
            if(count == b)
                B = temp3;
            count++; 
            temp3 = temp3->next; 
        }
        
        cout << temp2->val; 
        while(true){
            if(temp1->next == A)
            {
                temp1->next = list2;
                temp2->next = B->next;
                break; 
            }
            
            temp1=temp1->next; 
        }
        
        return list1; 
    }
};