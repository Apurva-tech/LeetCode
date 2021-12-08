
class Solution {
public:
    int ans = 0; 
    void helper(TreeNode *root, int &low, int &high){
        if(root == NULL) return; 
        helper(root->left, low, high);
        if(root->val >= low && root->val <= high) ans += root->val; 
        helper(root->right, low, high); 
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL) return 0; 
        helper(root, low, high);   
        return ans; 
    }
};