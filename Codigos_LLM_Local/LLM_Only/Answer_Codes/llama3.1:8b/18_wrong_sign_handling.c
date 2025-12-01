#include <assert.h>

int absolute_value(int x) {
    if (x >= 0) { // Corrected condition to include non-negative numbers
        return x;
    }
    return -x; // Return the positive version of `x`
}

int main(void) {
    int v = absolute_value(-5);
    assert(v == 5);
    return 0;
}