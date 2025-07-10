const primeCheck = (number) => {
  if (number < 2) return 0;
  for (let i = 2; i * i <= number; i++) {
    if (number % i === 0) {
      return 0;
    }
  }
  return 1;
}

const number = 7;
const result = primeCheck(number);

if (result === 1) {
  console.log(number, ": is a Prime no");
} else {
  console.log(number, ": is not a Prime no");
}
