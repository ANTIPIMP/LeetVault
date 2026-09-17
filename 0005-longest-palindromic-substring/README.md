# 0005. Longest Palindromic Substring

| Property | Value |
|----------|-------|
| Difficulty | 🟡 Medium |
| Acceptance Rate | 38.6% |
| Language | C++ |
| Status | ✅ Accepted |
| Runtime | 78 ms |
| Memory | 13.8 MB |
| Submission ID | 2070396798 |
| Solved On | 17 Jul 2026 |

---

## 🔗 Problem

https://leetcode.com/problems/longest-palindromic-substring/

---

<details>
<summary>Show problem statement</summary>

<p>Given a string <code>s</code>, return <em>the longest</em> <span data-keyword="palindromic-string"><em>palindromic</em></span> <span data-keyword="substring-nonempty"><em>substring</em></span> in <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;babad&quot;
<strong>Output:</strong> &quot;bab&quot;
<strong>Explanation:</strong> &quot;aba&quot; is also a valid answer.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;cbbd&quot;
<strong>Output:</strong> &quot;bb&quot;
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 1000</code></li>
	<li><code>s</code> consist of only digits and English letters.</li>
</ul>


</details>

---

## 🏷 Tags

- Two Pointers
- String
- Dynamic Programming
- Manacher

---

<details>
<summary>💡 Hints (click to expand)</summary>

1. How can we reuse a previously computed palindrome to compute a larger palindrome?
2. If “aba” is a palindrome, is “xabax” a palindrome? Similarly is “xabay” a palindrome?
3. Complexity based hint:</br>
If we use brute-force and check whether for every start and end position a substring is a palindrome we have O(n^2) start - end pairs and O(n) palindromic checks. Can we reduce the time for palindromic checks to O(1) by reusing some previous computation.

</details>

---

## 🔁 Similar Problems

| Problem | Difficulty |
|---------|------------|
| [Shortest Palindrome](https://leetcode.com/problems/shortest-palindrome/) | 🔴 Hard |
| [Palindrome Permutation](https://leetcode.com/problems/palindrome-permutation/) | 🟢 Easy |
| [Palindrome Pairs](https://leetcode.com/problems/palindrome-pairs/) | 🔴 Hard |
| [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/) | 🟡 Medium |
| [Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/) | 🟡 Medium |
| [Maximum Number of Non-overlapping Palindrome Substrings](https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings/) | 🔴 Hard |

---

## 📝 Notes

No notes provided.

---

## 📁 Files

| Language | Runtime | Memory | File |
|----------|---------|--------|------|
| C++ | 78 ms | 13.8 MB | [solution.cpp](./solution.cpp) |
| Python | 347 ms | 12.5 MB | [solution.py](./solution.py) |

---
Generated using [LeetVault](https://github.com/vedant476/LeetVault).
