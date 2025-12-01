#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool multiply_safe(int a, int b, int *out) {
    // Check for overflow before performing the multiplication
    if (a != 0 && (b > INT_MAX / a || b < INT_MIN / a)) {
        return false; // overflow would occur
    }
    *out = a * b;
    return true;
}

int main(void) {
    int a = INT_MAX;
    int b = 2;
    int c;

    // Ensure multiplication is safe
    bool ok = multiply_safe(a, b, &c);
    assert(ok);       // prevents undefined overflow
    assert(c >= a);   // now only checked when multiplication is valid
    return 0;
}
