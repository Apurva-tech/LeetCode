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
    int helper(TreeNode *root){
        if(root == NULL) return 0; 
        int lh = minDepth(root->left); 
        int lr = minDepth(root->right);
        if(min(lh, lr)!=0) return min(lh, lr) + 1; 
        return max(lh, lr) + 1; 
    }
    
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0; 
        
        return helper(root); 
    }
};