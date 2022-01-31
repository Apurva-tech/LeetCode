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
//     int res = 0; 
//     void helper(TreeNode *curr, unordered_set<int> node){
//         if(curr == NULL) return;
//         if(node.find(curr->val) != node.end()){
//             node.erase(curr->val); 
//         }
//         else{
//             node.insert(curr->val); 
//         }
//         if(curr->left == NULL  && curr->right == NULL) if(node.size() <= 1) res++; 
//         helper(curr->left, node);
//         helper(curr->right, node);
        
//     }
    
    int pseudoPalindromicPaths (TreeNode* root, int count = 0) {
        if (!root) return 0;
        count ^= 1 << (root->val - 1);
        int res = pseudoPalindromicPaths(root->left, count) + pseudoPalindromicPaths(root->right, count);
        if (root->left == root->right && (count & (count - 1)) == 0) res++;
        return res;
    }
};