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
    void helper(TreeNode *root, vector<int> &res){
        if(root == NULL) return; 
        helper(root->left, res); 
        res.push_back(root->val); 
        helper(root->right, res); 
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        
        if(root == NULL) return root; 
        
        TreeNode *nw = new TreeNode(0), *nwRoot = nw; 
        
        vector<int> res;
        helper(root, res); 
        int n = res.size(); 
        for(int i = 0; i < n; ++i) {
            nw->right = new TreeNode(res[i]); 
            nw = nw->right; 
        }
        
        return nwRoot->right; 
    }
};