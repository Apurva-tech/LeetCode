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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *prev = NULL, *curr=head, *nxt = curr->next;
        
        while(nxt != NULL){
            cout << curr->val << endl;
            nxt = curr->next; 
            curr->next = prev; 
            prev = curr;
            curr = nxt; 
        }
        
        return prev;
    }
    
    int pairSum(ListNode* head) {
        ListNode *t = head;
        vector<int> cp; 
        while(t!=NULL){
            cp.push_back(t->val); 
            t = t->next;
        }
        reverse(cp.begin(), cp.end()); 
        int res = INT_MIN, i = 0; 
        t = head;
        while(t!=NULL){
           int temp =  cp[i] + t->val;
           if(temp > res) res = temp;
            t = t->next;
            i++;
        }
        return res;
    }
};