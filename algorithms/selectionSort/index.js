function selectionSort(arr) {
  //   for (let i = 0; i < arr.length - 1; i++) {
  //     let minIndex = i;
  //     for (let j = i + 1; j < arr.length; j++) {
  //       if (arr[j] < arr[minIndex]) {
  //         minIndex = j;
  //       }
  //     }
  //     if (minIndex !== i) {
  //       let temp = arr[minIndex];
  //       arr[minIndex] = arr[i];
  //       arr[i] = temp;
  //     }
  //   }

  //   return arr;

  for (let i = 0; i < arr.length; i++) {
    let lowest = i;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[lowest] > arr[j]) {
        lowest = j;
      }
    }
    if (i !== lowest) {
      [arr[i], arr[lowest]] = [arr[lowest], arr[i]];
    }
  }

  return arr;
}

let array = [3, 2, 1, 3];

console.log("Original Array =>", array);
console.log("Sorted Array =>", selectionSort(array));
