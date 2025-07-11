#include<bits/stdc++.h>
using namespace std;

int perfectNumCheck(int num) {
  if (num <= 1) return 0;
  int sum=1;
  for(int i=2;i*i<=num;i++){
    if(num % i == 0){
      if(num/ i == i) {
        sum+=i;
      }
      else {
        sum+=i + (num/i);
      }
    }
  }
  return sum == num ? 1 : 0;
}

int main() {
  int n=27;
  int result=perfectNumCheck(n);
  if(result == 1) {
    cout<<n<<" : is a Perfect number"<<endl;
  }
  else {
    cout<<n<<" : is not a Perfect number"<<endl;
  }
}


/*
Time Complexity:

The loop runs from i = 2 up to sqrt(num).

For each i, it does constant-time operations (checking modulo and additions).

So, time complexity is:

𝑂(√𝑛)


Space Complexity:

Here used only a few integer variables (sum, i, and a few temporary ones).

No additional data structures that grow with input.

So, space complexity is:

O(1)
*/