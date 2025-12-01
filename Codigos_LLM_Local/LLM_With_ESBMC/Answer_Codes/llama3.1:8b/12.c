#include <assert.h>

int safe_divide(int a, int b) {
    if (b == 0) {
        // Return an error or handle the case as desired
        return -1; // Or some other sentinel value to indicate failure
    }
    return a / b;
}

int main(void) {
    int x = 10;
    int y = 0;
    int z = safe_divide(x, y);
    assert(z == -1); // Or whatever the expected error value is
    return 0;
}