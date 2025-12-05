#include <bits/stdc++.h>
using namespace std;

int countPairsWithSum(vector<int>&nums,int target) {
  int left = 0;
  int right = nums.size() - 1;
  int sum = 0;
  int count = 0;
  while(left < right) {
    sum = nums[left] + nums[right];
    if(sum == target) {
      count++;
      left++;
      right--;
    } else if(sum > target) {
      right --;
    } else {
      left++;
    }
  }
  return count;
}

int main() {
  vector<int>nums={1, 1, 2, 3, 4};
  int target = 5;

  int result = countPairsWithSum(nums,target);
  cout<<result<<endl;
  return 0;
}