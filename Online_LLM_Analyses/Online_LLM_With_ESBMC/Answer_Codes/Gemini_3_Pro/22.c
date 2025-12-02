#include <assert.h>

int *store_address(void) {
    // Fix: 'static' gives the variable static storage duration.
    // It remains in memory for the entire program execution.
    static int x = 5;
    int *p = &x;
    return p;
}

int main(void) {
    int *q = store_address();
    int v = *q;
    assert(v == 5);
    return 0;
}