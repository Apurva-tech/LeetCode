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
    void rev(TreeNode* root, int& count){
        if(!root) return ;
        rev(root->right, count);
        root->val +=count;
        count = root->val;
        rev(root->left, count);
    }
    TreeNode* bstToGst(TreeNode* root) {
		int count = 0;
        rev(root, count);
        return root;
    }
};