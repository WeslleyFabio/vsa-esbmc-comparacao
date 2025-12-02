#include <assert.h>
#include <stdlib.h>

int *store_address(void) {
    int *p = malloc(sizeof(int));
    *p = 5;
    return p;
}

int main(void) {
    int *q = store_address();
    int v = *q;
    assert(v == 5);
    free(q);
    return 0;
}
