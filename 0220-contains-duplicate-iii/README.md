# 0220. Contains Duplicate III

| Property | Value |
|----------|-------|
| Difficulty | 🔴 Hard |
| Acceptance Rate | 25.1% |
| Language | C++ |
| Status | ❌ Runtime Error |
| Runtime | N/A |
| Memory | N/A |
| Submission ID | 2062679736 |
| Solved On | 10 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/contains-duplicate-iii/

---

<details>
<summary>Show problem statement</summary>

<p>You are given an integer array <code>nums</code> and two integers <code>indexDiff</code> and <code>valueDiff</code>.</p>

<p>Find a pair of indices <code>(i, j)</code> such that:</p>

<ul>
	<li><code>i != j</code>,</li>
	<li><code>abs(i - j) &lt;= indexDiff</code>.</li>
	<li><code>abs(nums[i] - nums[j]) &lt;= valueDiff</code>, and</li>
</ul>

<p>Return <code>true</code><em> if such pair exists or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,1], indexDiff = 3, valueDiff = 0
<strong>Output:</strong> true
<strong>Explanation:</strong> We can choose (i, j) = (0, 3).
We satisfy the three conditions:
i != j --&gt; 0 != 3
abs(i - j) &lt;= indexDiff --&gt; abs(0 - 3) &lt;= 3
abs(nums[i] - nums[j]) &lt;= valueDiff --&gt; abs(1 - 1) &lt;= 0
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,5,9,1,5,9], indexDiff = 2, valueDiff = 3
<strong>Output:</strong> false
<strong>Explanation:</strong> After trying all the possible pairs (i, j), we cannot satisfy the three conditions, so we return false.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= indexDiff &lt;= nums.length</code></li>
	<li><code>0 &lt;= valueDiff &lt;= 10<sup>9</sup></code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Sliding Window
- Sorting
- Bucket Sort
- Ordered Set

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. Time complexity O(n logk)  - This will give an indication that sorting is involved for k elements.
2. Use already existing state to evaluate next state  -  Like, a set of k sorted numbers are only needed to be tracked. When we are processing the next number in array, then we can utilize the existing sorted state and it is not necessary to sort next overlapping set of k numbers again.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | 🟢 Easy |
| [Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/) | 🟢 Easy |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | N/A | N/A | [solution.cpp](./solution.cpp) |

---
Generated automatically using [LeetVault](https://github.com/vedant476/LeetVault).
