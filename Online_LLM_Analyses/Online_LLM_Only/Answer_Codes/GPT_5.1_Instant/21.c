#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *base = (int *)malloc(3 * sizeof(int));
    if (!base) {
        return 1;
    }
    int *p = base + 2;  // point to last valid element
    p[0] = 10;          // now writing within bounds
    assert(p[0] == 10);
    free(base);
    return 0;
}
