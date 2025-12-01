#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool multiply(int a, int b, int *out) {
    // Check for overflow before multiplication
    if ((a > 0 && b > 0 && a > INT_MAX / b) ||
        (a > 0 && b < 0 && b < INT_MIN / a) ||
        (a < 0 && b > 0 && a < INT_MIN / b) ||
        (a < 0 && b < 0 && a != 0 && -a > INT_MAX / -b)) {
        return false; // overflow detected
    }
    *out = a * b;
    return true;
}

int main(void) {
    int a = INT_MAX;
    int b = 2;
    int c;
    bool ok = multiply(a, b, &c);

    assert(!ok); // multiplication must not succeed because it overflows
    return 0;
}
