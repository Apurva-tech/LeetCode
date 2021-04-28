# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
import collections
class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        ans = []

        if root is None:
            return ans

        queue = collections.deque()
        queue.append(root)

        while queue:
            currSize = len(queue)
            currList = []

            while currSize > 0:
                currNode = queue.popleft()
                currList.append(currNode.val)
                currSize -= 1

                if currNode.left is not None:
                    queue.append(currNode.left)
                if currNode.right is not None:
                    queue.append(currNode.right)
            ans.append(currList)

        return ans