## Count Factors - Problem Solution

**Problem Description**

Given an integer A, find the count of its factors. A factor of a number is an integer that divides it perfectly without leaving any remainder.

Example:

Factors of 6 are 1, 2, 3, 6 → Count is 4

Factors of 5 are 1, 5 → Count is 2

**Constraints:**
1 ≤ A ≤ 10⁹

**Solution Approach**

Bruteforce Approach (O(n) time)
The straightforward solution is to iterate from 1 to n and count all numbers that divide n without remainder.

## CPP

int countFactor(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;
        }
    }
    return count;
}


**Optimized Approach (O(√n) time)**

We can optimize by observing that factors come in pairs. For any factor i of n, there exists a corresponding factor n/i. We only need to iterate up to √n to find all factors.

Initialize count to 0

Iterate from 1 to √n

If i divides n exactly:

If i and n/i are same (perfect square case), increment count by 1

Else, increment count by 2

Return the final count

### CPP

int countFactor(int n) {
    int count = 0;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            if(i == n/i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}


### Edge Cases

n = 1 → Only 1 factor (1 itself)

Prime numbers → Exactly 2 factors (1 and itself)

Perfect squares → Odd number of factors (since one factor is repeated)

Example Walkthrough
Input: 10

i = 1: 10%1=0 → factors (1,10) → count += 2 (count=2)

i = 2: 10%2=0 → factors (2,5) → count += 2 (count=4)

i = 3: 10%3≠0 → skip

Stop at i=4 (since 4² > 10)
Final count = 4

Input: 9 (perfect square)

i = 1: 9%1=0 → factors (1,9) → count += 2 (count=2)

i = 2: 9%2≠0 → skip

i = 3: 9%3=0 → factors (3,3) → count += 1 (count=3)
Final count = 3

### Complexity Analysis

Time Complexity: O(√n) - We only iterate up to the square root of n

Space Complexity: O(1) - Constant space is used

This optimized approach is efficient even for the upper constraint (n=10⁹), requiring only about 30,000 iterations at most.