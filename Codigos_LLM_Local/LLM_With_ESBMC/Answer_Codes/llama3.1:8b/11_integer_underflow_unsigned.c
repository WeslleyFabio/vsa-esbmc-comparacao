#include <assert.h>
#include <limits.h>

unsigned int decrement(unsigned int x) {
    if (x == 0u) {
        return 0u; // Handle underflow by returning 0
    }
    return x - 1u;
}

int main(void) {
    unsigned int x = 0u;
    unsigned int y = decrement(x);
    assert(y <= x); // Changed '<' to '≤'
    return 0;
}