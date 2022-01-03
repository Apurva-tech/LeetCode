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
    int sumRootToLeaf(TreeNode* root) {
        return Calc(root, 0);
    }
    
    int Calc(TreeNode *node, int n) {
        n = (n << 1) | node->val;
        if (!node->left && !node->right)  return n;
        return (node->left ? Calc(node->left, n) : 0) + (node->right ? Calc(node->right, n) : 0);
    }
};