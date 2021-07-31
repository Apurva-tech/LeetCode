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
    int getMinimumDifference(TreeNode* root) {
        vector<int> res;
        helper(root, res); 
        int minDiff = INT_MAX; 
        for(int i = 0; i < res.size()-1; ++i){
            if(abs(res[i+1] - res[i]) < minDiff) minDiff = abs(res[i+1] - res[i]); 
        }
        return minDiff; 
    }
};