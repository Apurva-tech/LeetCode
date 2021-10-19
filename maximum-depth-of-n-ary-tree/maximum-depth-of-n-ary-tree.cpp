/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
       if(!root) return 0;
        
        int max=0;
        for(auto child: root->children){
            int height = maxDepth(child);
            if(height>max) max=height;
        }
        return 1+max; 
    }
};