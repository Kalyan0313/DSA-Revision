#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(vector<int>& nums) {
  int left = 0;
  int right = nums.size() - 1;

  while( left <= right) {
    if(nums[left] != nums[right]) {
      return false;
    } 
      left++;
      right--;
  }
      return true;
}

int main() {
  vector<int> nums = {1, 2, 3, 4};
  bool result = checkPalindrome(nums);
  cout<<(result ? "true" : "false")<<endl;
  return 0;
}