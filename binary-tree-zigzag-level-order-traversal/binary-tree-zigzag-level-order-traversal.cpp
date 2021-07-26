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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       
        vector<vector<int>> res; 
        if(root==NULL) return res; 
        int currSize;
        queue<TreeNode *> q;
        q.push(root);
        int i = 0; 
        while (!q.empty())
        {
            i++; 
            currSize = q.size();
            vector<int> currList; 
            while (currSize--)
            {
                TreeNode *currNode = q.front();
                q.pop();
                currList.push_back(currNode->val); 
                if (currNode->left)
                    q.push(currNode->left);
                if (currNode->right)
                    q.push(currNode->right);
            }
            if(i%2==0) reverse(currList.begin(), currList.end()); 
            
            res.push_back(currList); 
        }
        
        return res; 
    }
};