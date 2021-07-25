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
    
    int mx = INT_MIN;
    int height(TreeNode *root){
        if(root == nullptr) return 0; 
        int l = height(root->left); 
        int r = height(root->right); 
        mx = max(l+r, mx);  
        return max(l, r) + 1; 
    }
  

    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == nullptr) return 0; 
        
        height(root); 
        
        return mx; 
    }
};