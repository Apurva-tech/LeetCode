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
    bool CheckPalindrome(vector<int> s){
        
        int n = s.size(), count = 0; 
        for (int i = 0; i <= n / 2 && n != 0; i++) {
            if (s[i] != s[n - i - 1]) {
            count = 1;
            break;
        }
    }
        if(count == 1) return false; 
        else return true; 
    }
    
    bool isSymmetric(TreeNode* root) {
        int count = 0; 
        int currSize; 
        queue<TreeNode *> q; 
        q.push(root); 
        while(!q.empty()){
            currSize = q.size(); 
            vector<int> s; 
            while(currSize--) {
                TreeNode *currNode = q.front(); 
                q.pop(); 
                if(currNode->left) {
                    q.push(currNode->left);
                    s.push_back(currNode->left->val);
                }
                else s.push_back(-101); 
                
                if(currNode->right) {
                    q.push(currNode->right);
                    s.push_back(currNode->right->val);
                }   
                else s.push_back(-101); 
            }  
           
            if(!CheckPalindrome(s)){ 
                cout << s[0] << " "; 
                return false; 
            }
        }
        
        // cout << count; 
        
        return true; 
    }
};