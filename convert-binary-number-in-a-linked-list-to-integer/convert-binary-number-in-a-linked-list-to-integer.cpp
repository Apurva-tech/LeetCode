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
#include <math.h>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int n = 0; 
        ListNode* temp = head; 
        while(temp!=NULL){
            n++; 
            temp = temp->next; 
        }
         
        int res = 0; 
        while(head!=NULL){
            res += head->val * pow(2, n-1);  
            head = head->next; 
            n--; 
            cout << n;
        }
        return res; 
    }
};