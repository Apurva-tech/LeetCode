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
    // not mine
    vector<int> flip;
    int i = 0;
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        return isMatchingVoyage(root, voyage) ? flip : vector<int>{-1};
    }
    bool isMatchingVoyage(TreeNode* root, vector<int>& v){
        if(!root) return true;
        if(root -> val != v[i++]) return false;
        if(root -> left && root -> left -> val != v[i]){
            flip.push_back(root -> val);
            return isMatchingVoyage(root -> right, v) && isMatchingVoyage(root -> left, v);
        }
        return isMatchingVoyage(root -> left, v) && isMatchingVoyage(root -> right, v);
    }
};