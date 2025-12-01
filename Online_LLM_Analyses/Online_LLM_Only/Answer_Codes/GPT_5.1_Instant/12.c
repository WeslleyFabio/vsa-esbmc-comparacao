#include <assert.h>

int safe_divide(int a, int b) {
    /* Prevent division by zero */
    if (b == 0) {
        return 0;   /* Defined safe fallback */
    }
    return a / b;
}

int main(void) {
    int x = 10;
    int y = 0;
    int z = safe_divide(x, y);
    assert(z == 0);   /* Now guaranteed */
    return 0;
}
