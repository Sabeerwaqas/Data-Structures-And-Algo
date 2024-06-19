function selectionSort(arr) {
  let arrayLength = arr.length;

  for (let i = 0; i < arrayLength - 1; i++) {
    let minIndex = i;
    for (let j = i + 1; j < arrayLength; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    if (minIndex !== i) {
      let temp = arr[minIndex];
      arr[minIndex] = arr[i];
      arr[i] = temp;
    }
  }

  return arr;
}


let array = [7, 9, 3, 5, 15, 10, 0];

console.log("Original Array =>", array);
console.log("Sorted Array =>", selectionSort(array));


