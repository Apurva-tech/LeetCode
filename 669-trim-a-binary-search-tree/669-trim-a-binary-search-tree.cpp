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
    bool isInRange(int num, int low, int high){
			if(num>=low && num<=high) return true;
			else return false;
	}
    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root == NULL) return NULL;
        root->left = trimBST(root->left,low,high);
        root->right = trimBST(root->right,low,high);
        
        if(isInRange(root->val,low,high) == false){
            if(root->left){
                if(isInRange(root->left->val,low,high)) return root->left;
            }
            else if(root->right){
                if(isInRange(root->right->val,low,high)) return root->right;
            }
            else return NULL;
        }       
        return root;
    }
};