#include <assert.h>
#include <limits.h>

int add_ints(int a, int b) {
    if (a > INT_MAX - b) return -1; // Check for overflow before adding
    int c = a + b;
    return c;
}

int main(void) {
    int a = INT_MAX;
    int b = 10;
    int c = add_ints(a, b);
    if (c == -1) // Check for overflow condition
        printf("Integer overflow detected.\n");
    else {
        assert(c > a);
        printf("The sum is: %d\n", c);
    }
    return 0;
}
