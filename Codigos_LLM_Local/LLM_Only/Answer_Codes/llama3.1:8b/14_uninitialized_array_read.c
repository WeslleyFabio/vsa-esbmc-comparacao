#include <assert.h>

int sum_first_three(void) {
    int a[4]; // increased array size to 4 elements
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    return a[0] + a[1] + a[2];
}

int main(void) {
    int v = sum_first_three();
    assert(v == 6);
    return 0;
}