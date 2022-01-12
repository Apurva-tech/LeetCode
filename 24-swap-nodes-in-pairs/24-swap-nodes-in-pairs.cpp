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
        if(head == NULL || head->next == NULL) return head; 
        if( head->next->next == NULL) {
            ListNode *t = head->next;
             head->next->next = head;
              head->next = NULL;
             return  t; 
        }
        ListNode *t1 = head, *t2 = head->next->next , *curr = head->next , *new_head = head->next; 
        while(curr!=NULL){
            cout << curr->val; 
            curr->next = t1;
            if(t2 == NULL) {
                t1->next = NULL; 
                break;
            }
            if(t2->next == NULL) {
                t1->next = t2;
                break;
            }
            t1->next = t2->next; 
            curr = t2->next; 
            
            t1 = t2;
            t2 = curr->next;
            
        }
        return new_head; 
    }
};