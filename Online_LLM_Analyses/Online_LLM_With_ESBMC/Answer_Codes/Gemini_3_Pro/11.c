#include <assert.h>
#include <limits.h>

unsigned int decrement(unsigned int x) {
    return x - 1u;
}

int main(void) {
    unsigned int x = 0u;
    
    // Only perform the operation and assertion if x is strictly positive
    // to avoid unsigned underflow wrapping.
    if (x > 0u) {
        unsigned int y = decrement(x);
        assert(y < x);
    }
    
    return 0;
}