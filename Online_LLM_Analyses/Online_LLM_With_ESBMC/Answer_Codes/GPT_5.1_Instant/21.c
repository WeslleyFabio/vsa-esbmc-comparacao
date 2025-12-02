#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *base = (int *)malloc(3 * sizeof(int));
    if (!base) {
        return 1;
    }

    /* Corrected: use a valid index inside the allocated range */
    int *p = base + 2;  // last valid element
    p[0] = 10;
    assert(p[0] == 10);

    free(base);
    return 0;
}
