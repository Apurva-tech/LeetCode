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
    //Function to find minimum in a tree. 
    TreeNode* FindMin(TreeNode* root)
    {
     while(root->left != NULL) root = root->left;
     return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        // Edge case
        if(root == NULL) return root; 
        
        if(key < root->val) root->left = deleteNode(root->left, key); 
        else if(key > root->val) root->right = deleteNode(root->right, key);
        
        //after reaching the node
        else{
            cout << root->val << endl;
            // Case 1 : No child
            if(root->left == NULL && root->right == NULL){
                cout << root->val << endl; 
                delete root; 
                root = NULL;  
            }
            // Case 2 : One child
            else if(root->left == NULL) {
                struct TreeNode *temp = root->right;
                delete root; 
                return temp;
            }
            else if(root->right == NULL) {
                struct TreeNode *temp = root->left;
                delete root; 
                return temp;
            }
            
            // Case 3: Two children
            else{
                struct TreeNode *temp = FindMin(root->right); 
                root->val = temp->val; 
                root->right = deleteNode(root->right, temp->val); 
            }
        }
        return root; 
    }
    
};