/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
    Node* flatten_rec(Node* head){
        Node *curr, *tail;
        curr = head; 
        tail = head; 
        while(curr!=NULL){
            Node* child = curr->child;
            Node* next = curr->next;
            if(child){
                Node *_tail = flatten_rec(child);
                
                _tail->next = next; 
                if(next) next->prev = _tail; 
                
                curr->next = child; 
                child->prev = curr; 
                
                curr->child = NULL; 
                curr = tail;
            }else
                curr = next; 
            if(curr) tail=curr; 
        }
        return tail; 
    }
public:
    Node* flatten(Node* head) {
        if(head) flatten_rec(head); 
        return head; 
    }
};