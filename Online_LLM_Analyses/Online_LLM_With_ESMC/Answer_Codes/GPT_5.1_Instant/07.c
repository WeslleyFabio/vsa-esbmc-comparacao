#include <assert.h>
#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 10;
    p[1] = 20;
    free(p);
    p = NULL;        // prevent use-after-free

    // allocate again before use
    p = (int *)malloc(2 * sizeof(int));
    if (!p) {
        return 1;
    }
    p[0] = 30;
    assert(p[0] == 30);
    free(p);
    return 0;
}
