#include <assert.h>

int absolute_value(int x) {
    return (x < 0) ? (-x) : x; // Using a ternary operator to handle both positive and negative cases correctly.
}

int main(void) {
    int v = absolute_value(-5);
    assert(v == 5);
    return 0;
}