#include<bits/stdc++.h>
using namespace std;

int isPrime(int n) {
  if(n<2) return 0;
  for(int i=2;i*i<=n;i++) {
    if(n % i ==0) {
      return 0;
    }
  }
  return 1;
} 

int main() {
  int n=11;
  int result=isPrime(n);
  if(result == 1) {
    cout<<n<<" :Is a Prime no"<<endl;
  }
  else {
    cout<<n<<" :Is a not Prime no"<<endl;
  }
}

/*
⏱ Time Complexity

The loop runs from i = 2 to i * i <= n. That means:

The maximum value for i is approximately √n

So the number of iterations is about O(√n)

Inside the Loop:
Each iteration performs a modulus operation, which is constant time.

🔹 Time Complexity: O(√n)
*/ 



/*
🧠 Space Complexity
There are:

No dynamic data structures (no arrays, maps, etc.)

Only a few integer variables used (n, i)

🔹 Space Complexity: O(1) (constant)
*/
