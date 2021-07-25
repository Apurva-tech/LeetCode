/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        int currSize; 
        vector<vector<int>> res; 
        if(!root) return res; 
        queue<TreeNode*> q; 
        q.push(root); 
        while(!q.empty()){
            vector<int> currList; 
            currSize = q.size(); 
            while(currSize--){
                TreeNode *currNode = new TreeNode(); 
                currNode = q.front(); 
                
                currList.push_back(currNode->val); 
                q.pop(); 
                if(currNode->left) q.push(currNode->left); 
                if(currNode->right) q.push(currNode->right); 
            }
            res.push_back(currList); 
        }
        reverse(res.begin(), res.end()); 
        return res; 
    }
};