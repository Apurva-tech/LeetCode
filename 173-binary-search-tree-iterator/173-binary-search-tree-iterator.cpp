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
class BSTIterator {
public:
    vector<int> ans;
    int cursor = 0;
    int size;
    
    void inorder(TreeNode *root)
    {
        if (!root) return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
        size = ans.size();
    }
    
    BSTIterator(TreeNode* root) {
        ans.clear();
        cursor = 0;
        inorder(root);
    }
    
    int next() {
        return ans[cursor++];
    }
    
    bool hasNext() {
        return cursor < size;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */