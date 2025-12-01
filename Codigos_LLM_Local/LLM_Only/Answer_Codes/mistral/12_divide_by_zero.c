#include <stdio.h>
#include <assert.h>

int safe_divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0;
    }
    return a / b;
}

int main(void) {
    int x = 10;
    int y = 0;
    int z = safe_divide(x, y);
    assert(z == 0); // This will never be true when the fix is applied.
    return 0;
}
