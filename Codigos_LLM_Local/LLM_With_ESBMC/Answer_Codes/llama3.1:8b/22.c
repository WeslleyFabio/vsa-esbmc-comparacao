#include <assert.h>

int *store_address(void) {
    int x = 5;
    int *p = &x;
    return p;
}

int main(void) {
    int *q = store_address();
    int v = *malloc(sizeof(int));
    *v = *q; // safely copy the value
    assert(v == 5);
    free(v); // clean up the dynamically allocated memory
    return 0;
}