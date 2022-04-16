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
    vector<int> suffSum;
    void inorderCount(TreeNode *root){
        if(root == NULL) return;
        inorderCount(root->left); 
        suffSum.push_back(root->val); 
        inorderCount(root->right); 
    }
    int n = 0;
    
    void solve(TreeNode *root){
        if(root == NULL) return;
        solve(root->left);
        // cout << root->val << " suffS: " << suffSum[n] << endl;
        root->val = suffSum[n]; n++;
        solve(root->right); 
    }
    
    TreeNode* convertBST(TreeNode* root) {
        // 0, 1, 2, 4, 5, 6, 7, 8 
        // 8, 7, 6, 5, 4, 3, 2, 1, 0
        // 8, 15, 21, 26, 30, 33, 35, 36, 36
        
        inorderCount(root);
        
        for(int i = suffSum.size()-2; i >= 0; --i){
            suffSum[i] += suffSum[i+1]; 
        }
        
        // for(auto x : suffSum) cout << x << " ";
        solve(root);
        return root;
    }
};