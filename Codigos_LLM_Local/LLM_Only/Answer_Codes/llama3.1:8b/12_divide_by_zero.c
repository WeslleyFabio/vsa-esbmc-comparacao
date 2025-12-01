#include <assert.h>

int safe_divide(int a, int b) {
    if (b == 0) {
        // Handle division by zero error
        return -1; // or any other designated value to indicate an error
    }
    return a / b;
}

int main(void) {
    int x = 10;
    int y = 0;
    int z = safe_divide(x, y);
    assert(z == -1); // Verify that division by zero is handled correctly
    return 0;
}