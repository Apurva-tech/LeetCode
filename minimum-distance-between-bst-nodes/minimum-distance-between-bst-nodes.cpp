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
    int diff, x = 1000000, ans = INT_MAX; 
    void helper(TreeNode *root){
        if(root==NULL) return; 
        helper(root->left); 
        diff = abs(root->val - x);
        ans = min(ans, diff);
        x = root->val;
        helper(root->right); 
    }
    int minDiffInBST(TreeNode* root) {
        helper(root); 
        return ans; 
    }
};