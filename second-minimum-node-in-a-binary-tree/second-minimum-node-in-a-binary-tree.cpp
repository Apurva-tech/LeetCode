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
    
    void inorder(TreeNode *root, set<int> &res){
        if(root == nullptr) return; 
        inorder(root->left, res); 
        res.insert(root->val);  
        inorder(root->right, res); 
    } 
    
    int findSecondMinimumValue(TreeNode* root) {
        set<int> res; 
        inorder(root, res); 
        set<int >::iterator it;
        int t = 2, ans = -1; 
        
        if(res.size() == 1) return -1; 
        
        it = res.begin(); 
        while(t-- > 0){
            if(t == 0) ans = *it; 
            it++; 
        }
        
        return ans;
    }
};