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

    void helper(TreeNode *root, vector<int> &res){
        if(root == NULL) return; 
        helper(root->left, res); 
        res.push_back(root->val); 
        helper(root->right, res); 
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root->left && !root->right) return false;
        vector<int> res; 
        helper(root, res); 
        
        int l = 0, h = res.size()-1; 
        
        while(l < h){
            cout << res[l] + res[h] << " "; 
            if(res[l] + res[h] == k) return true; 
            if(res[l] + res[h] < k) l++; 
            else if(res[l] + res[h] > k) h--; 
        }
        
        return false; 
    }
};