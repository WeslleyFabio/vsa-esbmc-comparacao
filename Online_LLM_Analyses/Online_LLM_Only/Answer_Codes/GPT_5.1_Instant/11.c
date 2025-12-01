#include <assert.h>
#include <limits.h>
#include <stdbool.h>

unsigned int decrement(unsigned int x, bool *ok) {
    if (x == 0u) {
        *ok = false;        // indicate failure to decrement safely
        return x;
    }
    *ok = true;
    return x - 1u;
}

int main(void) {
    unsigned int x = 0u;
    bool ok = false;
    unsigned int y = decrement(x, &ok);

    assert(!ok || y < x);   // property holds only if decrement is valid
    return 0;
}
