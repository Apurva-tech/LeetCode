
class Solution {
public:
    int helper(TreeNode *root){
        
        // helper function
        if(root == NULL) return 0; 
        int lh = minDepth(root->left); 
        int lr = minDepth(root->right);
        if(min(lh, lr)!=0) return min(lh, lr) + 1; 
        return max(lh, lr) + 1; 
    }
    
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0; 
        
        return helper(root); 
    }
};