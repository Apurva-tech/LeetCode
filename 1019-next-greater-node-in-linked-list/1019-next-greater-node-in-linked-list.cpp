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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res;
        head = reverseList(head);
        stack<int> st;
        st.push(head->val);
        head=head->next;
        while(head!=nullptr) {
            while(!st.empty() && st.top() <= head->val) st.pop();
            if(st.empty()) res.push_back(0);
            else res.push_back(st.top());
            st.push(head->val);
            head=head->next;
        }
        reverse(res.begin(), res.end());
        res.push_back(0);
        return res;
    }
};