#include <assert.h>

int safe_divide(int a, int b) {
    assert(b != 0); // ensure divisor is not zero
    return a / b;
}

int main(void) {
    int x = 10;
    int y = 1;     // non-zero to avoid division by zero
    int z = safe_divide(x, y);
    assert(z == 10);
    return 0;
}
