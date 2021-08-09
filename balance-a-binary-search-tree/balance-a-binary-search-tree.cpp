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
    void getInorder(TreeNode *root, vector<int> &arr){
        if(root == NULL) return;
        getInorder(root->left, arr); 
        arr.push_back(root->val); 
        getInorder(root->right, arr);
    }
    
    TreeNode *helper(vector<int> nums, int l, int r){
        if(l > r) return nullptr; 
        int mid = ((r-l)/2) + l; 
        TreeNode *root = new TreeNode(nums[mid]); 
        root->left = helper(nums, l, mid - 1); 
        root->right = helper(nums, mid + 1, r); 
        return root; 
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        if(root == NULL) return root;
        vector<int> arr; 
        getInorder(root, arr); 
        
        if(arr.size() == 0) return NULL;
        if(arr.size() == 1) return new TreeNode(arr[0]); 
        
        return helper(arr, 0, arr.size()-1); 
        
    }
};