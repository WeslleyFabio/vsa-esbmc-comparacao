#include <assert.h>
#include <limits.h>

int multiply(int a, int b) {
    int c = a * b;
    return c;
}

int main(void) {
    int a = INT_MAX;
    int b = 2;
    int c = multiply(a, b);
    assert(c >= a);
    return 0;
}
