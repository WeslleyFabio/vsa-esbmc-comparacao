#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *base = (int *)malloc(3 * sizeof(int));
    if (!base) {
        return 1;
    }
    int *p = base + 1; // corrected pointer arithmetic
    p[0] = 10;
    assert(p[0] == 10);
    free(base);
    return 0;
}
