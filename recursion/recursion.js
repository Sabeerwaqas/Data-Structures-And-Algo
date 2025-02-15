// -----> Basic Recursion Function <----- \\

function basicRecursion(count = 0) {
  if (count === 3) return count;

  console.log("count =>", count);

  return basicRecursion(count + 1);
}

basicRecursion();

// -----> Print Name N times using Recursion <----- \\

function printName(i, num) {
  if (i === num) return;
  console.log("Sabeer Waqas");
  return printName(i + 1, num);
}

printName(1, 5);

// -----> Print 1 to N using Recursion <----- \\

function printNumber(i, n) {
  if (i > n) return;
  console.log("number =>", i);
  return printNumber(i + 1, n);
}

printNumber(1, 5);

// -----> Print N to 1 using recursion <----- \\

function printUntilOne(num) {
  if (num === 0) return;
  console.log("printUntilOne =>", num);
  return printUntilOne(num - 1);
}

printUntilOne(5);

// -----> Sum of first N Natural Numbers <----- \\

function SumOfNaturalNums(num) {
  if (num === 0) return 0;
  return num + SumOfNaturalNums(num - 1);
}

console.log("SumOfNaturalNums =>", SumOfNaturalNums(5));

// -----> Factorial of a Number : Recursive <----- //

function factorialNum(num) {
  if (num === 0) return 1;
  return num * factorialNum(num - 1);
}

console.log("factorialNum =>", factorialNum(5));

// -----> Reverse a given Array <----- \\

function reverseAnArray(arr, sortedArray = []) {
  let givenArray = [...arr];
  if (givenArray.length === 0) return sortedArray;
  sortedArray.push(givenArray[givenArray.length - 1]);
  givenArray.pop();
  return reverseAnArray(givenArray, sortedArray);
}

console.log("sortedArray =>", reverseAnArray([5, 4, 3, 2, 1]));
