# Count Pairs with Given Sum in Sorted Array

## Problem Description

Given a **sorted integer array** `nums` and an integer `target`, count the number of **distinct pairs** `(i, j)` such that:

nums[i] + nums[j] = target

and `i < j`.

Return the count of such pairs.

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

Return a single integer representing the **number of pairs** whose sum equals `target`.

---

## Example Input

**Input 1:**  
nums = [1, 2, 4, 7, 11]
target = 9

**Input 2:**  
nums = [1, 1, 2, 3, 4]
target = 5

**Output 1:**
1

**Output 2:**
2

---

## Example Explanation

**Explanation 1:**  
The pair `(2, 7)` adds up to `9`, so there is **1 pair**.

**Explanation 2:**  
The pairs `(1, 4)` and `(2, 3)` add up to `5`, so there are **2 pairs**.
