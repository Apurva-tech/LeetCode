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
    ListNode* head =NULL;
    //int ans = 0;
    Solution(ListNode* h) {
        head = h;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        ListNode* curr= head;
        ListNode* res;
        int n=1;
        while(curr) {
            if (rand()% n == 0)
            res = curr;
            curr = curr->next;
            n++;
        }
   return res->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */