#include <assert.h>
#include <limits.h>

int multiply(int a, int b) {
    long long c = (long long)a * b;
    if (c < INT_MIN || c > INT_MAX) {
        // Handle overflow error or use a larger type
        return -1; // Example: return an error code
    }
    return (int)c;
}

int main(void) {
    int a = INT_MAX;
    int b = 2;
    int c = multiply(a, b);
    assert(c >= a);
    return 0;
}
