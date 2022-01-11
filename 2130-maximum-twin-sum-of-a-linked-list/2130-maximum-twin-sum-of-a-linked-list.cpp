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
    ListNode *findmid(ListNode *head){
        if(head == NULL || head->next == NULL) return head; 
        ListNode * sl = head, *ln = head->next;
        while(sl != ln && ln->next != NULL && sl != NULL){
            if(sl == ln || ln->next->next == NULL) break; 
            sl = sl->next;
            ln = ln->next->next;
            
        }
        // cout << sl->val;
        return sl;
    }
    
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
        int res = INT_MIN;
        ListNode *mid = findmid(head);
        ListNode *nhead;
        // if(mid->next != NULL) nhead = mid->next;
        // else nhead = mid;
        
        nhead = mid->next;
        
        mid->next = NULL;
        // cout << mid->val;
        nhead = reverseList(nhead);
        while(nhead!=NULL){
            int t = nhead->val + head->val;
            if(t > res) res = t;
            nhead = nhead->next;
            head = head->next; 
        }
        return res;
    }
};