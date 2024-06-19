let users = new Set();
users.add("John");
users.add("David");
users.add("Kevin");

console.log("Users exist =>", users);
console.log("users size =>", users.size);

console.log("Has visitor =>", users.has("John"));

/*

Problem 1: Efficient Solution Building
Consider a scenario with a list of names and a super-fast scanner that can immediately tell you whether a name is on the list. In JavaScript terms, this is what Sets offer via their has method — a way to check presence in constant time.

Let's build the solution, with this analogy in mind, step by step:

Transfer the elements of one array into our super-fast scanner, a.k.a. a Set called set1.
Feed names from the other array to the scanner using the .some() method to check if set1 can find a match. The some() method tests whether at least one element in the set passes the test implemented by the provided function.
Since we want to determine whether there are no twins (common elements), we invert the result of .some() because it returns true if it finds at least one match.


*/

function areDisjoint(array1, array2) {
  const set1 = array1;
  return !array2.some((elem) => set1.has(elem));
  //   console.log(!array2.some((elem) => set1.has(elem)));
}

console.log(
  areDisjoint(["Alice", "Bob", "Charlie"], ["Xander", "Yasmine", "Zane"])
); // true, no common names
console.log(
  areDisjoint(["Alice", "Bob", "Charlie"], ["Charlie", "Delta", "Echo"])
); // false, 'Charlie' is common to both
