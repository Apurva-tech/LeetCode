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
    vector<int> globalArr; 
    void inorder(TreeNode *root){
        if(root == NULL) return; 
        inorder(root->left); 
        globalArr.push_back(root->val); 
        
        inorder(root->right); 
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1); 
        inorder(root2);
        sort(globalArr.begin(), globalArr.end());
        return globalArr; 
    }
};