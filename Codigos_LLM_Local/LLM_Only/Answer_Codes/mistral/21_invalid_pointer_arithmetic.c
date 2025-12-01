#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *base = (int *)malloc(3 * sizeof(int));
    if (!base) {
        return 1;
    }
    int *p = base; // Access the first element of the array instead of going beyond its bounds
    p[0] = 10;
    assert(p[0] == 10);
    free(base);
    return 0;
}
