#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool add_ints(int a, int b, int *out) {
    // Check for overflow before performing addition
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

    bool ok = add_ints(a, b, &c);
    assert(!ok);  // overflow must be detected
    return 0;
}
