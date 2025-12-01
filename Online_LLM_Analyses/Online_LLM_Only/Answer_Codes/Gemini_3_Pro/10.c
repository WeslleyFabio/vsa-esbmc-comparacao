#include <assert.h>
#include <limits.h>

/* Changed return type to long long to hold larger results */
long long multiply(int a, int b) {
    /* Cast 'a' to long long to ensure 64-bit multiplication */
    long long c = (long long)a * b;
    return c;
}

int main(void) {
    int a = INT_MAX;
    int b = 2;
    
    /* Variable 'c' updated to long long to store the result */
    long long c = multiply(a, b);
    
    assert(c >= a);
    return 0;
}
