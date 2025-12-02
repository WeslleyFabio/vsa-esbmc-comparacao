
#include <assert.h>
#include <limits.h>

unsigned int decrement(unsigned int x) {
    if (x == 0) return 0; // Special case for zero to avoid underflow
    return x - 1u;
}

int main(void) {
    unsigned int x = 0u;
    unsigned int y = decrement(x);
    assert(y < x);
    return 0;
}
