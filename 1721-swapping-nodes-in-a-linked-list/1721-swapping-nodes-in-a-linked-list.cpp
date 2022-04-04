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
    int FindN(ListNode *head){
        int n = 0;
        while(head){
            n++;
            head = head->next;
        }
        return n;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp1 = head, *temp2 = head; 
        int nk = FindN(head) - k;
        cout << nk ;
        while(k-- > 1){
            temp1 = temp1->next; 
        }
        while(nk-- > 0){
            temp2 = temp2->next; 
        }
        
        int t = temp1->val;
        temp1->val = temp2->val; 
        temp2->val = t;
        
        // cout << temp->val; 
        return head;
    }
};