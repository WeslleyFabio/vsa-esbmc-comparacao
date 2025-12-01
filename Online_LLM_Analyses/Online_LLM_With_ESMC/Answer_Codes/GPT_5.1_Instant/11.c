#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool decrement(unsigned int x, unsigned int *out) {
    if (x == 0u) {
        return false; // underflow would occur
    }
    *out = x - 1u;
    return true;
}

int main(void) {
    unsigned int x = 0u;
    unsigned int y = 0u;

    bool ok = decrement(x, &y);

    assert(!ok || y < x); // property holds only when decrement succeeds
    return 0;
}
