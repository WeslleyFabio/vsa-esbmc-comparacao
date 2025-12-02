#include <assert.h>

int safe_divide(int a, int b) {
    if (b == 0) return 0;
    else return a / b;
}

int main(void) {
    int x = 10;
    int y = 0;
    int z = safe_divide(x, y);
    assert(z == 0);
    return 0;
}
