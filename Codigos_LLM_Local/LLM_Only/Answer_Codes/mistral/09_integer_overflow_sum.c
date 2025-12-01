#include <assert.h>
#include <limits.h>

int add_ints(int a, int b) {
    if (a > 0) {
        int c = a + b;
        return (c <= INT_MAX) ? c : INT_MAX;
    } else {
        int c = a + b;
        return (c >= INT_MIN) ? c : INT_MIN;
    }
}

int main(void) {
    int a = INT_MAX;
    int b = 10;
    int c = add_ints(a, b);
    assert(c > a);
    return 0;
}
