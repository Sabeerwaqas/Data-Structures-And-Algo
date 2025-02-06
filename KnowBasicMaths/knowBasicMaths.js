// ----- Count Digits In a Number ----- \\

// ----- My Approach ----- \\

function countDigits(number) {
  let stringifyNum = number?.toString();
  let splitStrNum = stringifyNum?.split("");
  return splitStrNum.length;
}

console.log("countDigits =>", countDigits(12345));

function countDigitsByLog(number) {
  if (number === 0) {
    return 1;
  } else {
    return Math.floor(Math.log10(Math.abs(number))) + 1;
  }
}

console.log("countDigitsByLog =>", countDigitsByLog(234));

// ----- Revers a Number ----- \\

function reverseANumber(number) {
  let revNum = null;
  let lastDigit = null;
  while (number > 0) {
    lastDigit = number % 10;
    revNum = lastDigit * 10 + lastDigit;
    number = Math.floor(number / 10);
  }
  return revNum;
}

console.log("reverseANumber =>", reverseANumber(2312));

// ----- Check If a Number Is Palindrome ----- \\

function isNumPalindrome(num) {
  let originalNum = num;
  let revNum = 0;
  let lastDigit = 0;

  while (num > 0) {
    lastDigit = num % 10;
    revNum = revNum * 10 + lastDigit;
    num = Math.floor(num / 10);
  }

  return revNum === originalNum
    ? "Provided number is a palindrome"
    : "Provided number is not a palindrome.";
}

console.log("isNumPalindrome =>", isNumPalindrome);

// ----- Greatest Common Divisor (GCD) ----- \\

// =====> Brute Force Approach <===== \\

function bruteForceGCD(num1, num2) {
  let greatestDivisor = 0;
  let smallerNum = num1 > num2 ? num1 : num2;
  for (let i = 0; i <= smallerNum; i++) {
    if (num1 % i === 0 && num2 % i === 0) {
      greatestDivisor = i;
    }
  }

  return greatestDivisor;
}

console.log("gretestDivisor =>", bruteForceGCD(2, 2));

// =====> Better Approach <===== \\

function betterApproachGCD(num1, num2) {
  let smallerNum = num1 < num2 ? num1 : num2;
  for (let i = smallerNum; i > 0; i--) {
    return num1 % i === 0 && num2 % i === 0 ? smallerNum : null;
  }
  return 1;
}

console.log("betterApproachGCD =>", betterApproachGCD(12, 3));
