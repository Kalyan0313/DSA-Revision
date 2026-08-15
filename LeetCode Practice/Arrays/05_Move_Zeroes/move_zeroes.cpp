#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Brute Force Approach
 * Time Complexity: O(...)
 * Space Complexity: O(...)
 */
class BruteForce {
public:
    // TODO: Implement brute force solution
};

/**
 * @brief Optimized Approach
 * Pattern: Two pointers
 * Time Complexity: O(...)
 * Space Complexity: O(...)
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // TODO: Implement optimized solution
        return {};
    }
};

int main() {
    Solution solver;
    vector<int> nums = {0, 1, 0, 3, 12};
    solver.moveZeroes(nums);
    cout << "Test Case 1 - Expected: [1, 3, 12, 0, 0], Actual: [";
    for(size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i] << (i == nums.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
    return 0;
}
