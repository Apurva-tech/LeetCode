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
class FindElements {
public:
    TreeNode *head; 
    FindElements(TreeNode* root) {
        head = root;
        head->val = 0; 
        // cout << "before recovering: " << endl;
        // inorder(root); 
        recover(head); 
        // cout << "after recovering: " << endl;
        // inorder(root); 
    }
    
    void inorder(TreeNode *root){
        if(root == NULL) return;
        inorder(root->left); 
        cout << root->val << " "; 
        inorder(root->right);
    }
    
    void recover(TreeNode *root){
        if(root == NULL) return;
        if(root->left){
            root->left->val = root->val * 2 + 1;
            recover(root->left); 
        }
        if(root->right){
            root->right->val = root->val * 2 + 2;
            recover(root->right); 
        }
        return;
    }
    
    bool find(int target) {
//         queue<TreeNode *> q;
//         q.push(head);
        
//         while(!q.empty()){
//             int size = q.size();
//             TreeNode *curr = new TreeNode(); 
//             curr = q.front();
//             q.pop(); 
//             // cout << "size " << size;
//             while(size--){
//                 // cout << "here";
//                 if(curr->left){
//                     q.push(curr->left); 
//                 }
//                 if(curr->right){
//                     q.push(curr->right); 
//                 }
//                 // cout << curr->val << " targtr" << target << endl;
//                 if(curr->val == target){ 
//                     // cout << curr->val << " ";
//                     return true;}
//                 // size--;
//             }
//         }
        
//         return false;
        return check(head, target);
    }
    
    bool check(TreeNode *head, int &target){
        if(head == NULL) return false;
        if(head->val == target) return true;
        bool t1 = check(head->left, target); 
        bool t2 = check(head->right, target); 
        if(t1 || t2) return true;
        
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */