#include <assert.h>

int *store_address(void) {
    int x = 5;
    int *p = &x;
    return p; // note: return a copy of the pointer instead of the original pointer
}

int main(void) {
    int *q = store_address();
    int v = *memcpy((void*)&v, q, sizeof(int)); // use memcpy to dereference safely
    assert(v == 5);
    return 0;
}
