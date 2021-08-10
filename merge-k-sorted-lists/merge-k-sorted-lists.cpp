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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL; 
        vector<int> res; 
        for(int i = 0; i < lists.size(); ++i){
            ListNode *temp = lists[i]; 
            while(temp!=NULL){
                res.push_back(temp->val); 
                temp = temp->next; 
            }
        }
        
        if(res.size() == 0) return NULL;
        
        sort(res.begin(), res.end()); 
        
        // for(auto x:res) cout << res[x] << " ";
        
        ListNode *nw = new ListNode(res[0]), *head = nw; 
        
        for(int i = 1; i < res.size(); i++){
            ListNode * t = new ListNode(res[i]);
            nw->next = t; 
            nw = t;
        }
        
        return head;
    }
};