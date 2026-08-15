
#include<bits/stdc++.h>
using namespace std;


/** Using Bruteforce Approach **/

int duplicateCheckBruteForce(int nums[],int size){
  for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      if(nums[i] == nums[j]) {
        return 1;
      }
    }
  }
  return 0;
}

/**  Time Complexity=O(n^2) & Space Complexity=O(1) **/

/** Using Optimized Approach(Using HashSet) **/

int duplicateCheckOptimized(int nums[],int size) {
  unordered_set<int>freq;
  for(int i=0;i<size;i++){
    freq.insert(nums[i]);
  }
  if(freq.size() == size) {
    return 0;
  }
  else {
    return 1;
  }
}

/** Time Complexity=O(n) & Space Complexity=O(n) **/

int main() {
  int nums[]={1,2,3,4,5};
  int size=sizeof(nums)/sizeof(nums[0]);
  int result=duplicateCheckOptimized(nums,size);
  cout<<"result is : "<<result<<endl;
  if(result == 1){
    cout<<"This array contain duplicate"<<endl;
  }
  else {
    cout<<"This array doesn't have any duplicate"<<endl;
  }
}