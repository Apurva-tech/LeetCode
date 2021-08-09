<h2>1382. Balance a Binary Search Tree</h2><h3>Medium</h3><hr><div><p>Given a binary search tree, return a <strong>balanced</strong> binary search tree with the same node values.</p>

<p>A binary search tree is <em>balanced</em> if and only if&nbsp;the depth of the two subtrees of&nbsp;every&nbsp;node never differ by more than 1.</p>

<p>If there is more than one answer, return any of them.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/08/22/1515_ex1.png" style="width: 250px; height: 248px;"><img alt="" src="https://assets.leetcode.com/uploads/2019/08/22/1515_ex1_out.png" style="width: 200px; height: 200px;"></strong></p>

<pre><strong>Input:</strong> root = [1,null,2,null,3,null,4,null,null]
<strong>Output:</strong> [2,1,3,null,null,null,4]
<b>Explanation:</b> This is not the only correct answer, [3,1,4,null,2,null,null] is also correct.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is between&nbsp;<code>1</code>&nbsp;and&nbsp;<code>10^4</code>.</li>
	<li>The tree nodes will have distinct values between&nbsp;<code>1</code>&nbsp;and&nbsp;<code>10^5</code>.</li>
</ul></div>