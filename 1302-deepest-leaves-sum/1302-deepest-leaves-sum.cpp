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
        if(root == NULL) return 0;
        int n = 0;
        queue<TreeNode*> q; 
        
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            while(size > 0){
                TreeNode* curr = new TreeNode();
                curr = q.front();
                size --; 
                q.pop(); 
                if(curr->left) q.push(curr->left); 
                if(curr->right) q.push(curr->right); 
                
            }
            n++; 
        }
        
        q.push(root);
        
        int rs = 0;
        
        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            while(size > 0){
                TreeNode* curr = new TreeNode();
                curr = q.front();
                
                size --; 
                q.pop(); 
                if(curr->left) q.push(curr->left); 
                if(curr->right) q.push(curr->right); 
                temp.push_back(curr->val);
            }
            
            if(n!=0) {
                    n--;
                    cout << " " << n << "\n";
                }
            if(n==0) {
                    for(auto x:temp) rs += x;
                }
        }
        
        
        return rs; 
    }
};