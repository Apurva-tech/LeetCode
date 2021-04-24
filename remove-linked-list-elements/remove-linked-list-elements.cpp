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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ptr = head;
        ListNode* temp = head;
        while(ptr){
            if(head->val == val){
                head = head->next;
            }
            if(ptr->val == val){
                temp->next = ptr->next;
                ptr = ptr->next;
            }else{
                temp = ptr;
                ptr = ptr->next;
            }
        }
        return head; 
    }
};