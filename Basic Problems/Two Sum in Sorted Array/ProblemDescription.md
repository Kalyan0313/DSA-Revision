# Pair Searching (Two Sum in Sorted Array)

## Problem Description

Given a **sorted integer array** `nums` and an integer `target`, determine whether there exist **two distinct elements** in the array whose **sum equals** `target`.

Return **1** if such a pair exists, otherwise return **0**.

**Note:**  
Your algorithm should run in **O(n)** time using the two-pointer technique.

---

## Problem Constraints

- `1 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Array `nums` is **sorted in non-decreasing order**

---

## Input Format

The first argument is an integer array `nums`.  
The second argument is an integer `target`.

---

## Output Format

Return **1** if there exists a pair `(nums[i] + nums[j] == target)` with `i < j`,  
otherwise return **0**.

---

## Example Input

**Input 1:**  
nums = [1, 2, 4, 7, 11]
target = 9

## Example Output

**Output 1:**

## Example Explanation

**Explanation 1:**  
The pair `(2, 7)` adds up to `9`, so the answer is `1`.
