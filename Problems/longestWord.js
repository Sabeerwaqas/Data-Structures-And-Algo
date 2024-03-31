/*

    Question: Write a function to sind the longest word that takes a string as input
    and returns the longest word in the string. If there are multile longest words
    returned the first one encountered.

    => Constraints

    The input string may contain alphabetic characters, digits, soaces and punctuation.
    The input strint will be non-empty.
    The input string may contain multiple words separated by spaces.

    => Note

    If the input string is empty or contains only whitespace, the function should return false.
    The function should ignore leading and trailing whitespace when determining the longest
    word. 

*/

function longestWord(sentence) {
  let sentSplit = sentence.split(" ");
  let lgWord = sentSplit[0];
  console.log(sentSplit);

  for (let i = 1; i < sentSplit.length; i++) {
    if (sentSplit[i].length > lgWord.length) {
      lgWord = sentSplit[i];
    }
  }

  return lgWord;
}

console.log(longestWord("This is VScode"));
