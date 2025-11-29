#include <assert.h>

int *store_address(void) {
    int x = 5;
    int *p = &x;
    return p;
}

int main(void) {
    int *q = store_address();
    int v = *q;
    assert(v == 5);
    return 0;
}
