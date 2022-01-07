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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenHead = head->next;
        // `even != null` rules out the list of only 1 node
        // `even.next != null` rules out the list of only 2 nodes
        while (even != NULL && even->next != NULL) {
            // Put odd to the odd list
            odd->next = odd->next->next;
            
            // Put even to the even list
            even->next = even->next->next;
            
            // Move the pointer to the next odd/even
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};