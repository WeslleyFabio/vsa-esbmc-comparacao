#include <assert.h>
#include <limits.h>

// Function to multiply two numbers, checking for overflow
int safe_multiply(int a, int b) {
    if (a > 0 && b > INT_MAX / a) return -1; // Overflow detected
    int c = a * b;
    assert(c >= a);
    return c;
}

int main(void) {
    int a = INT_MAX;
    int b = 2;
    int c = safe_multiply(a, b);
    if (c == -1) printf("Overflow occurred\n"); // Handle overflow
    else printf("Result: %d\n", c);
    return 0;
}