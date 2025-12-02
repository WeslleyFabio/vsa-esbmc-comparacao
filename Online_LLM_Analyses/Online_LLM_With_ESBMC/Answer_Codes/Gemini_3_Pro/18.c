#include <assert.h>

int absolute_value(int x) {
    if (x < 0) {
        return -x; // Fixed: Negate x to get the positive value
    }
    return x;
}

int main(void) {
    int v = absolute_value(-5);
    assert(v == 5);
    return 0;
}