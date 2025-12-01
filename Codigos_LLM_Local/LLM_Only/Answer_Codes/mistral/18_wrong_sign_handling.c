#include <assert.h>

int absolute_value(int x) {
    if (x < 0) {
        return -x; // Changed the sign of the result
    }
    return x;
}

int main(void) {
    int v = absolute_value(-5);
    assert(v == 5); // Change the expected output to match the fixed implementation
    return 0;
}
