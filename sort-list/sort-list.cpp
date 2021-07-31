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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head; 
        ListNode *temp = head; 
        vector<int> res; 
        while(temp!=NULL){
            res.push_back(temp->val); 
            temp = temp->next; 
        }
        sort(res.begin(), res.end()); 
        ListNode *nw = new ListNode(res[0]);
        ListNode *h = nw; 
        for(int i = 1; i < res.size(); ++i){
            nw->next = new ListNode(res[i]); 
            if(nw->next) nw = nw->next; 
        }
        return h; 
    }
};