// ----- Count Digits In a Number ----- \\

// <----- My Approach -----> \\

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

// <----- Revers a Number -----> \\

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

// <----- Check If a Number Is Palindrome -----> \\

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

// <----- Greatest Common Divisor (GCD) -----> \\

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

// <----- Armstron Number -----> \\

// =====> An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. <===== \\

function isArmstrongNum(num) {
  let copyNum = num;
  let numToCount = num;
  let count = 0;
  let finalVal = 0;

  while (numToCount > 0) {
    count = count + 1;
    numToCount = Math.floor(numToCount / 10);
  }

  while (copyNum > 0) {
    let lastDigit = copyNum % 10;
    finalVal += Math.pow(lastDigit, count);
    copyNum = Math.floor(copyNum / 10);
  }

  return finalVal === num ? true : false;
}

console.log("isArmstrong Number =>", isArmstrongNum(153));

// -----> Print all divisors <----- \\

function checkDivisors(num) {
  let givenNum = num;
  let divisors = [];

  for (let i = 0; i <= givenNum; i++) {
    if (givenNum % i === 0) {
      divisors.push(i);
    }
  }

  return divisors;
}

console.log("divisors =>", checkDivisors(20));

// -----> isPrime <----- \\

function checkPrime(n) {
  let cnt = 0;
  for (let i = 2; i < n; i++) {
      if (n % i === 0) {
          return false;
      }
  }
  return true;
}


console.log(checkPrime(3));
