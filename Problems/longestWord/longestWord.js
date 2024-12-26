/*

    Question: Write a function to sind the longest word that takes a string as input
    and returns the longest word in the string. If there are multile longest words
    returned the first one encountered.

    => Constraints

    The input string may contain alphabetic characters, digits, spaces and punctuation.
    The input string will be non-empty.
    The input string may contain multiple words separated by spaces.

    => Note

    If the input string is empty or contains only whitespace, the function should return false.
    The function should ignore leading and trailing whitespace when determining the longest
    word. 

*/

function longestWord(sentence) {
  let sentSplit = sentence.split(" ");
  console.log(sentSplit);
  let lgWord = sentSplit[0];
  // console.log("lgWord =>", lgWord);
  for (let i = 0; i < sentSplit.length; i++) {
    if (sentSplit[i].length > lgWord.length) {
      lgWord = sentSplit[i];
    }
  }

  return lgWord;
}

console.log(longestWord("Some people have curly brown hair till proper brushing"));
