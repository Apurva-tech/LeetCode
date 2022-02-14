class Solution {
public:
  bool areEqual(TreeNode* s, TreeNode* t) {
    if (s == nullptr || t == nullptr) {
      return s == t;  // both null
    }
    return s->val == t->val
      && areEqual(s->left, t->left)
      && areEqual(s->right, t->right);
  }

  bool isSubtree(TreeNode* s, TreeNode* t) {
    return areEqual(s, t)
      || (s->left && isSubtree(s->left, t))
      || (s->right && isSubtree(s->right, t));
  }
};