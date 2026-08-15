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
 * Pattern: Sorting + two pointers
 * Time Complexity: O(...)
 * Space Complexity: O(...)
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // TODO: Implement optimized solution
        return {};
    }
};

int main() {
    Solution solver;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = solver.threeSum(nums);
    cout << "Test Case 1 - Expected: [[-1, -1, 2], [-1, 0, 1]] (order may vary), Actual: [";
    for(size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for(size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j] << (j == result[i].size() - 1 ? "" : ", ");
        }
        cout << "]" << (i == result.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
    return 0;
}
