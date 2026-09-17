# 0739. Daily Temperatures

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 69.1% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 20 ms |
| Memory | 107.3 MB |
| Submission ID | 2143615959 |
| Solved On | 16 Sep 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/daily-temperatures/

---

<details>
<summary>Show problem statement</summary>

<p>Given an array of integers <code>temperatures</code> represents the daily temperatures, return <em>an array</em> <code>answer</code> <em>such that</em> <code>answer[i]</code> <em>is the number of days you have to wait after the</em> <code>i<sup>th</sup></code> <em>day to get a warmer temperature</em>. If there is no future day for which this is possible, keep <code>answer[i] == 0</code> instead.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> temperatures = [73,74,75,71,69,72,76,73]
<strong>Output:</strong> [1,1,4,2,1,1,0,0]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> temperatures = [30,40,50,60]
<strong>Output:</strong> [1,1,1,0]
</pre><p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> temperatures = [30,60,90]
<strong>Output:</strong> [1,1,0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;=&nbsp;temperatures.length &lt;= 10<sup>5</sup></code></li>
	<li><code>30 &lt;=&nbsp;temperatures[i] &lt;= 100</code></li>
</ul>


</details>

---

## 🏷 Tags

- Array
- Stack
- Monotonic Stack

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. If the temperature is say, 70 today, then in the future a warmer temperature must be either 71, 72, 73, ..., 99, or 100.  We could remember when all of them occur next.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | 🟢 Easy |
| [Online Stock Span](https://leetcode.com/problems/online-stock-span/) | 🟡 Medium |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 20 ms | 107.3 MB | [solution.cpp](./solution.cpp) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
