/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tA = headA, *tB = headB, *ans; 
        while(tA!=NULL){
            tA->val *= -1;
            tA = tA->next;
        }
        while(tB!=NULL){
            if(tB->val < 0){ 
                ans = tB;
                break;
            }
            tB = tB->next;
        }
        tA = headA;
        while(tA!=NULL){
            tA->val *= -1;
            tA = tA->next;
        }
        return ans;
    }
};