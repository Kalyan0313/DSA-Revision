#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Brute Force Approach
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */
class BruteForce {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            for(int j = i + 1; j < size; j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

/**
 * @brief Optimized Approach
 * Pattern: HashMap / complement lookup
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int,int> fq;
        for(int i = 0;i<size;i++) {
            int complement = target - nums[i];
            if(fq.find(complement) != fq.end()) {
                return {i,fq[complement]};
            }
            fq[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution solver;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solver.twoSum(nums, target);
    cout << "Test Case 1 - Expected: [0, 1] or [1, 0], Actual: [";
    for(size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
    return 0;
}
