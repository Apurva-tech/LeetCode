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
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return ans;

        // initialise queue
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int currSize = q.size();
            vector<int> currList;
            while (currSize > 0)
            {
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
            ans.push_back(currList);
        }

        return ans;
    }
};