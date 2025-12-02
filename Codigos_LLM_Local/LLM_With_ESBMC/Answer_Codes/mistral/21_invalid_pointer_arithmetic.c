#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *base = (int *)malloc(3 * sizeof(int));
    if (!base) {
        return 1;
    }
    int *p = base + 2; // Changed from 3 to 2 to access a valid array index
    p[0] = 10;
    assert(p[0] == 10);
    free(base);
    return 0;
}
