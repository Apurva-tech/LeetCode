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
    int numComponents(ListNode* head, vector<int>& nums) {
        if(head == NULL) return 0;
        if(head->next == NULL) return nums.size(); 
        // ans = nums.size()
        int ans = nums.size(); 
        ListNode *temp = head; 
        
        unordered_set<int> t;
        for(auto x:nums) t.insert(x); 
        
        while(temp->next!=NULL){
            if(t.find(temp->val) != t.end() && t.find(temp->next->val) != t.end()) ans--; 
            
            temp = temp->next; 
        }
        
        return ans; 
    }
};