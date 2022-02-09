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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root->left && !root->right) return 1;
        long ans = INT_MIN, level; 
        queue<pair<TreeNode *, long> > q;
        q.push({root, 0}); 
        while(!q.empty()){
            long s = q.size(); 
            long mmin = q.front().second, f, l;            
            for(long i = 0; i < s; i++) {
                // Dequeue element
                TreeNode *currNode = q.front().first;
                long curID = q.front().second - mmin;
                
                q.pop();
                
                if(i == 0) f = curID;
                if(i == s - 1) l = curID;
                if (currNode->left){
                    q.push({currNode->left, curID*2+1});
                }
                
                if (currNode->right){
                    q.push({currNode->right, curID*2+2});
                }
            }
            ans = max(ans , l-f+1);
        }
        
        return ans;
    }
};