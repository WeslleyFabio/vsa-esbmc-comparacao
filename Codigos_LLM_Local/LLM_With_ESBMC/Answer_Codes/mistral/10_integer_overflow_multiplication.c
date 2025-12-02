#include <assert.h>
#include <limits.h>

long long int multiply(int a, int b) {
    long long int c = (long long int)a * b;
    return c;
}

int main(void) {
    int a = INT_MAX;
    int b = 2;
    long long int c = multiply(a, b);
    assert(c >= a);
    return 0;
}
