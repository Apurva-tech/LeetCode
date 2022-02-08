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
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root); 
        while(!q.empty()){
            int s = q.size(); 
            vector<int> currList;
            
            while(s){
                // Dequeue element
                TreeNode *currNode = new TreeNode();
                currNode = q.front();

                currList.push_back(currNode->val);
                s--;
                q.pop();

                //Check for left child
                if (currNode->left)
                    q.push(currNode->left);
                //Check for right child
                if (currNode->right)
                    q.push(currNode->right);
            }
            
            res.push_back(currList); 
        }
        return res[res.size()-1][0]; 
    }
};