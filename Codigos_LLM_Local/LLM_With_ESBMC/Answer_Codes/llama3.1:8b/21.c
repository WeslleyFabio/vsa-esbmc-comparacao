#include <assert.h>
#include <stdlib.h>

int main(void) {
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