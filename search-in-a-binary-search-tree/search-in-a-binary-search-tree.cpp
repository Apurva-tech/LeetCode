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
    TreeNode *ans = nullptr; 
    void helper(TreeNode *root, int val){
        if(root == NULL) return; 
        helper(root->left, val); 
        if(val == root->val) ans = root; 
        helper(root->right, val); 
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return root;
        
        helper(root, val); 
        
        return ans; 
    }
};