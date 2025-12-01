#include <assert.h>
#include <stdlib.h>

int main(void) {
    // Allocation increased to 4 to accommodate the access at offset 3
    int *base = (int *)malloc(4 * sizeof(int));
    if (!base) {
        return 1;
    }
    int *p = base + 3;
    p[0] = 10;
    assert(p[0] == 10);
    free(base);
    return 0;
}
