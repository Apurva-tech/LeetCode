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
    vector<ListNode*> reverse(ListNode *left, ListNode *right){
        
        if(left == nullptr){ 
            return {left, right}; 
        }
        
        ListNode *curr=left, *prev = nullptr, *nxt = nullptr; 
        while(curr!=nullptr){
            nxt = curr->next; 
            curr->next = prev;
            prev = curr; 
            curr = nxt; 
        }
        left = prev; 
        curr = left; 
        while(curr->next!=nullptr){
            curr = curr->next; 
        }
        right = curr; 
        // cout << "r is " << right->val << " "; 
        return {left, right}; 
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next == nullptr) return head; 
        ListNode *temp = head, *l, *r, *pl, *nr; 
        int count = 1; 
        while(temp!=nullptr){
            if(count == left-1) {
                pl = temp; 
                l = temp->next; 
            }
            if(count == right){
                nr = temp->next; 
                r = temp; 
            }
            
            temp = temp->next; 
            count++; 
        }
        
        cout << "r is " << r->val << endl; 
        
        if(left == 1){
            l = head; 
            r->next = nullptr; 
            cout << "l, before rev when left = 1 :" << l->val << endl;
            temp = head; 
            vector<ListNode*> res = reverse(l , r); 
            l = res[0]; r = res[1]; 
            cout << "l, when left = 1 :" << l->val << endl;
            cout << "r is, when left = 1 :" << r->val << endl;
            r->next = nr; 
            return l; 
        }
        
        
        pl->next = nullptr;
        r->next = nullptr; 
        temp = head; 
        vector<ListNode*> res = reverse(l , r); 
        l = res[0]; r = res[1]; 
        
        cout << "l is " << l->val << " "; 
        
        
        while(temp!=nullptr){
            if(temp == pl){
                pl->next = l; 
                r->next = nr; 
            }
            temp = temp->next; 
        }
        
        return head; 
    }
};