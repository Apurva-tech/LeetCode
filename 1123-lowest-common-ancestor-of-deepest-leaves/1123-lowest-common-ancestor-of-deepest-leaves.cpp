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
        // cout << ans;
        return ans; 
        
    }
    
    // Find Deepest leaves
    unordered_set<int> postorder(TreeNode *root, int h){
        
        // h++; 
        // cout << h;
        
        unordered_set <int> s ;
        if(!root) return s; 
        
        // initialise queue
        queue<TreeNode *> q; 
        q.push(root); 
        int t = 0;
        
        while(!q.empty()){
            int currSize = q.size(); 
            vector<int> currList; 
            t++;
            while(currSize > 0){
            // Dequeue element
            TreeNode *currNode = new TreeNode();
            currNode = q.front();
            
            // cout << "t: " << t << " h: " << h << endl;
            // cout << currNode->val;
            if(t == h){ 
                // cout << currNode->val; 
                s.insert(currNode->val);}
            currSize -= 1;
            q.pop();
 
            //Check for left child
            if (currNode->left)
                q.push(currNode->left);
            //Check for right child
            if (currNode->right)
                q.push(currNode->right);
            
            }
        }
        return s;
    }
    
    TreeNode* helper(TreeNode *root, unordered_set <int> &s){
        if(root == NULL || s.find(root->val) != s.end()) return root;
        TreeNode *l = helper(root->left, s); 
        TreeNode *r = helper(root->right, s); 
        
        if(l == NULL) return r; 
        else if(r == NULL) return l;
        else return root; 
    }
    
    TreeNode *res; 
    void find(TreeNode *root, int x){
        if(root == NULL) return;
        find(root->left, x); 
        if(root->val == x) {
            res = root;
            return;
        }
        find(root->right, x); 
    }
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int h = maxDepth(root);
        // cout << maxDepth(root);
        unordered_set <int> s =  postorder(root, h); 
        unordered_set<int> :: iterator itr;
        // for (itr = s.begin(); itr != s.end(); itr++)
        // cout << "tr: " << (*itr) << endl;
        itr = s.begin();
        if(s.size() == 1) {
            find(root, (*itr)); 
            return res;
        }
        TreeNode *answer = helper(root, s);
        return answer;
        
    }
};