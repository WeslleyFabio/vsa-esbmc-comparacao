#include <assert.h>
#include <limits.h>

unsigned int decrement(unsigned int x) {
    return x - 1u;
}

int main(void) {
    unsigned int x = 0u;
    unsigned int y = (unsigned int)decrement(x);
    assert(y < x); // This assertion should not fail now
    return 0;
}
