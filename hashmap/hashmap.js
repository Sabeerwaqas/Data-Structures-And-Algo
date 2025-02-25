// -----> Count frequency of each element in the array <----- \\

function countFrequency(array) {
  let hashArray = new Map();
  for (let num of array) {
    if (hashArray.has(num)) {
      hashArray.set(num, hashArray.get(num) + 1);
    } else {
      hashArray.set(num, 1);
    }
  }
  return hashArray;
}

console.log("hashArray =>", countFrequency([2, 3, 2, 4, 6, 7, 3]));
