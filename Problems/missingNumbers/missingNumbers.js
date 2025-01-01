let missingNumber = function (nums) {
  let numArray = nums;

  for (let k = 0; k <= numArray.length; k++) {
    if (numArray.indexOf(k) === -1) {
      return k;
    }
  }
};

console.log(missingNumber([0, 2, 3]));
