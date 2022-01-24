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
    bool res = true;
    void inorder(TreeNode *root, int &t){
        if(root == NULL) return;
        inorder(root->left, t); 
        if(root->val != t){ 
            res = false;
            return;
        }
        inorder(root->right, t); 
    }
    
    bool isUnivalTree(TreeNode* root) {
        int t = root->val;
        inorder(root, t); 
        return res;
    }
};