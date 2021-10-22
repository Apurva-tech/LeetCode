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
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>> vect;
        if(root==NULL) return 0; 
        queue<TreeNode *> q; 
        q.push(root); 
        while(!q.empty()){
            int size = q.size(); 
            vector<int> currList; 
            while(size > 0){
                TreeNode *currNode = new TreeNode();
                currNode = q.front();
                size--;
                q.pop(); 
                if(currNode->left){
                    q.push(currNode->left); 
                }
                if(currNode->right){
                    q.push(currNode->right); 
                }
                currList.push_back(currNode->val);
            }
            vect.push_back(currList); 
        }
        int ans = 0; 
        for(auto x : vect[vect.size()-1]) ans += x; 
        return ans; 
    }
};