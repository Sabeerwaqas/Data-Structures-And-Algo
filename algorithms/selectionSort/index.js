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
      // swap the elements
      [arr[i],arr[lowest]] = [arr[lowest], arr[i]];
    }
  }

  return arr;
}

let array = [7, 9, 3, 5, 15, 10, 0];

console.log("Original Array =>", array);
console.log("Sorted Array =>", selectionSort(array));
