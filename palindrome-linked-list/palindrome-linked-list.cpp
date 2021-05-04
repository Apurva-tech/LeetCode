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
    ListNode *LL(ListNode *oh)
    {
        ListNode *nh = NULL;
        while(oh != NULL)
        {
            ListNode *n = new ListNode(oh -> val);
            n -> next = nh;
            nh = n;
            oh = oh -> next;
        }
        return nh;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *rev = LL(head);
        while(head != NULL && rev != NULL)
        {
            if(head -> val != rev -> val)
                return false;
            head = head -> next;
            rev = rev -> next;
        }
        return true;
    }
};