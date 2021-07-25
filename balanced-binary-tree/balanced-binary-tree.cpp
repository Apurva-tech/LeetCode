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
    int height(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}
    bool isBalanced(TreeNode* root) {
        int hl, hr;
    if (root == NULL)
        return true;
    if (isBalanced(root->left) == false)
        return false;
    if (isBalanced(root->right) == false)
        return false;

    //  Your Code here
    if (root->left)
    {
        hl = height(root->left);
    }
    else
        hl = 0;
    if (root->right)
    {
        hr = height(root->right);
    }
    else
        hr = 0;

    if (abs(hl - hr) > 1)
        return false;
    else
        return true;
    }
};