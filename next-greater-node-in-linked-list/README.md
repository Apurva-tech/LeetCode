<h2>1019. Next Greater Node In Linked List</h2><h3>Medium</h3><hr><div><p>We are given a linked list with&nbsp;<code>head</code>&nbsp;as the first node.&nbsp; Let's number the&nbsp;nodes in the list: <code>node_1, node_2, node_3, ...</code> etc.</p>

<p>Each node may have a <em>next larger</em> <strong>value</strong>: for <code>node_i</code>,&nbsp;<code>next_larger(node_i)</code>&nbsp;is the <code>node_j.val</code> such that <code>j &gt; i</code>, <code>node_j.val &gt; node_i.val</code>, and <code>j</code> is the smallest possible choice.&nbsp; If such a <code>j</code>&nbsp;does not exist, the next larger value is <code>0</code>.</p>

<p>Return an array of integers&nbsp;<code>answer</code>, where <code>answer[i] = next_larger(node_{i+1})</code>.</p>

<p>Note that in the example <strong>inputs</strong>&nbsp;(not outputs) below, arrays such as <code>[2,1,5]</code>&nbsp;represent the serialization of a linked list with a head node value of 2, second node value of 1, and third node value of 5.</p>

<p>&nbsp;</p>

<div>
<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong><span id="example-input-1-1">[2,1,5]</span>
<strong>Output: </strong><span id="example-output-1">[5,5,0]</span>
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong><span id="example-input-2-1">[2,7,4,3,5]</span>
<strong>Output: </strong><span id="example-output-2">[7,0,5,5,0]</span>
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre><strong>Input: </strong><span id="example-input-3-1">[1,7,5,1,9,2,5,1]</span>
<strong>Output: </strong><span id="example-output-3">[7,9,9,9,0,5,0,0]</span>
</pre>

<p>&nbsp;</p>

<p><strong><span>Note:</span></strong></p>

<ol>
	<li><code><span>1 &lt;= node.val&nbsp;&lt;= 10^9</span></code><span>&nbsp;for each node in the linked list.</span></li>
	<li>The given list has length in the range <code>[0, 10000]</code>.</li>
</ol>
</div>
</div>
</div></div>