#include <bits/stdc++.h>
using namespace std;

bool checkPair(vector<int>nums,int target) {
    int n=nums.size();
    int left = 0;
    int right = n-1;
    int sum = 0;
    
    while(left < right) {
        sum = nums[left] + nums[right];
        if(sum == target) {
            return true;
        }
        else if(sum > target) {
            right--;
        } else {
            left++;
        }
    }
    return false;
}

int main()
{
    vector<int>nums = {1,2,4,7,11};
    int target = 14;
    bool result = checkPair(nums,target);
    cout<< (result ? "true" : "false")<< endl;
    return 0;
}