let twoSum = (numbers, target) => {
    let left = 0, right = numbers.length - 1;

    while (left < right) {
        let sum = numbers[left] + numbers[right];

        if (sum === target) {
            return [left + 1, right + 1]; 
        } else if (sum < target) {
            left++; 
        } else {
            right--; 
        }
    }

    return []; 
};

console.log(twoSum([2,3,1,5,6],9))