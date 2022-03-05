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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode *curr0 = head, *nxt0 = head; 
        ListNode *nwHead = new ListNode(0), *nw = nwHead; 
        while(nxt0->next != NULL){
            nxt0 = nxt0->next;
            int ans = 0; 
            while(nxt0->val != 0 && nxt0){
                ans += nxt0->val; 
                nxt0 = nxt0->next;
            }
            nwHead->next = new ListNode(ans); 
            nwHead = nwHead->next; 
        }
        return nw->next;
    }
};