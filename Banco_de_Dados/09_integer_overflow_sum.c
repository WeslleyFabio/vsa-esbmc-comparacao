#include <assert.h>
#include <limits.h>

int add_ints(int a, int b) {
    int c = a + b;
    return c;
}

int main(void) {
    int a = INT_MAX;
    int b = 10;
    int c = add_ints(a, b);
    assert(c > a);
    return 0;
}
