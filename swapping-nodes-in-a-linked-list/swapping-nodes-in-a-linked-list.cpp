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
#include <bits/stdc++.h>
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL) return NULL; 
        ListNode *temp = head;
        vector<int> arr; 
        while(temp){
            arr.push_back(temp->val); 
            temp=temp->next; 
        }
        swap(arr[k-1], arr[arr.size() - k]);
        temp = head;
        int i = 0; 
        while(temp && i < arr.size()){
            temp->val = arr[i]; 
            temp=temp->next; 
            i++; 
        }
        
        return head; 
    }
};