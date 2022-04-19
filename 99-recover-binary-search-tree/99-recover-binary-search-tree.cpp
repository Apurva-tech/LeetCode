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
    vector<int> temp;
    void inorder(TreeNode *root){
        if(root == NULL) return;
        inorder(root->left); 
        temp.push_back(root->val); 
        inorder(root->right); 
    }
    void solve(TreeNode *root, int &i){
        if(root == NULL) return;
        solve(root->left, i); 
        if(temp[i]!=root->val) root->val = temp[i]; 
        i++;
        solve(root->right, i); 
    }
    void recoverTree(TreeNode* root) { 
        // 3 2 1 ; 1 2 3, 
        // 1 3 2 4 ; 1 2 3 4
        inorder(root);
        sort(temp.begin(), temp.end()); 
        int i = 0;
        solve(root, i);
    }
};