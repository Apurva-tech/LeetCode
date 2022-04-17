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
    TreeNode* newRoot = new TreeNode(0), * ans = newRoot;
    void inorder(TreeNode *root){
        if(root == NULL) return;
        inorder(root->left); 
        TreeNode* tNode = new TreeNode(root->val); 
        newRoot->right = tNode; newRoot = tNode;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root); 
        return ans->right;
    }
};