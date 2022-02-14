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
    int maxDepth(TreeNode* root) {
       if(root == NULL) return 0; 
        
         queue<TreeNode *> q; 
         q.push(root); 
        int ans = 0; 
        
        while(!q.empty()){
            int currSize = q.size(); 
            vector<int> currList; 
            
            while(currSize > 0){
            // Dequeue element
            TreeNode *currNode = new TreeNode();
            currNode = q.front();
            
            currList.push_back(currNode->val);
            currSize -= 1;
            q.pop();
 
            //Check for left child
            if (currNode->left)
                q.push(currNode->left);
            //Check for right child
            if (currNode->right)
                q.push(currNode->right);
            
            }
            ans++; 
        }
        cout << ans;
        return ans; 
        
    }
};