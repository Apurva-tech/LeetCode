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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr || head->next == nullptr) return nullptr; 
       ListNode *temp = head; 
        int Size = 0 ;
        while(temp!=nullptr){
            Size ++ ;
            temp = temp->next; 
        }
        cout << Size << endl; 
        int count = Size - n; 
        temp = head; 
        if(count == 0){
            head = head->next; 
            return head; 
        }
        // cout << "Count before " << count << endl; 
        while(count-- > 1){
            temp = temp->next; 
        }
        // cout << "Count after " << count << endl; 
        if(temp->next!=nullptr) temp->next = temp->next->next; 
        
        return head; 
        
    }
};