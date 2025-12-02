#include <assert.h>

int safe_divide(int a, int b) {
    if (b == 0) {
        return INT_MIN; // or any other error value
    }
    return a / b;
}

int main(void) {
    int x = 10;
    int y = 0;
    int z = safe_divide(x, y);
    assert(z != INT_MIN); // or the desired error handling logic
    return 0;
}
