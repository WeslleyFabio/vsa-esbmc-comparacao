#include <assert.h>
#include <limits.h>

// Use a larger type (long long) to prevent overflow
long long add_ints(int a, int b) {
    long long c = (long long)a + b;
    return c;
}

int main(void) {
    int a = INT_MAX;
    int b = 10;
    
    // c must be capable of holding a value larger than INT_MAX
    long long c = add_ints(a, b);
    
    // The assertion now holds true because overflow is avoided
    assert(c > a);
    
    return 0;
}
