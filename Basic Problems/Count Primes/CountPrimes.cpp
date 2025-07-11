#include<bits/stdc++.h>
using namespace std;

int primeCheck(int n) {
  if (n< 2) return 0;
  for(int i=2;i*i<=n;i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}

int countPrime(int n) {
  int count = 0;
  for(int i = 2; i <= n; i++) {
    if(primeCheck(i)) {
      count++;
    }
  }
  return count;
}


int main() {
  int n=2;
  cout<<"Total no of Prime Count : "<<countPrime(n)<<endl;
}