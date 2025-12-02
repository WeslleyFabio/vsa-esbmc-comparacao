#include <assert.h>
#include <limits.h>

// Change return type to long long to prevent overflow
long long add_ints(int a, int b) {
    // Cast 'a' to long long before addition to ensure 64-bit arithmetic
    long long c = (long long)a + b;
    return c;
}

int main(void) {
    int a = INT_MAX;
    int b = 10;
    // Store result in long long
    long long c = add_ints(a, b);
    assert(c > a);
    return 0;
}