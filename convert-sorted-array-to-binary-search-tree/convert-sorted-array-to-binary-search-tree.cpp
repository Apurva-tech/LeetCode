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
    
    TreeNode *helper(vector<int>& nums, int l, int r){
        if(l > r) return nullptr; 
        int mid = ((r-l)/2) + l; 
        TreeNode *root = new TreeNode(nums[mid]); 
        root->left = helper(nums, l, mid - 1); 
        root->right = helper(nums, mid + 1, r); 
        return root; 
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size(); 
        if(n == 0) return nullptr;
        if(n == 1) return new TreeNode(nums[0]); 
        
        TreeNode *root = helper(nums, 0, nums.size()-1); 
        
        return root; 
        
    }
};