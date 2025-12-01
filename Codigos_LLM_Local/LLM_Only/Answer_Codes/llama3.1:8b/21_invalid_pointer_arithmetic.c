#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *base = (int *)malloc(3 * sizeof(int));
    if (!base) {
        return 1;
    }
    int *p = base + 3; // Accessing out-of-bounds, but this will be detected by the next line
    assert(p >= base && p < base + 3); // Add bounds check
    p[0] = 10;
    assert(p[0] == 10);
    free(base);
    return 0;
}