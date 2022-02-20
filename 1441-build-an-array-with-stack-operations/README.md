<h2><a href="https://leetcode.com/problems/build-an-array-with-stack-operations/">1441. Build an Array With Stack Operations</a></h2><h3>Easy</h3><hr><div><p>You are given an array <code>target</code> and an integer <code>n</code>.</p>

<p>In each iteration, you will read a number from <code>list = [1, 2, 3, ..., n]</code>.</p>

<p>Build the <code>target</code> array using the following operations:</p>

<ul>
	<li><code>"Push"</code>: Reads a new element from the beginning list, and pushes it in the array.</li>
	<li><code>"Pop"</code>: Deletes the last element of the array.</li>
	<li>If the target array is already built, stop reading more elements.</li>
</ul>

<p>Return <em>a list of the operations needed to build </em><code>target</code>. The test cases are generated so that the answer is <strong>unique</strong>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> target = [1,3], n = 3
<strong>Output:</strong> ["Push","Push","Pop","Push"]
<strong>Explanation:</strong> 
Read number 1 and automatically push in the array -&gt; [1]
Read number 2 and automatically push in the array then Pop it -&gt; [1]
Read number 3 and automatically push in the array -&gt; [1,3]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> target = [1,2,3], n = 3
<strong>Output:</strong> ["Push","Push","Push"]
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> target = [1,2], n = 4
<strong>Output:</strong> ["Push","Push"]
<strong>Explanation:</strong> You only need to read the first 2 numbers and stop.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= target.length &lt;= 100</code></li>
	<li><code>1 &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= target[i] &lt;= n</code></li>
	<li><code>target</code> is strictly increasing.</li>
</ul>
</div>