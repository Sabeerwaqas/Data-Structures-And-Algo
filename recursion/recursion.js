function recursion(i, n) {
    if (i > n) {
        return;
    }
    console.log(i);
    recursion(i + 1, n);
}
recursion(1, 10);
