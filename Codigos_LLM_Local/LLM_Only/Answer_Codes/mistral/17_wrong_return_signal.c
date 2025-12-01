#include <assert.h>

int is_even(int x) {
    return (x % 2 == 0) ? 0 : 1;
}

int main(void) {
    int r = is_even(4);
    assert(r == 0);
    return 0;
}