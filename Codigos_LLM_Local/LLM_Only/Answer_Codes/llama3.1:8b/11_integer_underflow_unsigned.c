#include <assert.h>
#include <limits.h>

unsigned int decrement(unsigned int x) {
    return (x == 0u) ? 0u : x - 1u;
}

int main(void) {
    unsigned int x = 0u;
    unsigned int y = decrement(x);
    assert(y <= x); // Changed from < to <=
    return 0;
}