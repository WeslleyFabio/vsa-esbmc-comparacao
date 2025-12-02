#include <assert.h>

int absolute_value(int x) {
    if (x < 0) {
        return -x; // Fix: Negate x instead of returning it as is
    }
    return x;
}

int main(void) {
    int v = absolute_value(-5);
    assert(v == 5);
    return 0;
}
