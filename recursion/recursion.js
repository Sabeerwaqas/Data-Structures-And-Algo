function recursion(i, j) {
    if (i > j) {
        return;
    }
    console.log("Normal case", i);
    recursion(i + 1, j);
}
recursion(1, 10);
// print number using backtracking
function recursiveFunction(k, l) {
    if (k > l) {
        return;
    }
    recursiveFunction(k + 1, l);
    console.log("Backtracking =>", k);
}
recursiveFunction(1, 10);
