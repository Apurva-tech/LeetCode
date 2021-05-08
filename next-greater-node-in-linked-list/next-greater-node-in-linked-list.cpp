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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res;
        ListNode* temp=head;
        ListNode *prev=nullptr;
        ListNode*temp2;
        while(temp!=nullptr){
            temp2=temp;
            temp=temp->next;
            temp2->next=prev;
            prev=temp2;
        }
        head=prev;
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