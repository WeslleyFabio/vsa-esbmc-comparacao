#include <assert.h>
#include <limits.h>

int multiply(int a, int b) {
    long long c = (long long)a * b; // use 64-bit integer type to prevent overflow
    if (c > INT_MAX) {
        return -1; // indicate overflow
    }
    return (int)c;
}

int main(void) {
    int a = INT_MAX;
    int b = 2;
    int c = multiply(a, b);
    assert(c == -1); // expect overflow
    return 0;
}