#include <assert.h>
#include <limits.h>

// Use long long to hold the larger result
long long multiply(int a, int b) {
    long long c = (long long)a * b;
    return c;
}

int main(void) {
    int a = INT_MAX;
    int b = 2;
    // Update variable type to store the larger result
    long long c = multiply(a, b);
    
    // Check implies correct mathematical result, not overflowed value
    assert(c >= a);
    return 0;
}