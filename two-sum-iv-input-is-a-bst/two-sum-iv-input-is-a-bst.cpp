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
        
        vector<int> res; 
        helper(root, res); 
        bool ans = false; 
        for(int i = 0; i < res.size(); ++i){
            if(binary_search(res.begin(), res.end(), k - res[i]) && (lower_bound(res.begin(), res.end(), k - res[i]) - res.begin() != i)) 
            ans = true;
        }

        return ans; 
    }
};