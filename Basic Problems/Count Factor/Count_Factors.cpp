#include<bits/stdc++.h>
using namespace std;

// int countFactor(int n) {
//   int count=0;
//   for(int i=1;i<=n;i++){
//     if(n%i==0) {
//       count++;
//     }
//   }
//   return count;
// }

int countFactorOptimized(int n) {
  int count=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0) {
      if(n/i == i) {
        count++;
      }
      else {
        count+=2;
      }
    }
  }
  return count;
}

int main() {
  int n=6;
  int result=countFactorOptimized(n);
  cout<<"Total factor count is: "<<result<<endl;
}