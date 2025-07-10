function countFactor(number) {
  let count=0;
  for(let i=1;i*i<=number;i++) {
    if(number % i == 0) {
      if(number/i == i) {
        count++;
      }
      else {
        count+= 2;
      }
    }
  }
  return count;
}
console.log(countFactor(7));