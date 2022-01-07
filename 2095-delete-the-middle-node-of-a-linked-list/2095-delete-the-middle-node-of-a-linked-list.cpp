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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL|| head->next == NULL) return NULL;
        // if(head->next->next == NULL) return head;
        
        ListNode * sl = head, *ln = head->next;
        while(sl != ln && ln->next != NULL && sl != NULL){
            if(sl == ln || ln->next->next == NULL) break; 
            sl = sl->next;
            ln = ln->next->next;
            
        }
        cout << sl->val;
        ListNode *mid = sl->next;
        mid = mid->next;
        sl->next = mid;
        return head;
    }
};