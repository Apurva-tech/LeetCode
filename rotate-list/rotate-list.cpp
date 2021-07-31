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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head; 
        int n = 0; ListNode *temp=head; 
        while(temp!=NULL) {
            n++; 
            temp = temp->next; 
        }
        if(k > n) k = k%n;
        if(k == n || k == 0) return head;
        
        int count = 0; ListNode *prev = nullptr, *curr = head;
        while(count!=(n-k) && curr!=NULL){
            prev = curr;
            curr = curr->next; 
            // cout << prev->val << " " << curr->val << endl; 
            count++; 
        }
        
        temp = head; 
        while(temp->next!=NULL) {
            temp = temp->next; 
        }
        
        temp->next = head; 
        prev->next = NULL; 
        
        // cout << prev->val << " " << curr->val; 
        
        return curr; 
        
    }
};