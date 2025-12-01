#include <assert.h>

int x = 5; // move declaration to file scope

int *store_address(void) {
    return &x;
}

int main(void) {
    int *q = store_address();
    int v = *q;
    assert(v == 5);
    return 0;
}