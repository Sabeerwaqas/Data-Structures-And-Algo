function reverseDigits(num) {
    var reverseNum = 0;
    while (num > 0) {
        var lastDigit = num % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        num = Math.floor(num / 10);
    }
    return reverseNum;
}
console.log(reverseDigits(1122));
