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
    void inOrder(TreeNode *r, vector<int> &v) {
        if(r == NULL) return;
        inOrder(r->left, v);
        v.push_back(r->val);
        inOrder(r->right, v);
    }
    vector<int> findMode(TreeNode* root) {
        if(root == NULL) return {};
        vector<int> h, res;
        inOrder(root, h);
        unordered_map<int, int> hm;
        
        int m = -1;
        for(int i: h) {
            hm[i]++;
            m = m > hm[i] ? m : hm[i];
        }
        
        for(auto x: hm) {
            if(x.second == m) res.push_back(x.first);
        }
        
        return res;
        
    }
};