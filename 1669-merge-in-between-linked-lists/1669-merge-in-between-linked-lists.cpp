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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *A = list1, *B = list1;
        while(a-- > 0){
            if(a == 0) break; 
            A = A->next;
        }
        while(b-- > 0){ 
            B = B->next;
        }
        B = B->next;
        
        A->next = list2; 
        while(list2->next!=NULL){ 
            list2 = list2->next;
        }
        list2->next = B; 
        
        return list1;
        
    }
};