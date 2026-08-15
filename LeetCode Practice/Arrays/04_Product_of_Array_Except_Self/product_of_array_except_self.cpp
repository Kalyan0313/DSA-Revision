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
 * Pattern: Prefix/Suffix products
 * Time Complexity: O(...)
 * Space Complexity: O(...)
 */
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // TODO: Implement optimized solution
        return {};
    }
};

int main() {
    Solution solver;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = solver.productExceptSelf(nums);
    cout << "Test Case 1 - Expected: [24, 12, 8, 6], Actual: [";
    for(size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
    return 0;
}
