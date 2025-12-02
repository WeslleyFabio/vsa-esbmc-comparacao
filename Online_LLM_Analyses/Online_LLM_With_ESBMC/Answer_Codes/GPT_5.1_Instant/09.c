#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool add_ints(int a, int b, int *out) {
    // Check for signed integer overflow before performing the addition
    if ((b > 0 && a > INT_MAX - b) ||
        (b < 0 && a < INT_MIN - b)) {
        return false; // overflow detected
    }
    *out = a + b;
    return true;
}

int main(void) {
    int a = INT_MAX;
    int b = 10;
    int c;

    // Ensure addition is safe
    bool ok = add_ints(a, b, &c);
    assert(ok == true);  // Will fail safely if overflow would occur
    assert(c > a);        // Now only executed if addition was valid

    return 0;
}
