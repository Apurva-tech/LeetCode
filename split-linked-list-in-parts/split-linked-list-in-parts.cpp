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
    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {
        vector<ListNode *> res;

        for(int i = 0 ; i < k; ++i) res.push_back(nullptr); 

        int n = 0; 
        ListNode *temp = head; 
        while(temp!=NULL){
            n++; 
            temp = temp->next; 
        }

        int currsize = n/k, extra = n%k; 
        ListNode *headN = head, *lastN = head; 

        for(int a  = 0; a < k; ++a){
            if(headN==NULL) break; 
            res[a] = headN; 
            cout << headN->val << " "; 

            int sizeBucket = currsize; 
            if(extra > 0){
                sizeBucket++; 
                extra--; 
            }

            for(int i = 0; i < sizeBucket - 1; ++i) {
                if(lastN) lastN = lastN->next; 
            }

            if(lastN) {
                headN = lastN->next; 
                lastN->next = nullptr; 
            }
            else{
                headN = lastN; 
            }
            lastN = headN; 
        }

        return res;
    }
};