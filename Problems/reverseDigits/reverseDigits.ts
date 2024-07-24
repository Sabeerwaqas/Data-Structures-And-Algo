function reverseDigits(num: number): number {
  let reverseNum = 0;

  while (num > 0) {
    let lastDigit = num % 10;

    reverseNum = (reverseNum * 10) + lastDigit;

    num = Math.floor(num / 10);
  }
  return reverseNum;
}

console.log(reverseDigits(1122));