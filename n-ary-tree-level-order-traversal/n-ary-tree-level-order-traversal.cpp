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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res; 
        if(root == NULL) return res; 
        
        queue<Node *> q; 
        q.push(root); 
        
        while(!q.empty()){
            int currSize = q.size(); 
            vector<int> currList; 
            while(currSize--){
                Node *currNode = q.front(); 
                q.pop(); 
                currList.push_back(currNode->val); 
                for(auto x : currNode->children){
                    q.push(x); 
                }
            }
            res.push_back(currList); 
        }
        
        return res; 
        
    }
};