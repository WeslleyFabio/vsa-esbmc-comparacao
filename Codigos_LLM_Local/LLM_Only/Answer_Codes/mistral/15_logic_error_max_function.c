int max_of_two(int a, int b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    } else { // add this case to handle equal numbers
        return a; // or return b, it doesn't matter as long as both are equal
    }
}
