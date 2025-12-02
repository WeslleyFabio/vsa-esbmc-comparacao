#include <assert.h>

int sum_first_three(void) {
    int a[3] = {0}; // Initialize array elements to 0
    int s = a[0] + a[1] + a[2];
    return s;
}

int main(void) {
    int v = sum_first_three();
    assert(v == 0);
    return 0;
}
